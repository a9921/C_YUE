/* ===================================================================== 
��    �� �G1102160                                                  
�m    �W �G���ʩ� 
������� �G2025/04/07                                                
��    �W �GD2160PrgHw07_2.CPP                                       
�{���\�� �G�ǥͪ��U����ƻP�����зǮt���c���       
======================================================================== */ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define Student_N 3							//�ǥͤH�Ƭ�3 
#define Subject 5							//��ؼƬ�5 

struct Date									//�@�ŵ��c���ADate�A�]�t�~��� 
{
	int year;
	int month;
	int day;
};

struct Student								//�G�ŵ��c���AStudent�A�]�t�m�W�B�ͤ�(�@�ŵ��cDate)�B���ơB�����B�зǮt 
{
	char name[20];
	struct Date birthday;
	int score[Subject];
	float ave;
	float STD;
};

int main()
{
	int i, j;									//����ܼ�i�Bj 
	float Sum, Sum_STD;							//�B�I���ܼ� Sum�BSum_STD 
	struct Student A[Student_N];				//�G�ŵ��c�N��A[] 
	const char* Subject_Name[Subject] = {"�q�v", "����", "�βy", "���y", "�вy"};		//�@�ŵ��c��ئW�� 

	for (i = 0; i < Student_N; i++)						//��I�p��ǥͼƮɰ��� 
	{
		printf("��%d��m�W:", i + 1);					//��J��i+1��m�W	 
		fgets(A[i].name, sizeof(A[i].name), stdin);		 
		A[i].name[strcspn(A[i].name, "\n")] = '\0'; 	//�h��fget��\n 

		printf("�褸�~:");								//��J�褸�~ 
		scanf("%d", &A[i].birthday.year);
		printf("���:");								//��J��� 
		scanf("%d", &A[i].birthday.month);
		printf("��:");									//��J��� 
		scanf("%d", &A[i].birthday.day);

		while (getchar() != '\n');  					//�M�z�w�İ� 

		Sum = 0.0;										//�����`�M��0 
		Sum_STD = 0.0;									//���ƺئX(�зǮt)��0 

		for (j = 0; j < Subject; j++)					//�p�Gj�p���ؼƮɰ��� 
		{
			printf("%s���Z:", Subject_Name[j]);			//��JSubject����j�쪺���Z 
			scanf("%d", &A[i].score[j]);
			Sum += A[i].score[j]; 						//�[�`�ܤ����`�M 
		}
		A[i].ave = Sum / Subject; 						//�����������`�M�����ؼ� 
		

		for (j = 0; j < Subject; j++)					//�p�Gj�p���ؼƮɰ��� 
		{
			Sum_STD += pow(A[i].score[j] - A[i].ave, 2); 	//�����`�M(�зǮt)����i��ǥͪ�j���ƴ�h��������[�` 
		}
		A[i].STD = sqrt(Sum_STD / Subject); 			// �зǮt�������`�M(�зǮt)�����ؼƶ}�ڸ� 

		while (getchar() != '\n');						//�M���w�İ� 
	}
	
	printf("\n%20s %12s", "�m�W", "�ͤ�");				//��ܩm�W�ͤ骺���D 
	for (i = 0; i < Subject; i++)						//�p�Gi�p���ؼƫK���� 
		printf("%10s", Subject_Name[i]);				//��X��i�Ӭ�ئW�����D 
	printf("%10s %10s \n", "����", "�зǮt");			//��X�����B�зǮt�����D 
	
	for (i = 0; i < Student_N; i++)						//�p�Gi�p��ǥͼƮɰ��� 
	{
		printf("%20s %10d/%d/%d", A[i].name, A[i].birthday.year, A[i].birthday.month, A[i].birthday.day);	//���Student[i]���m�W�A�ͤ�~��� 
		for (j = 0; j < Subject; j++)					//�p�Gj�p���ؼƮɰ��� 
		{
			printf("%10d", A[i].score[j]);				//��XStudent[i].score[j]������ 
		}
		printf("%10.2f %10.2f\n", A[i].ave, A[i].STD); //��XStudent[i]�������P�зǮt 
	}


	system("pause");
	return 0;
}
