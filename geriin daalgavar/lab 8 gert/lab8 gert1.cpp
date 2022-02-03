// laboratory 8 gert bodoh bodlogo 1
#include<stdio.h>
#include<string.h>

main()
{
	int i, s;
	char oguulber[10000];
	gets(oguulber);
	for(i=1, s=0; i<=strlen(oguulber); i++)
	{
		if(oguulber[i]<65 || oguulber[i]>90)
			if(oguulber[i]<97 || oguulber[i]>122)
				if(oguulber[i-1]>=65 && oguulber[i-1]<=90)
					s++;					
				else if(oguulber[i-1]>=97 && oguulber[i-1]<=122)
					s++;
	}
	printf("%d",s);
}
