/*
學號:1102160
姓名:陳廷岳
完成日期:2025/02/24
檔名:D2160PrgHw06_03.CPP
程式功能:模擬彩券開獎號碼 
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Lotto 7									//開獎號碼為7個 
#define Max 42									//彩球有42個 

int repeat (int Total[], int size, int Num)		//檢測數值是否重複的函數 
{
	for(int i=0;i<size;i++)						// 當i小於 number[]的數字時執行 
	{
		if(Total[i]==Num)						//如果號碼已經存在 
			return 1;							//重抽一次 
	}
	return 0;
}

void random (int number[])						//隨機產生7個號碼的函數 
{
	int i, num;
	
	for (i=0;i<Lotto;i++)						//當i小於Lotto的7時執行 
	{
		do
		{
			num=rand() % Max+1;					//產生1~42的隨機數 
		}while(repeat(number, i, num));			//若由重複重新產生 
		
		number[i]=num;							//產生的數字存入陣列 
	}
}


int main()
{
	int number[Lotto]={0};						//初始化陣列 
	char choice;
	srand(time(NULL));							//產生隨機數 
	
	do
	{
		random(number);							//產生中獎號碼 
		printf("中獎號碼:");
		for (int i=0; i<Lotto; i++)				//當i小於7時執行 
			printf("%d ", number[i]);			//顯示抽出的號碼 
		printf("\n");
	
		printf("是否繼續?(y/n)");				//問是否重新抽取 
		scanf(" %c",&choice);
	
	}while(choice=='y'||choice=='Y');			//若輸入y、Y則繼續 
	
	system("pause");
	return 0;
}
