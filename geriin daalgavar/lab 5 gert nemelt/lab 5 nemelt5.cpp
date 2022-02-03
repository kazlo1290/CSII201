// laboratory 5 nemelt gert bodoh bodlogo 5
#include<stdio.h>
main()
{
	int n, a, b, c, p, t, d;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&a);
		if(a == 1)	
		{
			b = a;
			t = i;
		}
		if(i == t+1 && a == 2)
		{
			c = b;
			b = a;
		}
		if(i == t+2 && a == 3)
		{
			d = c;
			c = b;
			b = a;
		}
			
		if(b==3 && c==2 && d==1)
			p = 1;	
	}
	if(p == 1)
		printf("1 2 3 toonuud daraalj orson baina.");
	else
		printf("1 2 3 toonuud daraalj oroogui baina.");
}
