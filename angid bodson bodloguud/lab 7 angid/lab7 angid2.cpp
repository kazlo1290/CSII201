// laboratory 7 angid bodlogo 2
#include<stdio.h>
main()
{
	int n, i, a[100], s, s1;
	float dundaj;
	scanf("%d",&n);
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	s = 0;
	s1 = 0;
	for(i=0; i<n; i++)
		s = s + a[i];
	dundaj = (float)s / n;
	printf("Huuhduudiin dundaj: %.1f\n",dundaj);
	
	for(i=0; i<n; i++)
	{
		if(a[i] > dundaj)
			s1++;
	}
	printf("dundjaas deesh %d shirheg huuhed baina.",s1);
}
