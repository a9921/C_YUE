/*
�Ǹ�:1102160
�m�W:���ʩ�
�������:2025/03/03
�ɦW:D2160PrgHw02_03.CPP
�{���\��:�p��P�_BMI 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h> 

int main()
{
	double cm, kg, BMI, mkg, fkg;				//�w�q�����B�魫�BBMI�B�k�ʲz�Q�魫�B�k�ʲz�Q�魫���ܼ� 
	
	printf("��J����cm�P�魫kg:");				//��J�����P�魫 
	scanf("%lf %lf",&cm, &kg); 
	
	BMI=kg/pow((cm/100),2);						//�p��BMI�P�k�ʲz�Q�魫�P�k�ʲz�Q�魫 
	mkg=(cm-80)*0.7; 
	fkg=(cm-70)*0.6; 
	
	
	printf("�A��BMI��%.2f \n",BMI);				//��XBMI�B�k�ʲz�Q�魫�P�k�ʲz�Q�魫�����G 
	printf("�k�ʲz�Q�魫��%.1f�F�k�ʲz�Q�魫��%.1f \n", mkg, fkg); 
	
	if(BMI<20)									//�P�_BMI�O�L�G�B���`�B�L���B�έD�A�ÿ�X���G 
		printf("�ӽG \n");
	else
	{
		if(BMI <=25)
			printf("���` \n");
		else
		{
			if(BMI <28)
				printf("�L�� \n");
			else
			{
				printf("�έD \n"); 
			} 
		} 
	}
 
	system("pause");
	return 0;
	
} 
