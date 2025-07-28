/*
學號:1102160
姓名:陳廷岳
完成日期:2025/03/03
檔名:D2160PrgHw02_05.CPP
程式功能:計算判斷克拉馬法則 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h> 

int main()
{
	double a, b, c, d, e, f, x, y, D, Dx, Dy ; 				//定義各常數、xy與delta dy dx  
	
	printf("請輸入a,b,c,d,e,f:");									//輸入資料 
	scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
	
	D=a*e-b*d;												// 計算克拉馬法則 
	Dx=c*e-b*f;
	Dy=a*f-c*d; 
	
	if(D!=0) 												//判斷是否有解解為多少 
	{
		x=Dx/D;
		y=Dy/D;
		printf("唯一解:x=%.2f, y=%.2f \n", x, y); 			//輸出結果 
	} 
	else
	{
		if (D=Dx=Dy=0) 
			printf("有無限解 \n");							//輸出結果 
		else
			printf("無解 \n"); 								//輸出結果 
	} 
	 
	
	system("pause");
	return 0;
	
} 
