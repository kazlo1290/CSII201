//laboratory 12 angid bodlogo 4
// jishee ni: 10 2 8 5 9 -->> 2 5 8 9 10
#include<stdio.h>
void sort(int *begin, int *end);
int main()
{
	int n, a[20], i;
	scanf("%d",&n);
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	sort(&a[0], &a[n-1]);
	for(i=0; i<n; i++)
		printf("%d ",a[i]);
}
void sort(int *begin, int *end)
{
	int i, n, k, tmp;
	n = end - begin;
	for(i=0; i<n-1; i++)
	{
		for(k=i+1; k<n; k++)
		{
			if(*(begin+i) < *(begin+k))
			{
				tmp = *(begin+i);
				*(begin+i) = *(begin+k);
				*(begin+k) = tmp;
			}
		}
	}
}
