/*
學號:1102160
姓名:陳廷岳
完成日期:2025/03/03
檔名:D2160PrgHw02_03.CPP
程式功能:計算判斷BMI 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h> 

int main()
{
	double cm, kg, BMI, mkg, fkg;				//定義身高、體重、BMI、男性理想體重、女性理想體重的變數 
	
	printf("輸入身高cm與體重kg:");				//輸入身高與體重 
	scanf("%lf %lf",&cm, &kg); 
	
	BMI=kg/pow((cm/100),2);						//計算BMI與男性理想體重與女性理想體重 
	mkg=(cm-80)*0.7; 
	fkg=(cm-70)*0.6; 
	
	
	printf("你的BMI為%.2f \n",BMI);				//輸出BMI、男性理想體重與女性理想體重的結果 
	printf("男性理想體重為%.1f；女性理想體重為%.1f \n", mkg, fkg); 
	
	if(BMI<20)									//判斷BMI是過瘦、正常、過重、肥胖，並輸出結果 
		printf("太瘦 \n");
	else
	{
		if(BMI <=25)
			printf("正常 \n");
		else
		{
			if(BMI <28)
				printf("過重 \n");
			else
			{
				printf("肥胖 \n"); 
			} 
		} 
	}
 
	system("pause");
	return 0;
	
} 
