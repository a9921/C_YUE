/* ===================================================================== 
學    號 ：1102160                                                  
姓    名 ：陳廷岳 
完成日期 ：2025/04/24                                                
檔    名 ：D2160PrgHw08_1.CPP                                       
程式功能 ：大小排序(指標)       
======================================================================== */ 

#include <stdio.h>
#include <stdlib.h>

void sort(int *a, int *b, int *c)					//定義函數sort 
{
	int temp;
	if(*a<*b)							//如果a位置的值小於b位置的值 
	{
		temp=*a;						//a所指的的值存到temp 
		*a=*b;							//b所指的值複製到a指的位置
		*b=temp;						//原本的a值（temp）複製到b所指的位置
	}
	if(*a<*c)							//如果a位置的值小於c位置的值
	{
		temp=*a;						//a所指的的值存到temp 
		*a=*c;							//c所指的值複製到a指的位置
		*c=temp;						//原本的a值（temp）複製到c所指的位置
	}
	if(*b<*c)							//如果b位置的值小於c位置的值
	{
		temp=*b;						//b所指的的值存到temp 
		*b=*c;							//c所指的值複製到b指的位置
		*c=temp;						//原本的b值（temp）複製到c所指的位置
	}
}

int main()
{
	int a, b, c;
	
	printf("請輸入a:");						//輸入abc的值 
	scanf("%d",&a);
	while(getchar()!='\n');						//清除緩存 
	printf("請輸入b:");
	scanf("%d",&b);
	while(getchar()!='\n');
	printf("請輸入c:");
	scanf("%d",&c);
	while(getchar()!='\n');
	
	sort(&a, &b, &c);						//呼叫sort函數 
	
	printf("a=%d > b=%d > c=%d \n", a, b, c);			//輸出結果abc的值與大小 
	
	system("pause");
	return 0;
}
