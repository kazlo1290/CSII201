// laboratory 7 angid bodlogo 3
#include<stdio.h>
main()
{
	int n, i, a[100], t;
	scanf("%d",&n);
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	t = 0;
	for(i=0; i<n; i++)
	{
		if(a[i] != a[n-i-1])
		{
			t = 1;
			break;
		}
	//	printf("i=%d b=%d\n",a[i],a[b]);
	}
	if(t == 0)
		printf("Husnegt tegsh hemtei");
	else
		printf("Husnegt tegsh hemgui");
}
