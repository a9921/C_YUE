/*
�Ǹ�:1102160
�m�W:���ʩ�
�������:2025/03/03
�ɦW:D2160PrgHw02_05.CPP
�{���\��:�p��P�_�J�԰��k�h 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h> 

int main()
{
	double a, b, c, d, e, f, x, y, D, Dx, Dy ; 				//�w�q�U�`�ơBxy�Pdelta dy dx  
	
	printf("�п�Ja,b,c,d,e,f:");									//��J��� 
	scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
	
	D=a*e-b*d;												// �p��J�԰��k�h 
	Dx=c*e-b*f;
	Dy=a*f-c*d; 
	
	if(D!=0) 												//�P�_�O�_���ѸѬ��h�� 
	{
		x=Dx/D;
		y=Dy/D;
		printf("�ߤ@��:x=%.2f, y=%.2f \n", x, y); 			//��X���G 
	} 
	else
	{
		if (D=Dx=Dy=0) 
			printf("���L���� \n");							//��X���G 
		else
			printf("�L�� \n"); 								//��X���G 
	} 
	 
	
	system("pause");
	return 0;
	
} 
