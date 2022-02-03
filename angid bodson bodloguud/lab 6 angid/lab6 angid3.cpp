// laboratory 6 angid bodoh bodlogo 3
#include<stdio.h>
main()
{
	int n, i, a[100], t=0, r=0;
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<n-1; i++)
	{
		if(a[i] < a[i+1])
			{
				t++;
			}
	}
	for(i=0; i<n-1; i++)
	{
		if(a[i] > a[i+1])
			{
				r++;
			}
	}
	if(t == n-1)
		printf("Husnegt osohoor erembelegdsen");
	else if(r == n-1)
		printf("Husnegt buurahaar erembelegdsen");
	else
		printf("Erembgui");
}
