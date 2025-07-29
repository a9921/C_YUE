/* ===================================================================== 
��    �� �G1102160                                                  
�m    �W �G���ʩ� 
������� �G2025/04/24                                                
��    �W �GD2160PrgHw08_2.CPP                                       
�{���\�� �G�x�}�p��      
======================================================================== */ 

#include <stdio.h>
#include <stdlib.h>

void Show2DArray(int *pA, int row, int column)			//�w�q���Show2DArray 
{
	for(int i=0; i<row; i++)							//��i�p���Ʈɰ��� 
	{
		for(int j=0; j<column; j++)						//��j�p��C�Ʈɰ��� 
			printf("%d\t", *(pA+i*column+j));			//��J����pA��m���� 
		printf("\n");
	}
	return;
}

void MatrixAdd(int *pA, int *pB, int *pC, int row, int column)	//�w�q MatrixAdd��� 
{
	for(int i=0; i<row; i++)									//��i�p���Ʈɰ���
	{
		for(int j=0; j<column; j++)								//��j�p��C�Ʈɰ���
			*(pC+i*column+j)=*(pA+i*column+j)+*(pB+i*column+j); //����pC���Ȭ�����pA��m���ȥ[�W����pB��m���� 
	}
}

void MatrixSubtract(int *pA, int *pB, int *pC, int row, int column)	//�w�q MatrixSubtract 
{
	for(int i=0; i<row; i++)										//��i�p���Ʈɰ��� 
	{
		for(int j=0; j<column; j++)									//��j�p��C�Ʈɰ���
			*(pC+i*column+j)=*(pA+i*column+j)-*(pB+i*column+j);		//����pC���Ȭ�����pA��m���ȴ�h����pB��m����
	}
}

void MatrixTranspose(int *pA, int *pB, int row, int column)			//�w�q MatrixTranspose 
{
	for(int i=0; i<row; i++)										//��i�p���Ʈɰ��� 
	{
		for(int j=0; j<column; j++)									//��j�p��C�Ʈɰ��� 
			*(pB+j*row+i)=*(pA+i*column+j);							//����pB��m���Ȭ�pA��m����+i����C��+j 
	}
}

void MatrixMuti(int *pA, int *pB, int *pC, int row1, int column1, int column2)	//�w�q MatrixMuti
{
	for(int i=0; i<row1; i++)													//��i�p��pA��Ʈɰ���
	{
		for(int j=0; j<column2; j++)											//��j�p��pB�C�Ʈɰ��� 
		{
			*(pC+i*column2+j)=0;												//�M��pC��m���� 
			for(int k=0; k<column1; k++)										//��k�p��pA�C�Ʈɰ��� 
				*(pC+i*column2+j)+=*(pA+i*column1+k) * *(pB+k*column2+j);		//����pC+i*pB�C��+j����m���Ȭ��[�`����pA+i*pA�C��+k��m���ȭ������pB+k*pB�C��+j��m���� 
		}
	}
}



int main()
{
	int A[][2]={{1,2},{3,4},{5,6}};							//�G���}�CA���� 
	int B[][2]={{2,4},{6,8},{10,12}};						//�G���}�CA����
	int C[][4]={{1,2,3,4},{5,6,7,8}};						//�G���}�CA���� 
	int D[3][2], E[3][2], AT[2][3], temp[2][2], F[2][4];	//�w�q�}�CD�BE�BAT�Btemp�BF����C�� 
	
	MatrixAdd(&A[0][0], &B[0][0], &D[0][0], 3, 2);			//�I�s MatrixAdd��J�}�CA�BB���3�C��2 
	printf("D=A+B: \n");									//�L�X�D�� 
	Show2DArray(&D[0][0], 3, 2);							//�I�s Show2DArray��X�}�CD���Ȧ��3�C��2 
	
	MatrixSubtract(&B[0][0], &A[0][0], &E[0][0], 3, 2);		//�I�s MatrixSubtract��J�}�CA�BB���3�C��2  
	printf("E=B-A: \n");									//�L�X�D�� 
	Show2DArray(&E[0][0], 3, 2);							//�I�s Show2DArray��X�}�CE���Ȧ��3�C��2 
	
	MatrixTranspose(&A[0][0], &AT[0][0], 3, 2);				//�I�sMatrixTranspose��J�}�CA���3�C��2   
	printf("AT=At \n");										//�L�X�D�� 
	Show2DArray(&AT[0][0], 2, 3);							//�I�s Show2DArray��X�}�CAT���Ȧ��2�C��3 
	
	MatrixMuti(&AT[0][0], &B[0][0], &temp[0][0], 2, 3, 2);	//�I�sMatrixMuti��J�}�CAT�BB�AAT���2 AT�C��3 B�C��2 
	MatrixMuti(&temp[0][0], &C[0][0], &F[0][0], 2, 2, 4);	//�I�sMatrixMuti��J�}�Ctemp�BC�Atemp���2 temp�C��3 C�C��2 
	printf("F=AT*B*C: \n");									//�L�X�D�� 
	Show2DArray(&F[0][0], 2, 4);							//�I�s Show2DArray��X�}�CF���Ȧ��2�C��4 
	
	system("pause");
	return 0;
}
