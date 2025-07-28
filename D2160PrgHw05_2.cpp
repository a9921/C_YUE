/*===================================================================== 
學號:1102160
姓名:陳廷岳 
完成日期:2025/03/24
檔名:D2160PrgHW05_2.CPP
程式功能:(1)重複顯示HelloKitty
		 (2)計算判斷BMI體位
		 (3)四則運算
		 (4)數字大小排序 
		 的主程式 
===================================================================== */ 

#include <stdio.h>
#include <stdlib.h>
#include "myFun.h" 

int main()
{
	
	int k;  									//定義重複次數k 
	printf("HelloKitty (n次):");							//輸入重複次數 
	scanf("%d", &k);
	HelloKitty(k);									//呼叫HelloKitty()函數重複k次 
	
	
	float kg, cm, BMI;								//定義體重身高與BMI 
	printf("請輸入體重(kg):");							//輸入體重 
	scanf("%f", &kg);
	while (getchar() != '\n');							//清除緩存區 
	printf("請輸入身高(cm):"); 							//輸入身高 
	scanf("%f", &cm);
	while (getchar() != '\n');
	CalBMI(kg, cm); 								//呼叫CalBMI函數 
	
	
	float a, b;									//定義第一個與第二個數字 
	char op;									//定義運算子 
	printf("請輸入第一個數字:");							//輸入第一個數字 
	scanf("%f", &a);
	while (getchar() != '\n'); 
	printf("請輸入運算字元:");							//輸入運算子 
	scanf("%c", &op); 
	while (getchar() != '\n');
	printf("請輸入第二個數字:");							//輸入第二個數字 
	scanf("%f", &b); 
	while (getchar() != '\n');
	printf("結果:%.2f \n", operation(op, a, b));					//呼叫operation函數輸出結果 
	
	
	int A, B, C;									//定義 ABC三個數字 
	printf("請輸入A:");								//輸入A的數字 
	scanf("%d", &A); 	
	printf("請輸入B:");								//輸入B的數字 
	scanf("%d", &B); 
	printf("請輸入C:");								//輸入C的數字 
	scanf("%d", &C); 
	sort(A, B, C);									//呼叫sort函數 
	printf("A=%d < B=%d < C=%d \n", A, B, C);					//輸出ABC的數值大小 
	
	
	system("pause");
	return 0;
}
