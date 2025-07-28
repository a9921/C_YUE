/*===================================================================== 
學號:1102160
姓名:陳廷岳 
完成日期:2025/03/117
檔名:D2160PrgHW04_2.CPP
程式功能:(1)電腦猜拳遊戲
		 (2)五戰三勝制 
===================================================================== */ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	
	int user, cpu;							//定義使用者輸入的數值與電腦的數值變數 
	int userWIN=0, cpuWIN=0;					//定義使用者勝利與電腦勝利的次數變數 
	char sel;							//定義選擇字元的變數 
	
	srand(time(NULL));						//初始話亂數 
	
	do
	{
	
		printf("請出拳(剪刀(1)、石頭(2)、布(3)):");		//輸入使用者數值 
		scanf("%d", &user);
		
		
		cpu=rand()%3+1;						//電腦隨機出拳數值 
		
		printf("你出:");					//顯示使用者結果 
		switch (user)						//判斷使用者出何種拳 
		{
			case 1:
				printf("剪刀 \n");
				break;
			case 2:
				printf("石頭 \n");
				break;
			case 3:
				printf("布 \n");
				break;
			default :
				printf("輸入錯誤 \n"); 
				return 1;
		} 
		
		printf("電腦出:");					//顯示電腦出拳結果 
		switch (cpu)						//判斷電腦出何種拳 
		{
			case 1:
				printf("剪刀 \n");
				break;
			case 2:
				printf("石頭 \n");
				break;
			case 3:
				printf("布 \n");
				break;
		}
		
		if (user==cpu)						//判斷使用者與電腦猜拳結果 
			{
				printf("平手,再一次 \n");
				sel = 'Y';
			}
		else if ((user==1 && cpu==3)||(user==2 && cpu==1)||(user==3 && cpu==2))
			{
				printf("你贏了!\n");
            	printf("是否繼續?(Y/N): ");
				scanf(" %c", &sel);
			}
		else
			{
				printf("電腦贏了!\n");
            	printf("是否繼續?(Y/N): ");
            	scanf(" %c", &sel);
			}
					
	}while (sel=='Y'||sel=='y');					//判斷使用者是否繼續 
	
	do
	{
		userWIN=0;						//定義使用者勝利與電腦勝利次數初始值 
		cpuWIN=0;
		
		while(userWIN<3 && cpuWIN<3)				//當使用者或電腦勝利小於3次時執行 
		{
			printf("五戰三勝請出拳(剪刀(1)、石頭(2)、布(3)):");
			scanf("%d", &user);
			while (getchar() != '\n');
			
			cpu =rand()%3+1;
			
			printf("你出:");
			switch(user)
			{
			case 1:
				printf("剪刀 \n");
				break;
			case 2:
				printf("石頭 \n");
				break;
			case 3:
				printf("布 \n");
				break;
			default :
				printf("輸入錯誤 \n"); 
				return 1;
			} 
			
			printf("電腦出:");
			switch (cpu)
			{
				case 1:
					printf("剪刀 \n");
					break;
				case 2:
					printf("石頭 \n");
					break;
				case 3:
					printf("布 \n");
					break;
			}
			
			if (user==cpu)
			{
				printf("平手,再一次 \n");
				sel = 'Y';
			}
			else if ((user==1 && cpu==3)||(user==2 && cpu==1)||(user==3 && cpu==2))	//如果使用者勝利勝場加1 
			{
				printf("你贏了!\n");
				userWIN++;
            }
			else
			{
				printf("電腦贏了!\n");				//如果電腦勝利電腦勝場加1 
				cpuWIN++;
			}
			printf("目前分數:你 %d - 電腦 %d \n", userWIN, cpuWIN);	//輸出現在各勝場次數 
		}
		
		if (userWIN==3)							//判斷何者完全勝利 
			printf("恭喜你,五戰三勝 \n");
		else
			printf ("電腦五戰三勝 \n");
		
		printf("是否繼續?(Y/N):");					//是否繼續猜拳 
		scanf("%c", &sel);
        while (getchar() != '\n');
	}while (sel=='Y'||sel=='y');
	 
	
	
	system("pause");
	return 0;
}


