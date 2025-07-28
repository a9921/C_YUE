/*===================================================================== 
�Ǹ�:1102160
�m�W:���ʩ� 
�������:2025/03/117
�ɦW:D2160PrgHW04_3.CPP
�{���\��:���Ҥ@�Ө����Ҧr���O�_�O���Ī����X�A�çP�_��ʧO���y�e
===================================================================== */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int alphabet(char letter)       //�w�q��Ƨ�r���ഫ���ƭ� 
{
	int value[26]={10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};	//�Ӧr���������ƭȰ}�C 
	return value[toupper(letter)-'A']; 				//��r�����ഫ���j�g�ÿ�J�^�}�C 
}
	const char* CityName(char letter)				//�w�q�r���ܼ� 
{
	const char* cities[26]=							//�����Ӧr�������� 
	{
		"�x�_��", "�x����", "�򶩥�", "�x�n��", "������", "�O�_��", "�y����", "��鿤", "�Ÿq��", "�s�˿�", "�]�߿�", "�O����", "�n�뿤",
		"���ƿ�", "�s�˥�", "���L��", "�Ÿq��", "�O�n��", "������", "�̪F��", "�Ὤ��", "�x�F��", "������", "���", "�����s", "�s����"  
	};
	return cities[toupper(letter)-'A'];				//�p����ޭȧ�X���������� 
}
	
int ID (char letter, const char* number)			//�ˬd�ƭȪ��׬O�_���T 
{
	if (strlen(number) !=9)
		return 0;
	if (number[0] !='1' && number[0] != '2')		//�Ĥ@��Ʀr�O�_��1��2 
		return 0;
		
	int Value = alphabet(letter);
	int sum= (Value /10)*1+(Value % 10)*9;			//�p���ˬd�X 
		
	int i=0;
	while (i<8)										//�֥[�p��� 
	{
		sum+=(number[i]-'0')*(8-i);
		i++;
	}
		
	int checkNum = 10-(sum % 10);					//�T�{�O�_�ˬd�X�����T 
	if(checkNum==10)
		checkNum=0;
	return (checkNum==(number[8]-'0'));
}


int main()
{
	char letter;									//�w�q�r���ܼ� 
	char number[10];								//�w�q�ƭ��ܼ� 
		
	while (1)
	{
		printf("�п�J�����Ҧr��: ");				//��J�����Ҧr�� 
		scanf("%c", &letter);
		while (getchar() != '\n');
		printf("�п�J�����ҼƦr:");				//��J�����ҼƦr 
		scanf("%s", number);
		while (getchar() != '\n');
		
		if (!isalpha(letter)||strlen(number)!=9)	//�T�{�����ҿ�J�O�_���T 
		{
			printf("��J�榡���~ \n");				//��J���~�פ�j�魫�s��J 
			continue;
		}
		if (ID(letter, number))						//��J���T��ܥX���a�P�ʧO 
		{
			printf("�����Ҹ��X���� \n");					
			printf("�X���a: %s \n", CityName(letter));
			printf("�ʧO: %s \n", number[0]=='1'? "�k��" : "�k��"); 
			break ; 
		} 
		else
		{	
			printf("�����Ҹ��X�L�� \n");	//��X���G���L�� 
			break ;	
		}		
	}
	
	
	system("pause");
	return 0; 
}
