// laboratory 10 gert bodlogo 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void read_2darray(int a[][100], int n, int m)
{
	int i, j;
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			scanf("%d",&a[i][j]);
}
void print_2darray(int a[][100], int n, int m)
{
	int i, j;
	for (i=0; i<n; i++) 
	{
		for(j=0; j<m; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}
/* Daraah paramertuudiig avch mor bur, bagana buriin hamgiin bagiig
	row, col husnegtuuded hadgalna.
	a: hoyr hemjeest husnegt
	n: husnegtiin moriin too
	m: husnegtiin baganiin too
	row: mor buriin baga ni hadgalagdana
	col: bagana buriin baga ni hadgalagdana

*/
void min(int a[100][100], int n, int m, int row[], int col[])
{
	int i, k, bMin, mMin;
	for(i=0; i<n; i++)
	{
		mMin=a[i][0];
		for(k=0; k<m; k++)
			if(mMin > a[i][k])
				mMin = a[i][k];
		row[i] = mMin;
	}
	for(i=0; i<n; i++)
	{
		bMin=a[0][i];
		for(k=0; k<m; k++)
		{
			if(bMin > a[k][i])
				bMin = a[k][i];
		}
		col[i] = bMin;
	}
}
int main( )
{
	int c_row, c_col, i;
	int A[100], B[100];
	int C[100][100];
	printf("xusnegtiin mor, baganii toog oruul: ");
	scanf("%d%d",&c_row,&c_col);
	read_2darray(C, c_row, c_col);
	printf("\n");
	print_2darray (C, c_row, c_col);
	min(C, c_row, c_col , A, B);
	printf("mor buriin xamgiin baga:\n");
	for(i=0; i<c_row; i++) 
	{
		printf("%d-r moriin xamgiin baga: %d\n",i+1,A[i]);
	}
	printf("bagana buriin xamgiin baga:\n");
	for(i=0; i<c_col; i++) 
	{
		printf("%d-r moriin xamgiin baga: %d\n",i+1,B[i]);
	}
	return 0;
}
