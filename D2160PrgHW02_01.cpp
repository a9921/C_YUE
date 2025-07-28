/*
學號:1102160
姓名:陳廷岳
完成日期:2025/03/03
檔名:D2160PrgHw02_01.CPP
程式功能:計算折扣消費金額 
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	double money ;								//定義金額變數 
	
	printf("請輸入消費金額");						//輸入金額 
	scanf("%lf", &money);
	
	if(money>10000)
			printf("折扣後金額為:%f \n", money*0.55);		//如果消費金額大於10000的折扣 
	else
	{
		if(money>5000&&money<10000)					//如果消費金額大於5000小於10000的折扣 
		 printf("折扣後金額為:%f \n", money*0.6);
		else
			{
			if(money>2000&&money<5000)				//如果消費金額大於2000小於5000的折扣 
				printf("折扣後金額為:%f \n", money*0.7);
			else
				printf("金額為:%f \n", money);			//消費金額不滿足折扣條件顯示原價 
			}
	}
	system("pause");
	return 0;
}
