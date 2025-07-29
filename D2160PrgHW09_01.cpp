/* ===================================================================== 
學    號 ：1102160                                                  
姓    名 ：陳廷岳 
完成日期 ：2025/05/05                                                
檔    名 ：D2160PrgHw09_1.CPP                                       
程式功能 ：指標陣列學期成績計算       
======================================================================== */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Sub_N 5						//科目數5科 

struct student						//宣告student結構 包含姓名、五科成績、學期成績 
{	
	char Name[20];
	float scores[Sub_N];
	float final;
};

void calfinal (struct student *s)	//成績計算函數 
{
	s->final=(s->scores[0]+s->scores[1])*0.15+(s->scores[2]+s->scores[3])*0.2+s->scores[4]*0.3;
}

int main()
{
	//欄位標題的指標陣列 
	const char *ptest[]={"姓名","小考1","小考2","期中考1","期中考2","期末考","學期成績"};
	int Num, i, j;
	student *pN;								//pN指向student結構 
	
	printf("請輸入學生人數:");					//輸入人數 
	scanf("%d",&Num);
	fflush(stdin);								//清空緩存 
	
	pN =(student*)malloc(sizeof(student)*Num); 			//學生陣列的動態位置大小 
	
	for(i=0; i<Num; i++)								//如果i小於人數時執行 
	{
		fflush(stdin);
		printf("請輸入第%d個人的姓名:",i+1);			//輸入第i+1個人的姓名 
		gets(pN[i].Name);
		
		printf("請輸入%s的小考1成績:",pN[i].Name);		//輸入第i+1個人的小考1成績 
		scanf("%f", &pN[i].scores[0]); 
		printf("請輸入%s的小考2成績:",pN[i].Name);		//輸入第i+1個人的小考2成績 
		scanf("%f", &pN[i].scores[1]); 
		printf("請輸入%s的期中考1成績:",pN[i].Name);	//輸入第i+1個人的期中考1成績 
		scanf("%f", &pN[i].scores[2]); 
		printf("請輸入%s的期中考2成績:",pN[i].Name);	//輸入第i+1個人的期中考2成績 
		scanf("%f", &pN[i].scores[3]); 
		printf("請輸入%s的期末考成績:",pN[i].Name);		//輸入第i+1個人的期末考成績 
		scanf("%f", &pN[i].scores[4]); 
		
		getchar();										//清除緩存 
		calfinal(&pN[i]);								//將pN[i]的成績加進calfinal函數計算 
	}
	
	printf("-------------------------------------------------------------- \n");
														//輸出指標陣列的題目 
	printf("%-9s %-6s %-6s %-8s %-8s %-8s %-9s\n ",ptest[0], ptest[1], ptest[2], ptest[3], ptest[4], ptest[5], ptest[6]);
	printf("-------------------------------------------------------------- \n");
	
	for(i=0; i<Num; i++)								//當i小於人數時執行 
	{
		printf("%-10s", pN[i].Name);					//輸出姓名 
		for(j=0; j<Sub_N; j++)							//當j小於科目數時執行 
			printf("%-8.1f", pN[i].scores[j]);			//輸出科目成績 
		printf("%8.2f \n", pN[i].final);				//輸出學期成績 
	}
	printf("-------------------------------------------------------------- \n");
	
	free(pN);											//釋放空間 
	system("pause");
	return 0;
}
