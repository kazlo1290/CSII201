//laboratory 12 angid bodlogo 3
#include<stdio.h>
int main()
{
	int a[100];
	int i, n;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d",&(*(a+i))); // *(a+i) == a[i]
	int *max;
	max = a;
	for(i=0; i<n; i++)
		if(*max < *(a+i))
			max = a + i;
	printf("%d = %d",*max,max);
	return 0;
}
