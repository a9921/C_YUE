/*
�Ǹ�:1102160
�m�W:���ʩ�
�������:2025/03/03
�ɦW:D2160PrgHw02_07.CPP
�{���\��:�p��ӫ~�`�P���B 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h> 

int main()
{
	int n, q;							//�w�q�ӫ~���X�B�P��q 
	double p, total;					//�w�q�ӫ~����B�`�P���B 
	
	printf("�п�J�ӫ~���X(1-5):");		//��J�ӫ~���X 
	scanf("%d", &n);
	
	printf("�п�J�P��q:");			//��J�P��q 
	scanf("%d", &q);
	
	switch(n)							//�P�_�ӫ~���X������ 
	{
		case 1:
        	p = 2.78;
            break;
        case 2:
            p = 3.72;
            break;
        case 3:
            p = 8.79;
            break;
        case 4:
            p = 5.32;
            break;
        case 5:
            p = 4.26;
            break;
        default:
            printf("��J���~ �п�J 1-5 �������ӫ~���X \n");
	}
	
	total=p*q;							// �p���`�P���B 
	
	printf("�ӫ~���X:%d \n", n);		//��X���G 
	printf("�P��q:%d \n", q);
	printf("���:%.2f \n", p);
	printf("�`���B:%.2f \n", total); 
	
	system("pause");
	return 0;
}
