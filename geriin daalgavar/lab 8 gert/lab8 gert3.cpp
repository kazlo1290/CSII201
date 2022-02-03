// laboratory 8 gert bodoh bodlogo 3
#include<stdio.h>
#include<string.h>
main()
{
	int i, k, bairlal, t, w;
	char tsuvaa[10000], ug[10000], shalguur[10000];
	gets(tsuvaa);
	scanf("%s",ug);
	w = strlen(ug);
	bairlal = -1;
	for(i=0; i<strlen(tsuvaa); i++)
	{
		if(tsuvaa[i] == ug[0])
		{
			if((tsuvaa[i+w]<97 || tsuvaa[i+w]>122) && (tsuvaa[i-1]<97 || tsuvaa[i-1]>122))
			{
					for(k=i, t=0; t<strlen(ug); k++, t++)
						shalguur[t] = tsuvaa[k];
					if(strcmp(ug,shalguur) == 0)
						bairlal = i;					
			}
		}
	}
	if(bairlal == -1)
		printf("-1");
	else
		printf("Ugiin bairlal: %d-aas %d hurtel",bairlal+1,bairlal+w);
}
