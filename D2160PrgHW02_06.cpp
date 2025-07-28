/*
學號:1102160
姓名:陳廷岳
完成日期:2025/03/03
檔名:D2160PrgHw02_06.CPP
程式功能:判斷月份季節 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h> 

int main()
{
	int m;							//定義月份變數 
	
	printf("輸入月份:");					//輸入月份 
	scanf("%d",&m) ;
	
	switch(m)						//確認月份季節 
	{
		case 3: case 4: case 5:
			printf("春 \n");
			break; 
		case 6: case 7: case 8: 
			printf("夏 \n");
			break;
		case 9: case 10: case 11:
			printf("秋 \n");
			break;
		case 12: case 1: case 2:
			printf("冬 \n"); 
			break;
		default:
			printf("輸入錯誤 \n"); 			//數字不在1~12 
			break;
	} 
	
	system("pause");
	return 0;
	
}
 
