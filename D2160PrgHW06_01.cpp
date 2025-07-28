/*
學號:1102160
姓名:陳廷岳
完成日期:2025/02/24
檔名:D2160PrgHw06_01.CPP
程式功能:成績最大值最小值平均標準差計算 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Num 5							//科目數為5 

int main()
{
	char Name[100];						//定義輸入名稱及其長度 
	int score[Num], i, num;					//定義分數的長度 與其他變數 
	double Min, Max, Mean, STD, Sum=0.0, SumSTD=0.0;	// 定義最大值最小值平均標準差總和 
	 
	printf("請輸入名字:");					//輸入名字	 
	gets(Name);
	
	i=0;
	while(i<Num)						//當i小於5時執行 
	{
		printf("請輸入成績:");				//輸入各科成績 
		scanf("%d",&score[i]);
		
		if(i==Num)					//當i等於5時停止 
		{
			printf("輸入完成 \n");
			break;	
		}
		i++;
	}
	
	Min=Max=score[0];					//將最大最小值為陣列的數值 
	for (i=0;i<Num;i++)					//i小於5時執行 
	{
		if(score[i]>Max)				//如果陣列的數值大於最大值 
			Max=score[i];				//最大值為其值 
		if(score[i]<Min)				//如果陣列的數值小於最小值 
			Min=score[i];				//最小值為其值 			
			
	}
		
	num=i;
	for(i=0;i<num;i++)					//將陣列的各數值相加 
		Sum+=score[i];
	Mean=Sum/num;						//平均為總和除以科目數量 
	
	for(i=0;i<Num;i++)
		SumSTD+=pow(score[i]-Mean,2); 			//數值減去平均平方 
	STD=sqrt((SumSTD)/(Num-1));				//在除於N-1開根號 
	
	
	printf("姓名:%s \n",Name);				//顯示各項的結果 
	printf("平均為:%.2f \n",Mean);
	printf("最小值為:%.2f \n",Min);
	printf("最大值為:%.2f \n",Max); 
	printf("標準差為:%.2f \n",STD);
	
	
	system ("pause");
	return 0;
}
