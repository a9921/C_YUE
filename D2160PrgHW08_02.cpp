/* ===================================================================== 
學    號 ：1102160                                                  
姓    名 ：陳廷岳 
完成日期 ：2025/04/24                                                
檔    名 ：D2160PrgHw08_2.CPP                                       
程式功能 ：矩陣計算      
======================================================================== */ 

#include <stdio.h>
#include <stdlib.h>

void Show2DArray(int *pA, int row, int column)						//定義函數Show2DArray 
{
	for(int i=0; i<row; i++)							//當i小於行數時執行 
	{
		for(int j=0; j<column; j++)						//當j小於列數時執行 
			printf("%d\t", *(pA+i*column+j));				//輸入指標pA位置的值 
		printf("\n");
	}
	return;
}

void MatrixAdd(int *pA, int *pB, int *pC, int row, int column)				//定義 MatrixAdd函數 
{
	for(int i=0; i<row; i++)							//當i小於行數時執行
	{
		for(int j=0; j<column; j++)						//當j小於列數時執行
			*(pC+i*column+j)=*(pA+i*column+j)+*(pB+i*column+j); 		//指標pC的值為指標pA位置的值加上指標pB位置的值 
	}
}

void MatrixSubtract(int *pA, int *pB, int *pC, int row, int column)			//定義 MatrixSubtract 
{
	for(int i=0; i<row; i++)							//當i小於行數時執行 
	{
		for(int j=0; j<column; j++)						//當j小於列數時執行
			*(pC+i*column+j)=*(pA+i*column+j)-*(pB+i*column+j);		//指標pC的值為指標pA位置的值減去指標pB位置的值
	}
}

void MatrixTranspose(int *pA, int *pB, int row, int column)				//定義 MatrixTranspose 
{
	for(int i=0; i<row; i++)							//當i小於行數時執行 
	{
		for(int j=0; j<column; j++)						//當j小於列數時執行 
			*(pB+j*row+i)=*(pA+i*column+j);					//指標pB位置的值為pA位置的值+i乘於列數+j 
	}
}

void MatrixMuti(int *pA, int *pB, int *pC, int row1, int column1, int column2)		//定義 MatrixMuti
{
	for(int i=0; i<row1; i++)							//當i小於pA行數時執行
	{
		for(int j=0; j<column2; j++)						//當j小於pB列數時執行 
		{
			*(pC+i*column2+j)=0;						//清空pC位置的值 
			for(int k=0; k<column1; k++)					//當k小於pA列數時執行 
				*(pC+i*column2+j)+=*(pA+i*column1+k) * *(pB+k*column2+j);		//指標pC+i*pB列數+j的位置的值為加總指標pA+i*pA列數+k位置的值乘於指標pB+k*pB列數+j位置的值 
		}
	}
}



int main()
{
	int A[][2]={{1,2},{3,4},{5,6}};							//二階陣列A的值 
	int B[][2]={{2,4},{6,8},{10,12}};						//二階陣列A的值
	int C[][4]={{1,2,3,4},{5,6,7,8}};						//二階陣列A的值 
	int D[3][2], E[3][2], AT[2][3], temp[2][2], F[2][4];				//定義陣列D、E、AT、temp、F的行列數 
	
	MatrixAdd(&A[0][0], &B[0][0], &D[0][0], 3, 2);					//呼叫 MatrixAdd輸入陣列A、B行數3列數2 
	printf("D=A+B: \n");								//印出題目 
	Show2DArray(&D[0][0], 3, 2);							//呼叫 Show2DArray輸出陣列D的值行數3列數2 
	
	MatrixSubtract(&B[0][0], &A[0][0], &E[0][0], 3, 2);				//呼叫 MatrixSubtract輸入陣列A、B行數3列數2  
	printf("E=B-A: \n");								//印出題目 
	Show2DArray(&E[0][0], 3, 2);							//呼叫 Show2DArray輸出陣列E的值行數3列數2 
	
	MatrixTranspose(&A[0][0], &AT[0][0], 3, 2);					//呼叫MatrixTranspose輸入陣列A行數3列數2   
	printf("AT=At \n");								//印出題目 
	Show2DArray(&AT[0][0], 2, 3);							//呼叫 Show2DArray輸出陣列AT的值行數2列數3 
	
	MatrixMuti(&AT[0][0], &B[0][0], &temp[0][0], 2, 3, 2);				//呼叫MatrixMuti輸入陣列AT、B，AT行數2 AT列數3 B列數2 
	MatrixMuti(&temp[0][0], &C[0][0], &F[0][0], 2, 2, 4);				//呼叫MatrixMuti輸入陣列temp、C，temp行數2 temp列數3 C列數2 
	printf("F=AT*B*C: \n");								//印出題目 
	Show2DArray(&F[0][0], 2, 4);							//呼叫 Show2DArray輸出陣列F的值行數2列數4 
	
	system("pause");
	return 0;
}
