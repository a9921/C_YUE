/*
�Ǹ�:1102160
�m�W:���ʩ�
�������:2025/03/03
�ɦW:D2160PrgHw02_02.CPP
�{���\��:�p���~�� 
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int T, pay;				//�w�q�u�ɻP�~�� 
	
	printf("��J�u��");			//��J�u�� 
	scanf("%d",&T);
	//printf("T=%d\n",T);
	if(T<=10)									//�p�G�u�ɤp��10�p�� 
	{
		pay=160*T;								//�p��10�p�ɪ��~����k 
	}
	else
	{
		if(T<=40)								//�p�G�u�ɤj��40�p�� 
		{
			pay=(160*1.2*(T-10)+160*10);		// �j��40�p�ɪ��~����k 
		}
		else
		{
			if(T>=41)							//�p�G�u�ɤj��41�p�� 
			{
				pay=(160*1.34*(T-40)+160*1.2*40+160*10);	//�j��41�p�ɪ��~����k 
			}
		}
	}
	printf("�~����%d\n", pay);					//��X�~�����G 
	
	system("pause");
	return 0;
}
