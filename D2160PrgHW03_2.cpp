/*===================================================================== 
學號:1102160
姓名:陳廷岳 
完成日期:2025/03/10
檔名:D2160PrgHW03_3.CPP
程式功能:用梯形積分法計算右式的值
===================================================================== */ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159						//定義π 
#define START 0							//積分下界 
#define END (3*PI) 						//積分上界3π 

double f(double x)						//定義積分函數f(x)=√e^x + cos(x^2) 
{
	return sqrt(exp(x)+cos(x*x));
}
	
double trap(int num)						//用梯形積分法計算積分 
{
	double a=START, b=END;
	double h=(b-a)/num;					// 區間寬 
	double sum=0;
	
	sum+=(f(a)+f(b))/2;					//計算f(a)、f(b) 
	
	for(int i=1; i<num; i++)				//累加中間點 
	{
		double x=a+i*h;
		sum+= f(x);
	}
		
	return sum*h;						//乘上區間寬度 
}

int main()
{
	
	int num;
	printf("輸入區間數:");					//輸入區間數 
	scanf("%d",&num); 
	
	double ans= trap(num);					//計算積分 
	
	printf("積分質為=%.4f \n",ans);				//輸出結果 
	
	system("pause");
	return 0;
	
} 
