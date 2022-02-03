// laboratory 9 gert bodlogo 3
#include<stdio.h>
void read(int A[], int n);
void print(int A[], int n);
void sort(int A[], int n);

int main()
{
	int too[100], n;
	scanf("%d", &n);
	read(too, n);
	sort(too, n);
	print(too, n);
	return 0;
}
void read(int A[], int n)
{
	int k;
	for(k=0; k<n; k++)
		scanf("%d",&A[k]);
}
void print(int A[], int n)
{
	int k;
	for(k=0; k<n; k++)
		printf("%d ",A[k]);
}
void sort(int A[], int n)
{
	int k, j, tmp;
	for(k=0; k<n-1; k++)
	{
		for(j=k+1; j<n; j++)
		{
			if(A[j] < A[k])
			{
				tmp = A[k];
				A[k] = A[j];
				A[j] = tmp;
			}
		}
	}
}
