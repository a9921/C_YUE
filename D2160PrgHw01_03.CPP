/*
學號:1102160
姓名:陳廷岳
檔名:D2160PrgHw01_03.CPP
程式功能:計算一元二次方程式 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;						//資料自變數 
    double X1,X2;						//依變數二解 
    
    printf("輸入a、b、c ,a、b、c值要滿足b^2>=4ac:");		//資料輸入 
    scanf("%f %f %f", &a, &b, &c);
    
	X1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);			//輸出結果1 
	X2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);			//輸出結果2 
	printf("一元二次方程解=%.2f、%.2f\n",X1, X2);
    
    system("pause");
    return 0;
    
}
