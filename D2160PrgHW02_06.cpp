/*
�Ǹ�:1102160
�m�W:���ʩ�
�������:2025/03/03
�ɦW:D2160PrgHw02_06.CPP
�{���\��:�P�_����u�` 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h> 

int main()
{
	int m;							//�w�q����ܼ� 
	
	printf("��J���:");			//��J��� 
	scanf("%d",&m) ;
	
	switch(m)						//�T�{����u�` 
	{
		case 3: case 4: case 5:
			printf("�K \n");
			break; 
		case 6: case 7: case 8: 
			printf("�L \n");
			break;
		case 9: case 10: case 11:
			printf("�� \n");
			break;
		case 12: case 1: case 2:
			printf("�V \n"); 
			break;
		default:
			printf("��J���~ \n"); 	//�Ʀr���b1~12 
			break;
	} 
	
	system("pause");
	return 0;
	
}
 
