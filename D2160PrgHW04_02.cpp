/*===================================================================== 
�Ǹ�:1102160
�m�W:���ʩ� 
�������:2025/03/117
�ɦW:D2160PrgHW04_2.CPP
�{���\��:(1)�q���q���C��
		 (2)���ԤT�Ө� 
===================================================================== */ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	
	int user, cpu;										//�w�q�ϥΪ̿�J���ƭȻP�q�����ƭ��ܼ� 
	int userWIN=0, cpuWIN=0;							//�w�q�ϥΪ̳ӧQ�P�q���ӧQ�������ܼ� 
	char sel;											//�w�q��ܦr�����ܼ� 
	
	srand(time(NULL));									//��l�ܶü� 
	
	do
	{
	
		printf("�ХX��(�ŤM(1)�B���Y(2)�B��(3)):");		//��J�ϥΪ̼ƭ� 
		scanf("%d", &user);
		
		
		cpu=rand()%3+1;									//�q���H���X���ƭ� 
		
		printf("�A�X:");								//��ܨϥΪ̵��G 
		switch (user)									//�P�_�ϥΪ̥X��خ� 
		{
			case 1:
				printf("�ŤM \n");
				break;
			case 2:
				printf("���Y \n");
				break;
			case 3:
				printf("�� \n");
				break;
			default :
				printf("��J���~ \n"); 
				return 1;
		} 
		
		printf("�q���X:");								//��ܹq���X�����G 
		switch (cpu)									//�P�_�q���X��خ� 
		{
			case 1:
				printf("�ŤM \n");
				break;
			case 2:
				printf("���Y \n");
				break;
			case 3:
				printf("�� \n");
				break;
		}
		
		if (user==cpu)																//�P�_�ϥΪ̻P�q���q�����G 
			{
				printf("����,�A�@�� \n");
				sel = 'Y';
			}
		else if ((user==1 && cpu==3)||(user==2 && cpu==1)||(user==3 && cpu==2))
			{
				printf("�AĹ�F!\n");
            	printf("�O�_�~��?(Y/N): ");
				scanf(" %c", &sel);
			}
		else
			{
				printf("�q��Ĺ�F!\n");
            	printf("�O�_�~��?(Y/N): ");
            	scanf(" %c", &sel);
			}
					
	}while (sel=='Y'||sel=='y');					//�P�_�ϥΪ̬O�_�~�� 
	
	do
	{
		userWIN=0;									//�w�q�ϥΪ̳ӧQ�P�q���ӧQ���ƪ�l�� 
		cpuWIN=0;
		
		while(userWIN<3 && cpuWIN<3)				//��ϥΪ̩ιq���ӧQ�p��3���ɰ��� 
		{
			printf("���ԤT�ӽХX��(�ŤM(1)�B���Y(2)�B��(3)):");
			scanf("%d", &user);
			while (getchar() != '\n');
			
			cpu =rand()%3+1;
			
			printf("�A�X:");
			switch(user)
			{
			case 1:
				printf("�ŤM \n");
				break;
			case 2:
				printf("���Y \n");
				break;
			case 3:
				printf("�� \n");
				break;
			default :
				printf("��J���~ \n"); 
				return 1;
			} 
			
			printf("�q���X:");
			switch (cpu)
			{
				case 1:
					printf("�ŤM \n");
					break;
				case 2:
					printf("���Y \n");
					break;
				case 3:
					printf("�� \n");
					break;
			}
			
			if (user==cpu)
			{
				printf("����,�A�@�� \n");
				sel = 'Y';
			}
			else if ((user==1 && cpu==3)||(user==2 && cpu==1)||(user==3 && cpu==2))	//�p�G�ϥΪ̳ӧQ�ӳ��[1 
			{
				printf("�AĹ�F!\n");
				userWIN++;
            }
			else
			{
				printf("�q��Ĺ�F!\n");				//�p�G�q���ӧQ�q���ӳ��[1 
				cpuWIN++;
			}
			printf("�ثe����:�A %d - �q�� %d \n", userWIN, cpuWIN);			//��X�{�b�U�ӳ����� 
		}
		
		if (userWIN==3)								//�P�_��̧����ӧQ 
			printf("���ߧA,���ԤT�� \n");
		else
			printf ("�q�����ԤT�� \n");
		
		printf("�O�_�~��?(Y/N):");					//�O�_�~��q�� 
		scanf("%c", &sel);
        while (getchar() != '\n');
	}while (sel=='Y'||sel=='y');
	 
	
	
	system("pause");
	return 0;
}


