/*
學號:1102160
姓名:陳廷岳
完成日期:2025/02/24
檔名:D2160PrgHw01_01.CPP
程式功能:計算圓錐面積體積
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float h, r, pi=3.14;					// 圓錐高、圓半徑自變數，宣告π數值 
    double s, SA, BA, Area, V;

    printf("輸入圓錐的高及半徑:");			//資料輸出 
    scanf("%f %f", &h, &r);
    
	s=sqrt(pow(h,2)+pow(r,2));				//圓錐斜邊計算式 
    SA=pi*s*r;								//圓錐側面積計算式 
    BA=pi*pow(r,2);							//圓錐底面積計算式 
    Area=SA+BA;								//圓錐表面積計算式 
    V=(1.0/3)*pi*h*pow(r,2);				//圓錐體雞計算式 
    printf("面積=%.2f , 體積=%.2f\n",Area ,V);		//結果輸出 

    system("pause");
    return 0;
}


