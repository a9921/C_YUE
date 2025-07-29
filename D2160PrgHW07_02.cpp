/* ===================================================================== 
學    號 ：1102160                                                  
姓    名 ：陳廷岳 
完成日期 ：2025/04/07                                                
檔    名 ：D2160PrgHw07_2.CPP                                       
程式功能 ：學生的各科分數與平均標準差結構函數       
======================================================================== */ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define Student_N 3							//學生人數為3 
#define Subject 5							//科目數為5 

struct Date									//一級結構型態Date，包含年月日 
{
	int year;
	int month;
	int day;
};

struct Student								//二級結構型態Student，包含姓名、生日(一級結構Date)、分數、平均、標準差 
{
	char name[20];
	struct Date birthday;
	int score[Subject];
	float ave;
	float STD;
};

int main()
{
	int i, j;									//整數變數i、j 
	float Sum, Sum_STD;							//浮點數變數 Sum、Sum_STD 
	struct Student A[Student_N];				//二級結構代稱A[] 
	const char* Subject_Name[Subject] = {"電影", "音樂", "棒球", "足球", "羽球"};		//一級結構科目名稱 

	for (i = 0; i < Student_N; i++)						//當I小於學生數時執行 
	{
		printf("第%d位姓名:", i + 1);					//輸入第i+1位姓名	 
		fgets(A[i].name, sizeof(A[i].name), stdin);		 
		A[i].name[strcspn(A[i].name, "\n")] = '\0'; 	//去除fget的\n 

		printf("西元年:");								//輸入西元年 
		scanf("%d", &A[i].birthday.year);
		printf("月份:");								//輸入月份 
		scanf("%d", &A[i].birthday.month);
		printf("日:");									//輸入日期 
		scanf("%d", &A[i].birthday.day);

		while (getchar() != '\n');  					//清理緩衝區 

		Sum = 0.0;										//分數總和為0 
		Sum_STD = 0.0;									//分數種合(標準差)為0 

		for (j = 0; j < Subject; j++)					//如果j小於科目數時執行 
		{
			printf("%s成績:", Subject_Name[j]);			//輸入Subject的第j科的成績 
			scanf("%d", &A[i].score[j]);
			Sum += A[i].score[j]; 						//加總至分數總和 
		}
		A[i].ave = Sum / Subject; 						//平均為分數總和除於科目數 
		

		for (j = 0; j < Subject; j++)					//如果j小於科目數時執行 
		{
			Sum_STD += pow(A[i].score[j] - A[i].ave, 2); 	//分數總和(標準差)為第i位學生的j分數減去平均平方加總 
		}
		A[i].STD = sqrt(Sum_STD / Subject); 			// 標準差為分數總和(標準差)除於科目數開根號 

		while (getchar() != '\n');						//清除緩衝區 
	}
	
	printf("\n%20s %12s", "姓名", "生日");				//顯示姓名生日的標題 
	for (i = 0; i < Subject; i++)						//如果i小於科目數便執行 
		printf("%10s", Subject_Name[i]);				//輸出第i個科目名的標題 
	printf("%10s %10s \n", "平均", "標準差");			//輸出平均、標準差的標題 
	
	for (i = 0; i < Student_N; i++)						//如果i小於學生數時執行 
	{
		printf("%20s %10d/%d/%d", A[i].name, A[i].birthday.year, A[i].birthday.month, A[i].birthday.day);	//顯示Student[i]的姓名，生日年月日 
		for (j = 0; j < Subject; j++)					//如果j小於科目數時執行 
		{
			printf("%10d", A[i].score[j]);				//輸出Student[i].score[j]的分數 
		}
		printf("%10.2f %10.2f\n", A[i].ave, A[i].STD); //輸出Student[i]的平均與標準差 
	}


	system("pause");
	return 0;
}
