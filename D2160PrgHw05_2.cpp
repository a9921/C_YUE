/*===================================================================== 
�Ǹ�:1102160
�m�W:���ʩ� 
�������:2025/03/24
�ɦW:D2160PrgHW05_2.CPP
�{���\��:(1)�������HelloKitty
		 (2)�p��P�_BMI���
		 (3)�|�h�B��
		 (4)�Ʀr�j�p�Ƨ� 
		 ���D�{�� 
===================================================================== */ 

#include <stdio.h>
#include <stdlib.h>
#include "myFun.h" 

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
