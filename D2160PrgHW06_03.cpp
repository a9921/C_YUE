/*
�Ǹ�:1102160
�m�W:���ʩ�
�������:2025/02/24
�ɦW:D2160PrgHw06_03.CPP
�{���\��:�����m��}�����X 
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Lotto 7									//�}�����X��7�� 
#define Max 42									//�m�y��42�� 

int repeat (int Total[], int size, int Num)		//�˴��ƭȬO�_���ƪ���� 
{
	for(int i=0;i<size;i++)						// ��i�p�� number[]���Ʀr�ɰ��� 
	{
		if(Total[i]==Num)						//�p�G���X�w�g�s�b 
			return 1;							//����@�� 
	}
	return 0;
}

void random (int number[])						//�H������7�Ӹ��X����� 
{
	int i, num;
	
	for (i=0;i<Lotto;i++)						//��i�p��Lotto��7�ɰ��� 
	{
		do
		{
			num=rand() % Max+1;					//����1~42���H���� 
		}while(repeat(number, i, num));			//�Y�ѭ��ƭ��s���� 
		
		number[i]=num;							//���ͪ��Ʀr�s�J�}�C 
	}
}


int main()
{
	int number[Lotto]={0};						//��l�ư}�C 
	char choice;
	srand(time(NULL));							//�����H���� 
	
	do
	{
		random(number);							//���ͤ������X 
		printf("�������X:");
		for (int i=0; i<Lotto; i++)				//��i�p��7�ɰ��� 
			printf("%d ", number[i]);			//��ܩ�X�����X 
		printf("\n");
	
		printf("�O�_�~��?(y/n)");				//�ݬO�_���s��� 
		scanf(" %c",&choice);
	
	}while(choice=='y'||choice=='Y');			//�Y��Jy�BY�h�~�� 
	
	system("pause");
	return 0;
}
