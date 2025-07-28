/*===================================================================== 
學號:1102160
姓名:陳廷岳 
完成日期:2025/03/24
檔名:myFun.cpp 
程式功能:(1)重複顯示HelloKitty
		 (2)計算判斷BMI體位
		 (3)四則運算
		 (4)數字大小排序 
		 的函式檔 
===================================================================== */ 


#include <stdio.h>
#include <stdlib.h>
#include "myFun.h" 


void HelloKitty (int k)									//自訂的函數HelloKitty() 
{
	int i;										//定義列印次數 
	for (i=1;i<=k;i++)								//列印次數為一次直到大於等於重複次數 
		printf("Hello Kitty \n");						//列印Hello Kitty 
	return; 									//返回主程式 
}

float CalBMI (float kg, float cm)							//自訂的函數CalBMI() 
{
	float m=cm/100.0;								//公尺=公分除100 
	float BMI=kg/(m*m);								//計算BMI 
	
	printf("BMI:%.2f,體位:",BMI);							//輸出BMI值，體位為 
	if(BMI<20)									//如果BMI<20為太瘦 
		printf("太瘦 \n");
	else if(BMI<25)									//如果BMI<25為正常 
		printf("正常 \n");									
	else if(BMI<=28) 								//如果BMI<=28為過重 
		printf("過重 \n");
	else										//如果BMI超過28為肥胖 
		printf("肥胖 \n");
	
	return BMI;									//回傳到主程式的BMI 
}

float operation (char op, float a, float b)						//自訂的函數operation() 
{
	switch (op)									//判斷運算子為何 
	{
		case '+':											
			return a+b;							//如果為+算式為a+b 
		case '-':
			return a-b;							//如果為-算式為a-b 
		case '*':
			return a*b;							//如果為*算式為a*b 
		case '/':										
			return a/b;							//如果為/算式為a/b 
		default:
		{
			printf("無效的運算子 \n");					//如果都不是輸出無效的運算子 
			return 0;
		}	
	}
}

void sort (int &A, int &B, int &C)							//自訂的函數sort() 
{
	int temp;									//定義臨時變數 
	if (A > B)									//如果A>B 
	{
		temp=A;									//A和B交換 
		A=B;
		B=temp;
	}
	if (B > C)									//如果B>C 
	{
		temp=B;									//B和C交換 
		B=C;
		C=temp;
	}
	if (A > B)									//如果A又>B 
	{
		temp=A;									//A和B再次交換 
		A=B;
		B=temp;
	}
	
}
