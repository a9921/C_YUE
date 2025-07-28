/*===================================================================== 
學號:1102160
姓名:陳廷岳 
完成日期:2025/03/117
檔名:D2160PrgHW04_3.CPP
程式功能:驗證一個身分證字號是否是有效的號碼，並判斷其性別及籍貫
===================================================================== */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int alphabet(char letter)      						 //定義函數把字母轉換成數值 
{
	int value[26]={10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};	//個字母對應的數值陣列 
	return value[toupper(letter)-'A']; 				//把字母都轉換成大寫並輸入回陣列 
}
	const char* CityName(char letter)				//定義字串變數 
{
	const char* cities[26]=						//對應個字母的縣市 
	{
		"台北市", "台中市", "基隆市", "台南市", "高雄市", "臺北縣", "宜蘭縣", "桃園縣", "嘉義市", "新竹縣", "苗栗縣", "臺中縣", "南投縣",
		"彰化縣", "新竹市", "雲林縣", "嘉義縣", "臺南縣", "高雄縣", "屏東縣", "花蓮縣", "台東縣", "金門縣", "澎湖縣", "陽明山", "連江縣"  
	};
	return cities[toupper(letter)-'A'];				//計算索引值找出對應的城市 
}
	
int ID (char letter, const char* number)				//檢查數值長度是否正確 
{
	if (strlen(number) !=9)
		return 0;
	if (number[0] !='1' && number[0] != '2')			//第一位數字是否為1或2 
		return 0;
		
	int Value = alphabet(letter);
	int sum= (Value /10)*1+(Value % 10)*9;				//計算檢查碼 
		
	int i=0;
	while (i<8)							//累加計算值 
	{
		sum+=(number[i]-'0')*(8-i);
		i++;
	}
		
	int checkNum = 10-(sum % 10);					//確認是否檢查碼為正確 
	if(checkNum==10)
		checkNum=0;
	return (checkNum==(number[8]-'0'));
}


int main()
{
	char letter;							//定義字母變數 
	char number[10];						//定義數值變數 
		
	while (1)
	{
		printf("請輸入身分證字母: ");				//輸入身分證字母 
		scanf("%c", &letter);
		while (getchar() != '\n');
		printf("請輸入身分證數字:");				//輸入身分證數字 
		scanf("%s", number);
		while (getchar() != '\n');
		
		if (!isalpha(letter)||strlen(number)!=9)		//確認身分證輸入是否正確 
		{
			printf("輸入格式錯誤 \n");			//輸入錯誤終止迴圈重新輸入 
			continue;
		}
		if (ID(letter, number))					//輸入正確顯示出身地與性別 
		{
			printf("身分證號碼有效 \n");					
			printf("出身地: %s \n", CityName(letter));
			printf("性別: %s \n", number[0]=='1'? "男性" : "女性"); 
			break ; 
		} 
		else
		{	
			printf("身分證號碼無效 \n");			//輸出結果為無效 
			break ;	
		}		
	}
	
	
	system("pause");
	return 0; 
}
