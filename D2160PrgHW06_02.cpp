/*
�Ǹ�:1102160
�m�W:���ʩ�
�������:2025/02/24
�ɦW:D2160PrgHw06_02.CPP
�{���\��:�p��U�ǥʹ����Ҧ��Z�Ψ䥭���P�зǮt 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Num_Student 5							//�ǥͤH�Ƭ�5 
#define Num_Subject 4							//��ؼƬ�4 

int main ()
{
	//�ǥͼƦC���W�r�P���� 
	char student[Num_Student][100]={"An Se Young ", "���B�� ", "����o ", "Akane Yamaguchi ", "Carolina Marin"};
	//��ت��W�ٻP���� 
	char subject[Num_Subject][10]={"�вy", "����", "�βy", "���y"};	 
	int score[Num_Student][Num_Subject];				//�w�q���ƪ��G���}�C 
	int i, j;											//��C�ܼ� 
	double Sum=0.0, Sum_STD=0.0;						//�`�M�ܼ� 
	double Mean[Num_Student]={0.0};						//�����Ȫ���C 
	double STD[Num_Student]={0.0};						//�зǮt����C 
	
	printf("�п�J�U�ǥͪ����Z: \n");			
	for(i=0;i<Num_Student;i++)							//�p�Gi�p��ǥͤH�ƴN���� 
	{
		printf("%s�����Z:\n",student[i]);				//��ܭn��J���O���Ӿǥͪ����Z 
		for(j=0;j<Num_Subject;j++)						//�p�Gj�p���ؼƴN���� 
		{
			printf("%s:",subject[j]);					//��ئW�� 
			scanf("%d",&score[i][j]);					//���Z��J 
		} 
	} 
	
	for (i=0; i<Num_Student; i++)						//�p�Gi�p��ǥͼƴN���� 
	{
		Sum=0.0;										//�`�M��0 
		Sum_STD=0.0;									 
		
		for (j=0; j<Num_Subject; j++)					//�p�Gj�p��ҵ{�ƴN���� 
			Sum+=score[i][j];							//�Y�ǥͪ��U���`�M 
	
	Mean[i]=Sum/Num_Subject;							//�Y�ǥͪ����� 
	
	Sum_STD=0.0;										//�зǮt���`�M��0 
	for(j=0; j<Num_Subject; j++)						//�p�Gj�p���ؼƴN���� 
		Sum_STD+=pow(score[i][j]-Mean[i],2);			//�`�M�����ƴ�h�������� 
	
	STD[i]=sqrt(Sum_STD/Num_Subject);					//�`�M�����ؼƶ}�ڸ� 
	}
	
	printf("\n%-20s","�m�W");							//��ܿ�J�����G 
	for (j=0; j<Num_Subject; j++)
		printf("%-10s", subject[j]);
	printf("%-10s%-10s\n", "����", "�зǮt");
	
	for(i=0; i<Num_Student; i++)
	{
   		printf("%-20s", student[i]); 
    
    	for(j=0; j<Num_Subject; j++)
        	printf("%-10d", score[i][j]);

    	printf("%-10.2f%-10.2f\n", Mean[i], STD[i]);
	}
	
	system ("pause");
	return 0;
}

