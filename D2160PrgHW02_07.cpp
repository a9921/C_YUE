/*
學號:1102160
姓名:陳廷岳
完成日期:2025/03/03
檔名:D2160PrgHw02_07.CPP
程式功能:計算商品總銷售額 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h> 

int main()
{
	int n, q;				//定義商品號碼、銷售量 
	double p, total;			//定義商品價格、總銷售額 
	
	printf("請輸入商品號碼(1-5):");		//輸入商品號碼 
	scanf("%d", &n);
	
	printf("請輸入銷售量:");			//輸入銷售量 
	scanf("%d", &q);
	
	switch(n)				//判斷商品號碼的價格 
	{
		case 1:
        	p = 2.78;
            break;
        case 2:
            p = 3.72;
            break;
        case 3:
            p = 8.79;
            break;
        case 4:
            p = 5.32;
            break;
        case 5:
            p = 4.26;
            break;
        default:
            printf("輸入錯誤 請輸入 1-5 之間的商品號碼 \n");
	}
	
	total=p*q;				// 計算總銷售額 
	
	printf("商品號碼:%d \n", n);		//輸出結果 
	printf("銷售量:%d \n", q);
	printf("售價:%.2f \n", p);
	printf("總金額:%.2f \n", total); 
	
	system("pause");
	return 0;
}
