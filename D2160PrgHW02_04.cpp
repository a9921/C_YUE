/*
學號:1102160
姓名:陳廷岳
完成日期:2025/03/03
檔名:D2160PrgHw02_04.CPP
程式功能:計算判斷閏年與天數 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h> 

int main()
{
	int y, m, d;							//定義年月日的變數 
	
	printf("輸入西元年與月份");					//輸入年與月份 
	scanf("%d %d", &y, &m);
	
	int Ly=0; 							//預設為平年 
	if((y %4 == 0 && y%100 !=0)||(y % 400 == 0 && y %4000 !=0))	//判斷是否為閏年 
	{ 
		Ly=1; 
		printf("是閏年");
	} 
	else
	{
		printf("不是閏年"); 
	} 
	
	switch(m)							//判斷月份天數 
	{
		case 2 :						//2月份與天數 
		{	
			d=Ly?29:28;
			printf("這是 %s ， %d 月有 %d 天 \n", Ly? "閏年" : "平年", m, d);
			break;
		}
		case 4 : case 6 : case 9 : case 11:			//小月天數 
		{	
			d=30;
			printf("%d 月是小月，有30天 \n", m); 
			break;
		} 
		default:						//大月天數 
		{	
			printf("%d 月是大月，有31天 \n",m); 
			break;
		}	 
	} 
	
	system("pause");
	return 0;
	
} 
