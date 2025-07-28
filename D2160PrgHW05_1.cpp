/*===================================================================== 
�Ǹ�:1102160
�m�W:���ʩ� 
�������:2025/03/24
�ɦW:D2160PrgHW05_1.CPP
�{���\��:(1)�������HelloKitty
		 (2)�p��P�_BMI���
		 (3)�|�h�B��
		 (4)�Ʀr�j�p�Ƨ� 
===================================================================== */ 

#include <stdio.h>
#include <stdlib.h>

void HelloKitty (int k);									//HelloKitty()��ƪ��쫬 
float CalBMI (float kg, float cm);							//CalBMI()��ƪ��쫬 
float operation (char op, float a, float b);				//operation()��ƪ��쫬 
void sort (int &A, int &B, int &C);							//sort()��ƪ��쫬 

int main()
{
	
	int k;  												//�w�q���Ʀ���k 
	printf("HelloKitty (n��):");							//��J���Ʀ��� 
	scanf("%d", &k);
	HelloKitty(k);											//�I�sHelloKitty()��ƭ���k�� 
	
	
	float kg, cm, BMI;										//�w�q�魫�����PBMI 
	printf("�п�J�魫(kg):");								//��J�魫 
	scanf("%f", &kg);
	while (getchar() != '\n');								//�M���w�s�� 
	printf("�п�J����(cm):"); 								//��J���� 
	scanf("%f", &cm);
	while (getchar() != '\n');
	CalBMI(kg, cm); 										//�I�sCalBMI��� 
	
	
	float a, b;												//�w�q�Ĥ@�ӻP�ĤG�ӼƦr 
	char op;												//�w�q�B��l 
	printf("�п�J�Ĥ@�ӼƦr:");							//��J�Ĥ@�ӼƦr 
	scanf("%f", &a);
	while (getchar() != '\n'); 
	printf("�п�J�B��r��:");								//��J�B��l 
	scanf("%c", &op); 
	while (getchar() != '\n');
	printf("�п�J�ĤG�ӼƦr:");							//��J�ĤG�ӼƦr 
	scanf("%f", &b); 
	while (getchar() != '\n');
	printf("���G:%.2f \n", operation(op, a, b));			//�I�soperation��ƿ�X���G 
	
	
	int A, B, C;											//�w�q ABC�T�ӼƦr 
	printf("�п�JA:");										//��JA���Ʀr 
	scanf("%d", &A); 	
	printf("�п�JB:");										//��JB���Ʀr 
	scanf("%d", &B); 
	printf("�п�JC:");										//��JC���Ʀr 
	scanf("%d", &C); 
	sort(A, B, C);											//�I�ssort��� 
	printf("A=%d < B=%d < C=%d \n", A, B, C);				//��XABC���ƭȤj�p 
	
	
	system("pause");
	return 0;
}

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
