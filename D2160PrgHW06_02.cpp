/*
學號:1102160
姓名:陳廷岳
完成日期:2025/02/24
檔名:D2160PrgHw06_02.CPP
程式功能:計算各學生期中考成績及其平均與標準差 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Num_Student 5							//學生人數為5 
#define Num_Subject 4							//科目數為4 

int main ()
{
	//學生數列的名字與長度 
	char student[Num_Student][100]={"An Se Young ", "陳雨菲 ", "戴資穎 ", "Akane Yamaguchi ", "Carolina Marin"};
	//科目的名稱與長度 
	char subject[Num_Subject][10]={"羽球", "音樂", "棒球", "足球"};	 
	int score[Num_Student][Num_Subject];				//定義分數的二階陣列 
	int i, j;											//行列變數 
	double Sum=0.0, Sum_STD=0.0;						//總和變數 
	double Mean[Num_Student]={0.0};						//平均值的行列 
	double STD[Num_Student]={0.0};						//標準差的行列 
	
	printf("請輸入各學生的成績: \n");			
	for(i=0;i<Num_Student;i++)							//如果i小於學生人數就執行 
	{
		printf("%s的成績:\n",student[i]);				//顯示要輸入的是哪個學生的成績 
		for(j=0;j<Num_Subject;j++)						//如果j小於科目數就執行 
		{
			printf("%s:",subject[j]);					//科目名稱 
			scanf("%d",&score[i][j]);					//成績輸入 
		} 
	} 
	
	for (i=0; i<Num_Student; i++)						//如果i小於學生數就執行 
	{
		Sum=0.0;										//總和為0 
		Sum_STD=0.0;									 
		
		for (j=0; j<Num_Subject; j++)					//如果j小於課程數就執行 
			Sum+=score[i][j];							//某學生的各科總和 
	
	Mean[i]=Sum/Num_Subject;							//某學生的平均 
	
	Sum_STD=0.0;										//標準差的總和為0 
	for(j=0; j<Num_Subject; j++)						//如果j小於科目數就執行 
		Sum_STD+=pow(score[i][j]-Mean[i],2);			//總和為分數減去平均平方 
	
	STD[i]=sqrt(Sum_STD/Num_Subject);					//總和除於科目數開根號 
	}
	
	printf("\n%-20s","姓名");							//顯示輸入的結果 
	for (j=0; j<Num_Subject; j++)
		printf("%-10s", subject[j]);
	printf("%-10s%-10s\n", "平均", "標準差");
	
	for(i=0; i<Num_Student; i++)
	{
   		printf("%-20s", student[i]); 
    
    	for(j=0; j<Num_Subject; j++)
        	printf("%-10d", score[i][j]);

    	printf("%-10.2f%-10.2f\n", Mean[i], STD[i]);
	}
	
	system ("pause");
	return 0;
}

