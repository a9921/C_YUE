/*===================================================================== 
�Ǹ�:1102160
�m�W:���ʩ� 
�������:2025/03/24
�ɦW:myFun.cpp 
�{���\��:(1)�������HelloKitty
		 (2)�p��P�_BMI���
		 (3)�|�h�B��
		 (4)�Ʀr�j�p�Ƨ� 
		 ���禡�� 
===================================================================== */ 


#include <stdio.h>
#include <stdlib.h>
#include "myFun.h" 


void HelloKitty (int k)										//�ۭq�����HelloKitty() 
{
	int i;													//�w�q�C�L���� 
	for (i=1;i<=k;i++)										//�C�L���Ƭ��@������j�󵥩󭫽Ʀ��� 
		printf("Hello Kitty \n");							//�C�LHello Kitty 
	return; 												//��^�D�{�� 
}

float CalBMI (float kg, float cm)							//�ۭq�����CalBMI() 
{
	float m=cm/100.0;										//����=������100 
	float BMI=kg/(m*m);										//�p��BMI 
	
	printf("BMI:%.2f,���:",BMI);							//��XBMI�ȡA��쬰 
	if(BMI<20)												//�p�GBMI<20���ӽG 
		printf("�ӽG \n");
	else if(BMI<25)											//�p�GBMI<25�����` 
		printf("���` \n");									
	else if(BMI<=28) 										//�p�GBMI<=28���L�� 
		printf("�L�� \n");
	else													//�p�GBMI�W�L28���έD 
		printf("�έD \n");
	
	return BMI;												//�^�Ǩ�D�{����BMI 
}

float operation (char op, float a, float b)					//�ۭq�����operation() 
{
	switch (op)												//�P�_�B��l���� 
	{
		case '+':											
			return a+b;										//�p�G��+�⦡��a+b 
		case '-':
			return a-b;										//�p�G��-�⦡��a-b 
		case '*':
			return a*b;										//�p�G��*�⦡��a*b 
		case '/':											
			return a/b;										//�p�G��/�⦡��a/b 
		default:
		{
			printf("�L�Ī��B��l \n");						//�p�G�����O��X�L�Ī��B��l 
			return 0;
		}	
	}
}

void sort (int &A, int &B, int &C)							//�ۭq�����sort() 
{
	int temp;												//�w�q�{���ܼ� 
	if (A > B)												//�p�GA>B 
	{
		temp=A;												//A�MB�洫 
		A=B;
		B=temp;
	}
	if (B > C)												//�p�GB>C 
	{
		temp=B;												//B�MC�洫 
		B=C;
		C=temp;
	}
	if (A > B)												//�p�GA�S>B 
	{
		temp=A;												//A�MB�A���洫 
		A=B;
		B=temp;
	}
	
}
