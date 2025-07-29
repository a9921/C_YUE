/* ===================================================================== 
學    號 ：1102160                                                  
姓    名 ：陳廷岳 
完成日期 ：2025/04/24                                                
檔    名 ：D2160PrgHw08_3.CPP                                       
程式功能 ：BMI體態計算   
======================================================================== */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 3									//學生人數位3 

struct student									//定義結構函數student的內容， 姓名、身高、體重、BMI、體態 
{
	char name[50];								 
	double height;
	double weight;
	double BMI;
	char type[10];
};

void calculateBMI(struct student*A)				//定義函數 calculateBMI輸入內容結構student指標A
{
	for(int i=0; i<SIZE; i++)					//當i小於SIZE時執行 
	{
		double H=A[i].height/100.0;				//H=A[i]的身高除於100 
		A[i].BMI=A[i].weight/(H*H);				//A[i]的BMI=A[i]的體重/H平方 
		
		if(A[i].BMI<20)							//如果A[i]的BMI小於20時執行 
			strcpy(A[i].type, "太瘦");			//輸入A[i].type為太瘦 
		else if(A[i].BMI<25)					//如果A[i]的BMI小於25時執行 
			strcpy(A[i].type, "標準");			//輸入A[i].type為標準 
		else if(A[i].BMI<=28)					//如果A[i]的BMI小於等於28時執行 
			strcpy(A[i].type, "過重");			//輸入A[i].type為過重 
		else									//如果A[i]的BMI大於28時執行 
			strcpy(A[i].type, "肥胖"); 			//輸入A[i].type為肥胖 
	}
}

int main()
{
	struct student A[SIZE];						//結構student名為A人數為SIZE 3 
	
	for(int i=0; i<SIZE; i++)					//當i小於SIZE時執行 
	{
		printf("輸入第%d位學生的姓名:",i+1);			//輸入第i+1位的學生姓名 
		fgets(A[i].name, sizeof(A[i].name), stdin); 	 
		A[i].name[strcspn(A[i].name, "\n")] = '\0';		//清除A[i].name的\n改為\0 
		printf("身高(cm):");							//輸入身高 
		scanf("%lf",&A[i].height);
		printf("體重(kg):");							//輸入體重 
		scanf("%lf",&A[i].weight);
		while(getchar()!='\n');							//清除緩存 
	}
	
	calculateBMI(A);									//呼叫 calculateBMI函數 
	printf("\t姓名\t   身高(cm) \t體重(kg) \t BMI \t\t體位 \n");	//輸出姓名身高體重BMI跟體位 
	for(int i=0; i<SIZE; i++)										//當i小於SIZE時執行
																	//輸出A[i]的姓名身高體重BMI與體位 
		printf("%-20s %.1f\t%.1f\t\t%.2f\t\t%s \n",A[i].name ,A[i].height ,A[i].weight ,A[i].BMI ,A[i].type);
	
	
	system("pause");
	return 0;
}
