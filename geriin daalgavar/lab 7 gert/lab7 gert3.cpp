//laboratory 7 gert bodlogo 1
#include<stdio.h>
#include<stdlib.h>
main()
{
	int s, t, y, n, m, k, i, a[100][100], b[100][100], c[100][100], p;
	scanf("%d%d%d",&n,&m,&k);
	if(n == k)
	{
//		exit(0);
// bagshaas #include<stdlib.h> sangiin exit(0) bolon exit(1) gesen functsuudiig lavlaj asuu
		for(i=0; i<n; i++)
		{
			for(t=0; t<m; t++)
				scanf("%d",&a[i][t]);
		}
		
		for(i=0; i<m; i++)
		{
			for(t=0; t<k; t++)
				scanf("%d",&b[i][t]);
		}
		
// n=3		(1 2)   (1 2 3)   ( 9 12 15)
// m=2		(3 4) * (4 5 6) = (19 26 33)
// k=3		(5 6)			  (29 40 51)
		
		for(i=0; i<n; i++)
		{
			for(t=0; t<k; t++)
			{
				s = 0;
				for(p=0; p<m; p++)
				{
					s = s + (a[i][p] * b[p][t]);				
				}
//				printf("s=%d ",s);
				c[i][t] = s;
			}
		}
		
		printf("\n");
		
		for(i=0; i<n; i++)
		{
			for(t=0; t<k; t++)
				printf("%2d ",c[i][t]);
			printf("\n");
		}		
	}
	else
		printf("2 matritsiig urjuulj bolohgui");
}
