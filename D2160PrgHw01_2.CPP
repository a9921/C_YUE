/*
學號:1102160
姓名:陳廷岳
檔名:D2160PrgHw01_01.CPP
程式功能:纜繩張力T
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float Lc, Lb, D, W;						// 繩長度、纜繩支撐長度、連接纜繩處到樑柱軸的距離、懸掛重量自變數 
    double T;							//繩張力依變數 
    
    printf("輸入Lc、Lb、D、W ,Lc>D且Lb≧D:");			//資料輸入 
    scanf("%f %f %f %f", &Lc, &Lb, &D, &W );
    
	T= (Lb*Lc*W)/(D * sqrt(pow(Lc, 2) - pow(D, 2)));	//繩張力計算式 
	printf("纜繩張力T=%.2f\n",T);				// 輸出結果 
	fflush(stdout); 
    
    system("pause");
    return 0;
    
}
