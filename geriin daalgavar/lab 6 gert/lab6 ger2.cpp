// laboratory 6 gert bodoh bodlogo 1
#include<stdio.h>
main()
{
	int n, i, k, bagana, mor, baruun, zuun, a[100][100], t, w;
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		for(k=0; k<n; k++)
		scanf("%d",&a[i][k]);
	}
	
	for(i=0; i<n; i++)
	{
		mor = 0;
		for(k=0; k<n; k++)
		{
			mor = mor + a[i][k];	
		}
		printf("Mor[%d]=%d ",i+1,mor);
	}
// n=3 uyd:
// 1 2 3
// 4 5 6
// 7 8 9
	printf("\n");
	

	for(i=0; i<n; i++)
	{
		for(k=0; k<n; k++)
			bagana = bagana + a[k][i];
		printf("Bagana[%d]=%d ",i+1,bagana);
		bagana = 0;
	}
// n=3 uyd:
// 1 2 3
// 4 5 6
// 7 8 9
	printf("\n");
	
	zuun = 0;
	for(k=0; k<n; k++)
		zuun = zuun + a[k][k];
	printf("Zuun diagonal=%d ",zuun);

		
	printf("\n");
// n=3 uyd:
// 1 2 3
// 4 5 6
// 7 8 9		
	w = n - 1;
	baruun = 0;
	for(i=0; i<n; i++)
	{
		for(k=0; k<n; k++)
			if(k == w)
			{
				baruun = baruun + a[i][k];
				w = w - 1;
			}
	}
	printf("Baruun diagonal=%d ",baruun);
	
}
