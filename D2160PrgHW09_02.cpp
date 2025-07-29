/* ===================================================================== 
學    號 ：1102160                                                  
姓    名 ：陳廷岳 
完成日期 ：2025/05/05                                                
檔    名 ：D2160PrgHw09_2.CPP                                       
程式功能 ：指標陣列學期成績計算       
======================================================================== */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student							//定義student結構包含姓名、分數指標、平均 
{
	char Name[20];
	float *score;
	double ave;
};

double mean(float *pA, int num)			//平均成績函數 
{
	int i;
	double ave=0.0, sum=0.0;
	
	for(i=0; i<num; i++)
		sum+=pA[i];						//加總各科成績 
	ave=sum/num;						//總和除於科目數 
	return ave;
} 

int main()
{
	int sub_N, student_N, i, j;
	char **subName;						//科目名稱的動態記憶體 
	struct student *pN;
	
	printf("請輸入課目數:");			//輸入科目數跟人數 
	scanf("%d",&sub_N);
	printf("請輸入人數:");
	scanf("%d",&student_N);
	getchar();							//清除緩存 
	
	subName =(char**)malloc(sizeof(char*)*sub_N); 			//科目數的動態記憶體大小 
	for(i=0; i<sub_N; i++)
	{
		subName[i]=(char*)malloc(sizeof(char)*20);			//科目名稱的動態記憶體大小 
		printf("請輸入第%d科的名稱:",i+1);					//輸入科目名稱 
		fgets(subName[i], 20, stdin);
		subName[i][strcspn(subName[i], "\n")] = '\0';
	}
	
	pN =(struct student*)malloc(sizeof(struct student)*student_N);	//學生人數名稱的動態大小 
	for(i=0; i<student_N; i++)
	{
		printf("請輸入第%d位學生的姓名:",i+1);				//輸入學生名稱 
		fgets(pN[i].Name, 30, stdin);
		pN[i].Name[strcspn(pN[i].Name, "\n")] = '\0';
		
		pN[i].score=(float*)malloc(sizeof(float)*sub_N);	//學生成績的動態記憶體大小 
		for(j=0; j<sub_N; j++)
		{
			printf("請輸入%s成績:",subName[j]);				//輸入成績 
			scanf("%f",&pN[i].score[j]);
		} 
		getchar();
		pN[i].ave=mean(pN[i].score,sub_N);					//呼叫平均函式 
	}
	
	printf("-------------------------------------------------------------- \n");
	printf("%-10s","姓名");									//輸出姓名標題 
	for(i=0; i<sub_N; i++)
		printf("%-8s",subName[i]);							//輸出科目名稱標題 
	printf("平均 \n");										//輸出平均標題 
	
	for(i=0; i<student_N; i++)
	{
		printf("%-10s",pN[i].Name);							//輸出學生名稱 
		for(j=0; j<sub_N; j++)
			printf("%-8.1f",pN[i].score[j]);				//輸出學生成績 
		printf("%.2lf \n",pN[i].ave);						//輸出學生平均 
	}
	

	free(subName);											//釋放記憶體 
	free(pN);
	
	system("pause");
	return 0;	
}
