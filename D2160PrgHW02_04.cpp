/*
�Ǹ�:1102160
�m�W:���ʩ�
�������:2025/03/03
�ɦW:D2160PrgHw02_04.CPP
�{���\��:�p��P�_�|�~�P�Ѽ� 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h> 

int main()
{
	int y, m, d;		//�w�q�~��骺�ܼ� 
	
	printf("��J�褸�~�P���");		//��J�~�P��� 
	scanf("%d %d", &y, &m);
	
	int Ly=0; 						//�w�]�����~ 
	if((y %4 == 0 && y%100 !=0)||(y % 400 == 0 && y %4000 !=0))			//�P�_�O�_���|�~ 
	{ 
		Ly=1; 
		printf("�O�|�~");
	} 
	else
	{
		printf("���O�|�~"); 
	} 
	
	switch(m)					//�P�_����Ѽ� 
	{
		case 2 :				//2����P�Ѽ� 
		{	
			d=Ly?29:28;
			printf("�o�O %s �A %d �릳 %d �� \n", Ly? "�|�~" : "���~", m, d);
			break;
		}
		case 4 : case 6 : case 9 : case 11:			//�p��Ѽ� 
		{	
			d=30;
			printf("%d ��O�p��A��30�� \n", m); 
			break;
		} 
		default:									//�j��Ѽ� 
		{	
			printf("%d ��O�j��A��31�� \n",m); 
			break;
		}	 
	} 
	
	system("pause");
	return 0;
	
} 
