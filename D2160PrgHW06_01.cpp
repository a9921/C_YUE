/*
�Ǹ�:1102160
�m�W:���ʩ�
�������:2025/02/24
�ɦW:D2160PrgHw06_01.CPP
�{���\��:���Z�̤j�ȳ̤p�ȥ����зǮt�p�� 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Num 5											//��ؼƬ�5 

int main()
{
	char Name[100];										//�w�q��J�W�٤Ψ���� 
	int score[Num], i, num;								//�w�q���ƪ����� �P��L�ܼ� 
	double Min, Max, Mean, STD, Sum=0.0, SumSTD=0.0;	// �w�q�̤j�ȳ̤p�ȥ����зǮt�`�M 
	 
	printf("�п�J�W�r:");								//��J�W�r	 
	gets(Name);
	
	i=0;
	while(i<Num)										//��i�p��5�ɰ��� 
	{
		printf("�п�J���Z:");							//��J�U�즨�Z 
		scanf("%d",&score[i]);
		
		if(i==Num)										//��i����5�ɰ��� 
		{
			printf("��J���� \n");
			break;	
		}
		i++;
	}
	
	Min=Max=score[0];									//�N�̤j�̤p�Ȭ��}�C���ƭ� 
	for (i=0;i<Num;i++)									//i�p��5�ɰ��� 
	{
		if(score[i]>Max)								//�p�G�}�C���ƭȤj��̤j�� 
			Max=score[i];								//�̤j�Ȭ���� 
		if(score[i]<Min)								//�p�G�}�C���ƭȤp��̤p�� 
			Min=score[i];								//�̤p�Ȭ���� 			
			
	}
		
	num=i;
	for(i=0;i<num;i++)									//�N�}�C���U�ƭȬۥ[ 
		Sum+=score[i];
	Mean=Sum/num;										//�������`�M���H��ؼƶq 
	
	for(i=0;i<Num;i++)
		SumSTD+=pow(score[i]-Mean,2); 					//�ƭȴ�h�������� 
	STD=sqrt((SumSTD)/(Num-1));							//�b����N-1�}�ڸ� 
	
	
	printf("�m�W:%s \n",Name);							//��ܦU�������G 
	printf("������:%.2f \n",Mean);
	printf("�̤p�Ȭ�:%.2f \n",Min);
	printf("�̤j�Ȭ�:%.2f \n",Max); 
	printf("�зǮt��:%.2f \n",STD);
	
	
	system ("pause");
	return 0;
}
