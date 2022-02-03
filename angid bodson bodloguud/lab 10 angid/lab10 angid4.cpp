// laboratory 10 angid bodlogo 4
#include<stdio.h>

void read(int a[ ] , int n)
{
	int i ;
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
}
void print(int a[],int n)
{
	int i;
	for (i=0; i<n; i++)
		printf("%d ",a[i]);
	printf(" \n");
}

int modul(int x)
{
	if(x < 0)
		return -x;
	if(x >= 0)
		return x;
}

int sum(int a[], int n)
{
	int s, i;
	s = 0;
	for(i=0; i<n; i++)
	{
		s = s + a[i];
	}
	return s;
}

int avg(int a[], int n)
{
	int dundaj, i, s;
	s = 0;
	for(i=0; i<n; i++)
	{
		s = s + a[i];
	}
	dundaj = s / n;
	return dundaj;
}

int product (int a[ ] , int n)
{
	int t, i;
	t = 1;
	for(i=0; i<n; i++)
	{
		t = t * a[i];
	}
	return t;
}
int main( )
{
	int a[100], n, b[100];
	printf("n toonii utgiig oruul: ");
	scanf("%d",&n);
	read(a,n);
	printf("Tanii oruulsan daraalal: ");
	print(a,n);
	int mu, i;
	mu = avg(a,n);
	printf("mu-iin utga: %d\n",mu);
	for(i=0; i<n; i++)
	b[i] = modul(a[i] - mu);
	int alpha;
	alpha = product(b,n);
	printf("alpha-iin utga: %d\n",alpha);
	return 0;
}
