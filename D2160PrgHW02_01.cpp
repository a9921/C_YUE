/*
�Ǹ�:1102160
�m�W:���ʩ�
�������:2025/03/03
�ɦW:D2160PrgHw02_01.CPP
�{���\��:�p��馩���O���B 
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	double money ;		//�w�q���B�ܼ� 
	
	printf("�п�J���O���B");		//��J���B 
	scanf("%lf", &money);
	
	if(money>10000)
			printf("�馩����B��:%f \n", money*0.55);		//�p�G���O���B�j��10000���馩 
	else
	{
		if(money>5000&&money<10000)							//�p�G���O���B�j��5000�p��10000���馩 
		 printf("�馩����B��:%f \n", money*0.6);
		else
			{
			if(money>2000&&money<5000)						//�p�G���O���B�j��2000�p��5000���馩 
				printf("�馩����B��:%f \n", money*0.7);
			else
				printf("���B��:%f \n", money);				//���O���B�������馩������ܭ�� 
			}
	}
	system("pause");
	return 0;
}
