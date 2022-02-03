// laboratory 9 angid bodoh bodlogo 4
#include<stdio.h>
int prime_range(int ,int );
int A[100];
main()
{
	int a, x, y, k;
	scanf("%d%d",&x,&y);
	a = prime_range(x,y);
	printf("a-aas b hurtelh niit anhnii too: %d shirheg baina\n",a);
	for(k=0; k<a; k++)
		printf("%d ",A[k]);
}

int prime_range(int a,int b)
{
	int s, i, t, k;
	for(i=a, s=0; i<=b; i++)
	{
		k = 2;
		t = 0;
		while(k <= i/2)
		{
			if(i % k == 0)
				t = 1;
			k++;
		}
		if(t == 0 && i != 1)
		{
			A[s] = i;
			s++;
		//	printf("%d ",i);			
		}
	}
	return(s);
}
