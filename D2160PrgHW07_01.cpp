/* ===================================================================== 
��    �� �G1102160                                                  
�m    �W �G���ʩ� 
������� �G2025/04/07                                                
��    �W �GD2160PrgHw07_1.CPP                                       
�{���\�� �G�m�W�����魫BMI��A�����c���        
======================================================================== */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 5						//�ǥͼƬ�5 

struct student					//���c���student�A�]�t�m�W�B�����B�魫�BBMI�B��A 
{
	char Name[15];
	float height;
	float weight;
	float BMI;
	const char* body_sharp;
};

int main()
{
	struct student A[N];			//�I�s���c���student�N�٬�A 
	int i;							//����ܼ�i 
	
	for(i=0; i<N; i++)				//�p�Gi�p��ǥͼƫK���� 
	{
		printf("�п�J��%d�쪺�m�W:",i+1);				//��J��i+1��ǥͪ��m�W 
		fgets(A[i].Name, sizeof(A[i].Name), stdin);
		A[i].Name[strcspn(A[i].Name,"\n")]='\0';		//�M��fget������� 
		printf("�п�J�魫(kg)");						//��J�魫 
		scanf("%f",&A[i].weight);
		printf("�п�J����(cm)");						//��J���� 
		scanf("%f",&A[i].height);
		getchar();										//�M���w�s�� 
		
		A[i].BMI=A[i].weight/pow((A[i].height/100.0),2);		//student��BMI���魫���󨭰�����100������ 
		
		if(A[i].BMI<20)					//�p�GBMI�p��20��A���ӽG 
			A[i].body_sharp="�ӽG";
		else if(A[i].BMI<=25)			//�p��25���з� 
			A[i].body_sharp="�з�";
		else if(A[i].BMI<=28)			//�p��28���L�� 
			A[i].body_sharp="�L��";
		else 							//��l���έD 
			A[i].body_sharp="�έD";	
	}
	
	printf("\n%15s %15s %15s %15s %15s \n","�m�W", "����", "�魫", "BMI", "��A");	//��X���D 
	for(i=0; i<N; i++)																//�p�Gi�p��ǥͼƮɰ��� 
		printf("%15s %15.2f %15.2f %15.2f %15s \n", A[i].Name, A[i].height, A[i].weight, A[i].BMI, A[i].body_sharp);		//��X�ǥ�[i]���m�W�����魫BMI�P��A 
	
	system("pause");
	return 0;
}
