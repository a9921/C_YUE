/* ===================================================================== 
學    號 ：1102160                                                  
姓    名 ：陳廷岳 
完成日期 ：2025/04/07                                                
檔    名 ：D2160PrgHw07_1.CPP                                       
程式功能 ：姓名身高體重BMI體態的結構函數        
======================================================================== */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 5							//學生數為5 

struct student							//結構函數student，包含姓名、身高、體重、BMI、體態 
{
	char Name[15];
	float height;
	float weight;
	float BMI;
	const char* body_sharp;
};

int main()
{
	struct student A[N];					//呼叫結構函數student代稱為A 
	int i;							//整數變數i 
	
	for(i=0; i<N; i++)					//如果i小於學生數便執行 
	{
		printf("請輸入第%d位的姓名:",i+1);		//輸入第i+1位學生的姓名 
		fgets(A[i].Name, sizeof(A[i].Name), stdin);
		A[i].Name[strcspn(A[i].Name,"\n")]='\0';	//清除fget的換行符 
		printf("請輸入體重(kg)");			//輸入體重 
		scanf("%f",&A[i].weight);
		printf("請輸入身高(cm)");			//輸入身高 
		scanf("%f",&A[i].height);
		getchar();					//清除緩存區 
		
		A[i].BMI=A[i].weight/pow((A[i].height/100.0),2);//student的BMI為體重除於身高除於100的平方 
		
		if(A[i].BMI<20)					//如果BMI小於20體態為太瘦 
			A[i].body_sharp="太瘦";
		else if(A[i].BMI<=25)				//小於25為標準 
			A[i].body_sharp="標準";
		else if(A[i].BMI<=28)				//小於28為過重 
			A[i].body_sharp="過重";
		else 						//其餘為肥胖 
			A[i].body_sharp="肥胖";	
	}
	
	printf("\n%15s %15s %15s %15s %15s \n","姓名", "身高", "體重", "BMI", "體態");	//輸出標題 
	for(i=0; i<N; i++)														//如果i小於學生數時執行 
		printf("%15s %15.2f %15.2f %15.2f %15s \n", A[i].Name, A[i].height, A[i].weight, A[i].BMI, A[i].body_sharp);		//輸出學生[i]的姓名身高體重BMI與體態 
	
	system("pause");
	return 0;
}
