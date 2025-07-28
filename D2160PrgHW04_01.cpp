/*===================================================================== 
學號:1102160
姓名:陳廷岳 
完成日期:2025/03/117
檔名:D2160PrgHW04_1.CPP
程式功能:計算BMI判斷體位計算體位人數與平均 
===================================================================== */ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double BMICOUNT (double W, double H)					//定義BMI的算式 
{
	double bmi = W/((H/100.0)*(H/100));
	printf("BMI:%.2f \n", bmi);
	
	if (bmi<20)							//判斷體位為何種 
	{
		printf("過輕 \n");
	}
	else
		if (bmi>=20 && bmi<=25)
		{
			printf("正常 \n");
		}
		else 
			if(bmi>25 && bmi<=28)
			{
				printf("過重 \n");
			}
			else
			{
				printf("肥胖 \n");
			}
		return bmi;
}

int main()
{
	
	int num;							//定義人數變數 
	char sel;							//定義選擇字元變數 
	
	do								//至少執行一次迴圈 
	{
		printf("請輸入檢測人數:");				//輸入檢測人數 
		scanf("%d",&num);
		while(getchar() != '\n');				// 清除輸入緩衝區 
	
		double totalH=0, totalW=0;				//定義總身高與體重變數 
		int BMI20=0, BMI25=0, BMI28=0, BMI29=0;			//定義各體位人數變數 
		
		int i=0;						//定義變數初始值 
		while (i<num)						//當變數小於檢測人數時執行 
		{
			double H, W;					//定義身高體重變數 
			
			printf("第 %d 位:\n", i + 1);			//輸出現在第幾位在輸入資料 
        	printf("身高(cm): ");					//輸入身高 
            scanf("%lf", &H);
            while(getchar() != '\n');					//輸入體重 
            printf("體重(kg): ");
            scanf("%lf", &W);
            while(getchar() != '\n');					//清除輸入緩衝區 
			
			totalH += H;					//體重身高加總入總身高與體重 
			totalW += W;
			
			double bmi=BMICOUNT(W, H);			//定義BMI的變數與算式 
			
			if(bmi<20)					//統計判斷加總各體位的人數 
				BMI20++;
			else
				if(bmi>=20 && bmi<=25)
					BMI25++;
				else
					if(bmi>25 && bmi<=28)
						BMI28++;
					else
						BMI29++;
			
			i++;
		}
		
		printf("平均身高: %.2f cm \n",totalH/num);		//輸出平均數值各體位人數的結果 
		printf("平均體重: %.2f kg \n",totalW/num);
		printf("BMI <20 的人數: %d \n",BMI20);
		printf("BMI 20~25 的人數: %d \n",BMI25);
		printf("BMI 25~28 的人數: %d \n",BMI28);
		printf("BMI >28 的人數: %d \n",BMI29);
		
		printf("是否重新輸入BMI? Y/N:");				//輸入是否重新執行BMI 
		scanf("%c", &sel);
		
	}while (sel=='Y' || sel=='y');					//判斷選擇 
	
	system("pause");
	return 0;
	
} 
