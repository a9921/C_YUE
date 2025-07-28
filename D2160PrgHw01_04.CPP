/*
學號:1102160
姓名:陳廷岳
完成日期:2025/02/24
檔名:D2160PrgHw01_04.CPP
程式功能:計算BMI與理想體重 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float H, W;				//身高體重變數 
    double BMI, idWm, idWf ;   //BMI、男性理想體重和女性理想體重依變數 
    
    //數據輸入 
    printf("輸入身高cm、體重kg :");
    scanf("%f %f", &H, &W );
    
	
	BMI=W/pow((H/100),2);		//BMI計算式 
	idWm= (H-80)*0.7;			//男性理想體重計算式(kg) 
	idWf=(H-70)*0.6;			//女性理想體重計算式(kg) 
	 
	printf("BMI為%.2f。男性理想體重為%.2f;女性理想體重為%.2f\n",BMI ,idWm ,idWf);		//輸出結果 
    
    system("pause");
    return 0;
    
}
