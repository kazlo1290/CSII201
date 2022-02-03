// Laboratory angid bodlogo 6
#include<stdio.h>
#include<string.h>
main()
{
	char s[100000], a[100], b[100];
	int i, k;
	gets(s);
	k = 0;
	for(i=0; i<=strlen(s); i++, k++)
	{
		a[k] = s[i];
		if(s[i] == ' ')
		{
			if(s[i-1] != ' ')
				printf("\n");
//			strcpy(a, );
		}
		else
			printf("%c",s[i]);
	}
}
