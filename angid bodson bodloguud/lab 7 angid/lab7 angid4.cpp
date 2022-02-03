// laboratory 7 angid bodlogo 4
#include<stdio.h>
main()
{
	int n, m, i, k, a[100][100], s, max, bagana;
	scanf("%d %d",&n,&m);
	for(i=0; i<n; i++)
	{
		for(k=0; k<m; k++)
			scanf("%d",&a[i][k]);
	}
/*
n=4 m=3
	1 2 3
	4 5 6
	6 8 9
	8 7 6
*/
	max = 0;
	for(i=0; i<m; i++)
	{
		for(k=0, s=0; k<n; k++)
		{
			if(a[k][i] % 2 == 0)
				s++;
		}
	//	printf("s[i]=%d\n",s);
		if(max < s)
		{
			max = s;
			bagana = i;
		}
	}	
	printf("Hamgiin olon tegsh too aguulsan bagana: %d",bagana+1);
}
