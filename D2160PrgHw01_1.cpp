/*
�Ǹ�:1102160
�m�W:���ʩ�
�������:2025/02/24
�ɦW:D2160PrgHw01_01.CPP
�{���\��:�p����@���n��n
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float h, r, pi=3.14;					// ���@���B��b�|���ܼơA�ŧi�k�ƭ� 
    double s, SA, BA, Area, V;

    printf("��J���@�����Υb�|:");			//��ƿ�X 
    scanf("%f %f", &h, &r);
    
	s=sqrt(pow(h,2)+pow(r,2));				//���@����p�⦡ 
    SA=pi*s*r;								//���@�����n�p�⦡ 
    BA=pi*pow(r,2);							//���@�����n�p�⦡ 
    Area=SA+BA;								//���@���n�p�⦡ 
    V=(1.0/3)*pi*h*pow(r,2);				//���@�����p�⦡ 
    printf("���n=%.2f , ��n=%.2f\n",Area ,V);		//���G��X 

    system("pause");
    return 0;
}


