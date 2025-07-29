/* ===================================================================== 
��    �� �G1102160                                                  
�m    �W �G���ʩ� 
������� �G2025/05/05                                                
��    �W �GD2160PrgHw09_1.CPP                                       
�{���\�� �G���а}�C�Ǵ����Z�p��       
======================================================================== */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Sub_N 5						//��ؼ�5�� 

struct student						//�ŧistudent���c �]�t�m�W�B���즨�Z�B�Ǵ����Z 
{	
	char Name[20];
	float scores[Sub_N];
	float final;
};

void calfinal (struct student *s)	//���Z�p���� 
{
	s->final=(s->scores[0]+s->scores[1])*0.15+(s->scores[2]+s->scores[3])*0.2+s->scores[4]*0.3;
}

int main()
{
	//�����D�����а}�C 
	const char *ptest[]={"�m�W","�p��1","�p��2","������1","������2","������","�Ǵ����Z"};
	int Num, i, j;
	student *pN;								//pN���Vstudent���c 
	
	printf("�п�J�ǥͤH��:");					//��J�H�� 
	scanf("%d",&Num);
	fflush(stdin);								//�M�Žw�s 
	
	pN =(student*)malloc(sizeof(student)*Num); 			//�ǥͰ}�C���ʺA��m�j�p 
	
	for(i=0; i<Num; i++)								//�p�Gi�p��H�Ʈɰ��� 
	{
		fflush(stdin);
		printf("�п�J��%d�ӤH���m�W:",i+1);			//��J��i+1�ӤH���m�W 
		gets(pN[i].Name);
		
		printf("�п�J%s���p��1���Z:",pN[i].Name);		//��J��i+1�ӤH���p��1���Z 
		scanf("%f", &pN[i].scores[0]); 
		printf("�п�J%s���p��2���Z:",pN[i].Name);		//��J��i+1�ӤH���p��2���Z 
		scanf("%f", &pN[i].scores[1]); 
		printf("�п�J%s��������1���Z:",pN[i].Name);	//��J��i+1�ӤH��������1���Z 
		scanf("%f", &pN[i].scores[2]); 
		printf("�п�J%s��������2���Z:",pN[i].Name);	//��J��i+1�ӤH��������2���Z 
		scanf("%f", &pN[i].scores[3]); 
		printf("�п�J%s�������Ҧ��Z:",pN[i].Name);		//��J��i+1�ӤH�������Ҧ��Z 
		scanf("%f", &pN[i].scores[4]); 
		
		getchar();										//�M���w�s 
		calfinal(&pN[i]);								//�NpN[i]�����Z�[�icalfinal��ƭp�� 
	}
	
	printf("-------------------------------------------------------------- \n");
														//��X���а}�C���D�� 
	printf("%-9s %-6s %-6s %-8s %-8s %-8s %-9s\n ",ptest[0], ptest[1], ptest[2], ptest[3], ptest[4], ptest[5], ptest[6]);
	printf("-------------------------------------------------------------- \n");
	
	for(i=0; i<Num; i++)								//��i�p��H�Ʈɰ��� 
	{
		printf("%-10s", pN[i].Name);					//��X�m�W 
		for(j=0; j<Sub_N; j++)							//��j�p���ؼƮɰ��� 
			printf("%-8.1f", pN[i].scores[j]);			//��X��ئ��Z 
		printf("%8.2f \n", pN[i].final);				//��X�Ǵ����Z 
	}
	printf("-------------------------------------------------------------- \n");
	
	free(pN);											//����Ŷ� 
	system("pause");
	return 0;
}
