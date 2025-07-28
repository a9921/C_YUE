/*===================================================================== 
�Ǹ�:1102160
�m�W:���ʩ� 
�������:2025/03/10
�ɦW:D2160PrgHW03_3.CPP
�{���\��:�α�οn���k�p��k������
===================================================================== */ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159						//�w�q�k 
#define START 0							//�n���U�� 
#define END (3*PI) 						//�n���W��3�k 

double f(double x)						//�w�q�n�����f(x)=��e^x + cos(x^2) 
{
	return sqrt(exp(x)+cos(x*x));
}
	
double trap(int num)					//�α�οn���k�p��n�� 
{
	double a=START, b=END;
	double h=(b-a)/num;					// �϶��e 
	double sum=0;
	
	sum+=(f(a)+f(b))/2;					//�p��f(a)�Bf(b) 
	
	for(int i=1; i<num; i++)			//�֥[�����I 
	{
		double x=a+i*h;
		sum+= f(x);
	}
		
	return sum*h;						//���W�϶��e�� 
}

int main()
{
	
	int num;
	printf("��J�϶���:");				//��J�϶��� 
	scanf("%d",&num); 
	
	double ans= trap(num);				//�p��n�� 
	
	printf("�n���謰=%.4f \n",ans);		//��X���G 
	
	system("pause");
	return 0;
	
} 
