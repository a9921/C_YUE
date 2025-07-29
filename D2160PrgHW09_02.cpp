/* ===================================================================== 
��    �� �G1102160                                                  
�m    �W �G���ʩ� 
������� �G2025/05/05                                                
��    �W �GD2160PrgHw09_2.CPP                                       
�{���\�� �G���а}�C�Ǵ����Z�p��       
======================================================================== */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student							//�w�qstudent���c�]�t�m�W�B���ƫ��СB���� 
{
	char Name[20];
	float *score;
	double ave;
};

double mean(float *pA, int num)			//�������Z��� 
{
	int i;
	double ave=0.0, sum=0.0;
	
	for(i=0; i<num; i++)
		sum+=pA[i];						//�[�`�U�즨�Z 
	ave=sum/num;						//�`�M�����ؼ� 
	return ave;
} 

int main()
{
	int sub_N, student_N, i, j;
	char **subName;						//��ئW�٪��ʺA�O���� 
	struct student *pN;
	
	printf("�п�J�ҥؼ�:");			//��J��ؼƸ�H�� 
	scanf("%d",&sub_N);
	printf("�п�J�H��:");
	scanf("%d",&student_N);
	getchar();							//�M���w�s 
	
	subName =(char**)malloc(sizeof(char*)*sub_N); 			//��ؼƪ��ʺA�O����j�p 
	for(i=0; i<sub_N; i++)
	{
		subName[i]=(char*)malloc(sizeof(char)*20);			//��ئW�٪��ʺA�O����j�p 
		printf("�п�J��%d�쪺�W��:",i+1);					//��J��ئW�� 
		fgets(subName[i], 20, stdin);
		subName[i][strcspn(subName[i], "\n")] = '\0';
	}
	
	pN =(struct student*)malloc(sizeof(struct student)*student_N);	//�ǥͤH�ƦW�٪��ʺA�j�p 
	for(i=0; i<student_N; i++)
	{
		printf("�п�J��%d��ǥͪ��m�W:",i+1);				//��J�ǥͦW�� 
		fgets(pN[i].Name, 30, stdin);
		pN[i].Name[strcspn(pN[i].Name, "\n")] = '\0';
		
		pN[i].score=(float*)malloc(sizeof(float)*sub_N);	//�ǥͦ��Z���ʺA�O����j�p 
		for(j=0; j<sub_N; j++)
		{
			printf("�п�J%s���Z:",subName[j]);				//��J���Z 
			scanf("%f",&pN[i].score[j]);
		} 
		getchar();
		pN[i].ave=mean(pN[i].score,sub_N);					//�I�s�����禡 
	}
	
	printf("-------------------------------------------------------------- \n");
	printf("%-10s","�m�W");									//��X�m�W���D 
	for(i=0; i<sub_N; i++)
		printf("%-8s",subName[i]);							//��X��ئW�ټ��D 
	printf("���� \n");										//��X�������D 
	
	for(i=0; i<student_N; i++)
	{
		printf("%-10s",pN[i].Name);							//��X�ǥͦW�� 
		for(j=0; j<sub_N; j++)
			printf("%-8.1f",pN[i].score[j]);				//��X�ǥͦ��Z 
		printf("%.2lf \n",pN[i].ave);						//��X�ǥͥ��� 
	}
	

	free(subName);											//����O���� 
	free(pN);
	
	system("pause");
	return 0;	
}
