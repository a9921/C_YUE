/*===================================================================== 
學號:1102160
姓名:陳廷岳 
完成日期:2025/03/24
檔名:D2160PrgHW05_1.CPP
程式功能:(1)重複顯示HelloKitty
		 (2)計算判斷BMI體位
		 (3)四則運算
		 (4)數字大小排序 
===================================================================== */ 

#include <stdio.h>
#include <stdlib.h>

void HelloKitty (int k);									//HelloKitty()函數的原型 
float CalBMI (float kg, float cm);							//CalBMI()函數的原型 
float operation (char op, float a, float b);				//operation()函數的原型 
void sort (int &A, int &B, int &C);							//sort()函數的原型 

int main()
{
	
	int k;  												//定義重複次數k 
	printf("HelloKitty (n次):");							//輸入重複次數 
	scanf("%d", &k);
	HelloKitty(k);											//呼叫HelloKitty()函數重複k次 
	
	
	float kg, cm, BMI;										//定義體重身高與BMI 
	printf("請輸入體重(kg):");								//輸入體重 
	scanf("%f", &kg);
	while (getchar() != '\n');								//清除緩存區 
	printf("請輸入身高(cm):"); 								//輸入身高 
	scanf("%f", &cm);
	while (getchar() != '\n');
	CalBMI(kg, cm); 										//呼叫CalBMI函數 
	
	
	float a, b;												//定義第一個與第二個數字 
	char op;												//定義運算子 
	printf("請輸入第一個數字:");							//輸入第一個數字 
	scanf("%f", &a);
	while (getchar() != '\n'); 
	printf("請輸入運算字元:");								//輸入運算子 
	scanf("%c", &op); 
	while (getchar() != '\n');
	printf("請輸入第二個數字:");							//輸入第二個數字 
	scanf("%f", &b); 
	while (getchar() != '\n');
	printf("結果:%.2f \n", operation(op, a, b));			//呼叫operation函數輸出結果 
	
	
	int A, B, C;											//定義 ABC三個數字 
	printf("請輸入A:");										//輸入A的數字 
	scanf("%d", &A); 	
	printf("請輸入B:");										//輸入B的數字 
	scanf("%d", &B); 
	printf("請輸入C:");										//輸入C的數字 
	scanf("%d", &C); 
	sort(A, B, C);											//呼叫sort函數 
	printf("A=%d < B=%d < C=%d \n", A, B, C);				//輸出ABC的數值大小 
	
	
	system("pause");
	return 0;
}

void HelloKitty (int k)										//自訂的函數HelloKitty() 
{
	int i;													//定義列印次數 
	for (i=1;i<=k;i++)										//列印次數為一次直到大於等於重複次數 
		printf("Hello Kitty \n");							//列印Hello Kitty 
	return; 												//返回主程式 
}

float CalBMI (float kg, float cm)							//自訂的函數CalBMI() 
{
	float m=cm/100.0;										//公尺=公分除100 
	float BMI=kg/(m*m);										//計算BMI 
	
	printf("BMI:%.2f,體位:",BMI);							//輸出BMI值，體位為 
	if(BMI<20)												//如果BMI<20為太瘦 
		printf("太瘦 \n");
	else if(BMI<25)											//如果BMI<25為正常 
		printf("正常 \n");									
	else if(BMI<=28) 										//如果BMI<=28為過重 
		printf("過重 \n");
	else													//如果BMI超過28為肥胖 
		printf("肥胖 \n");
	
	return BMI;												//回傳到主程式的BMI 
}

float operation (char op, float a, float b)					//自訂的函數operation() 
{
	switch (op)												//判斷運算子為何 
	{
		case '+':											
			return a+b;										//如果為+算式為a+b 
		case '-':
			return a-b;										//如果為-算式為a-b 
		case '*':
			return a*b;										//如果為*算式為a*b 
		case '/':											
			return a/b;										//如果為/算式為a/b 
		default:
		{
			printf("無效的運算子 \n");						//如果都不是輸出無效的運算子 
			return 0;
		}	
	}
}

void sort (int &A, int &B, int &C)							//自訂的函數sort() 
{
	int temp;												//定義臨時變數 
	if (A > B)												//如果A>B 
	{
		temp=A;												//A和B交換 
		A=B;
		B=temp;
	}
	if (B > C)												//如果B>C 
	{
		temp=B;												//B和C交換 
		B=C;
		C=temp;
	}
	if (A > B)												//如果A又>B 
	{
		temp=A;												//A和B再次交換 
		A=B;
		B=temp;
	}
	
}
