// laboratory 6 gert bodoh bodlogo 3
#include<stdio.h>
main()
{
	long long k, n, m, i, g, a[50][50][50], z, t;
	scanf("%d%d%d",&n,&k,&m);
	
	t = 1;
	for(i=0; i<n; i++)
	{
		for(g=0; g<k; g++)
		{
			z = 0;
			while(z < m)
			{
				a[i][g][z] = t;
				z++;
				t++;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		for(g=0; g<k; g++)
		{
			printf("%d-r bairnii %d-r ortsnii ailuud: ",i+1,g+1);
			for(z=0; z<m; z++)
				printf("%d ",a[i][g][z]);
			printf("\n");
		}
	}
}
//  n=4 k=5 m=3
// 1-r ortsnii 1 davhariin ailuud 1 2 3
// 1-r ortsnii 2 davhariin ailuud 4 5 6
