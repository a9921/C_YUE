/* ===================================================================== 
��    �� �G1102160                                                  
�m    �W �G���ʩ� 
������� �G2025/04/24                                                
��    �W �GD2160PrgHw08_1.CPP                                       
�{���\�� �G�j�p�Ƨ�(����)       
======================================================================== */ 

#include <stdio.h>
#include <stdlib.h>

void sort(int *a, int *b, int *c)		//�w�q���sort 
{
	int temp;
	if(*a<*b)							//�p�Ga��m���Ȥp��b��m���� 
	{
		temp=*a;						//a�ҫ������Ȧs��temp 
		*a=*b;							//b�ҫ����Ƚƻs��a������m
		*b=temp;						//�쥻��a�ȡ]temp�^�ƻs��b�ҫ�����m
	}
	if(*a<*c)							//�p�Ga��m���Ȥp��c��m����
	{
		temp=*a;						//a�ҫ������Ȧs��temp 
		*a=*c;							//c�ҫ����Ƚƻs��a������m
		*c=temp;						//�쥻��a�ȡ]temp�^�ƻs��c�ҫ�����m
	}
	if(*b<*c)							//�p�Gb��m���Ȥp��c��m����
	{
		temp=*b;						//b�ҫ������Ȧs��temp 
		*b=*c;							//c�ҫ����Ƚƻs��b������m
		*c=temp;						//�쥻��b�ȡ]temp�^�ƻs��c�ҫ�����m
	}
}

int main()
{
	int a, b, c;
	
	printf("�п�Ja:");					//��Jabc���� 
	scanf("%d",&a);
	while(getchar()!='\n');				//�M���w�s 
	printf("�п�Jb:");
	scanf("%d",&b);
	while(getchar()!='\n');
	printf("�п�Jc:");
	scanf("%d",&c);
	while(getchar()!='\n');
	
	sort(&a, &b, &c);					//�I�ssort��� 
	
	printf("a=%d > b=%d > c=%d \n", a, b, c);	//��X���Gabc���ȻP�j�p 
	
	system("pause");
	return 0;
}
