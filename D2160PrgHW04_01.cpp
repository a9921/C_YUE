/*===================================================================== 
�Ǹ�:1102160
�m�W:���ʩ� 
�������:2025/03/117
�ɦW:D2160PrgHW04_1.CPP
�{���\��:�p��BMI�P�_���p�����H�ƻP���� 
===================================================================== */ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double BMICOUNT (double W, double H)					//�w�qBMI���⦡ 
{
	double bmi = W/((H/100.0)*(H/100));
	printf("BMI:%.2f \n", bmi);
	
	if (bmi<20)											//�P�_��쬰��� 
	{
		printf("�L�� \n");
	}
	else
		if (bmi>=20 && bmi<=25)
		{
			printf("���` \n");
		}
		else 
			if(bmi>25 && bmi<=28)
			{
				printf("�L�� \n");
			}
			else
			{
				printf("�έD \n");
			}
		return bmi;
}

int main()
{
	
	int num;											//�w�q�H���ܼ� 
	char sel;											//�w�q��ܦr���ܼ� 
	
	do													//�ܤְ���@���j�� 
	{
		printf("�п�J�˴��H��:");						//��J�˴��H�� 
		scanf("%d",&num);
		while(getchar() != '\n');						// �M����J�w�İ� 
	
		double totalH=0, totalW=0;						//�w�q�`�����P�魫�ܼ� 
		int BMI20=0, BMI25=0, BMI28=0, BMI29=0;			//�w�q�U���H���ܼ� 
		
		int i=0;										//�w�q�ܼƪ�l�� 
		while (i<num)									//���ܼƤp���˴��H�Ʈɰ��� 
		{
			double H, W;								//�w�q�����魫�ܼ� 
			
			printf("�� %d ��:\n", i + 1);				//��X�{�b�ĴX��b��J��� 
        	printf("����(cm): ");						//��J���� 
            scanf("%lf", &H);
            while(getchar() != '\n');					//��J�魫 
            printf("�魫(kg): ");
            scanf("%lf", &W);
            while(getchar() != '\n');					//�M����J�w�İ� 
			
			totalH += H;								//�魫�����[�`�J�`�����P�魫 
			totalW += W;
			
			double bmi=BMICOUNT(W, H);					//�w�qBMI���ܼƻP�⦡ 
			
			if(bmi<20)									//�έp�P�_�[�`�U��쪺�H�� 
				BMI20++;
			else
				if(bmi>=20 && bmi<=25)
					BMI25++;
				else
					if(bmi>25 && bmi<=28)
						BMI28++;
					else
						BMI29++;
			
			i++;
		}
		
		printf("��������: %.2f cm \n",totalH/num);		//��X�����ƭȦU���H�ƪ����G 
		printf("�����魫: %.2f kg \n",totalW/num);
		printf("BMI <20 ���H��: %d \n",BMI20);
		printf("BMI 20~25 ���H��: %d \n",BMI25);
		printf("BMI 25~28 ���H��: %d \n",BMI28);
		printf("BMI >28 ���H��: %d \n",BMI29);
		
		printf("�O�_���s��JBMI? Y/N:");				//��J�O�_���s����BMI 
		scanf("%c", &sel);
		
	}while (sel=='Y' || sel=='y');						//�P�_��� 
	
	system("pause");
	return 0;
	
} 
