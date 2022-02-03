//laboratory 7 gert bodlogo 1
#include<stdio.h>
main()
{
	int n, i, k, s, a[100][100];
	scanf("%d",&n);
	s = 1;
	for(i=0; i<n; i++)
	{
		for(k=0; k<n; k++, s++)
		{
			if(s > n)
			{
				a[i][k] = n-(s-n);
				// n = 4 uyd 1 2 3 4      1 2 3 4
				//           2 3 4 5 -iig 2 3 4 3 bolgoj baigaa uildel
				//           3 4 5 6      3 4 3 2
				//           4 5 6 7      4 3 2 1				
			}
			else
			{
				a[i][k] = s;
			}
				
		}
		s = i + 2; 
		// Deerh uildel ni mor buriin ehleliig bagananaar ni daraaluulah uildel
	}
	
	for(i=0; i<n; i++)
	{
		for(k=0; k<n; k++)
			printf("%d ",a[i][k]);
		printf("\n");
	}
}
