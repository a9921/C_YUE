/* ===================================================================== 
��    �� �G1102160                                                  
�m    �W �G���ʩ� 
������� �G2025/04/24                                                
��    �W �GD2160PrgHw08_3.CPP                                       
�{���\�� �GBMI��A�p��   
======================================================================== */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 3									//�ǥͤH�Ʀ�3 

struct student									//�w�q���c���student�����e�A �m�W�B�����B�魫�BBMI�B��A 
{
	char name[50];								 
	double height;
	double weight;
	double BMI;
	char type[10];
};

void calculateBMI(struct student*A)				//�w�q��� calculateBMI��J���e���cstudent����A
{
	for(int i=0; i<SIZE; i++)					//��i�p��SIZE�ɰ��� 
	{
		double H=A[i].height/100.0;				//H=A[i]����������100 
		A[i].BMI=A[i].weight/(H*H);				//A[i]��BMI=A[i]���魫/H���� 
		
		if(A[i].BMI<20)							//�p�GA[i]��BMI�p��20�ɰ��� 
			strcpy(A[i].type, "�ӽG");			//��JA[i].type���ӽG 
		else if(A[i].BMI<25)					//�p�GA[i]��BMI�p��25�ɰ��� 
			strcpy(A[i].type, "�з�");			//��JA[i].type���з� 
		else if(A[i].BMI<=28)					//�p�GA[i]��BMI�p�󵥩�28�ɰ��� 
			strcpy(A[i].type, "�L��");			//��JA[i].type���L�� 
		else									//�p�GA[i]��BMI�j��28�ɰ��� 
			strcpy(A[i].type, "�έD"); 			//��JA[i].type���έD 
	}
}

int main()
{
	struct student A[SIZE];						//���cstudent�W��A�H�Ƭ�SIZE 3 
	
	for(int i=0; i<SIZE; i++)					//��i�p��SIZE�ɰ��� 
	{
		printf("��J��%d��ǥͪ��m�W:",i+1);			//��J��i+1�쪺�ǥͩm�W 
		fgets(A[i].name, sizeof(A[i].name), stdin); 	 
		A[i].name[strcspn(A[i].name, "\n")] = '\0';		//�M��A[i].name��\n�אּ\0 
		printf("����(cm):");							//��J���� 
		scanf("%lf",&A[i].height);
		printf("�魫(kg):");							//��J�魫 
		scanf("%lf",&A[i].weight);
		while(getchar()!='\n');							//�M���w�s 
	}
	
	calculateBMI(A);									//�I�s calculateBMI��� 
	printf("\t�m�W\t   ����(cm) \t�魫(kg) \t BMI \t\t��� \n");	//��X�m�W�����魫BMI����� 
	for(int i=0; i<SIZE; i++)										//��i�p��SIZE�ɰ���
																	//��XA[i]���m�W�����魫BMI�P��� 
		printf("%-20s %.1f\t%.1f\t\t%.2f\t\t%s \n",A[i].name ,A[i].height ,A[i].weight ,A[i].BMI ,A[i].type);
	
	
	system("pause");
	return 0;
}
