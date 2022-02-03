// string.h -iin strcmp() functioniig shalgav
#include<stdio.h>
#include<string.h>
main()
{
	char a[20], b[20];
	scanf("%s %s",a,b);
	if(strcmp(a,b)==0)
		printf("Tsentsuu");
	else if(strcmp(a,b)==1)
		printf("Ehniih ni ih");
	else if(strcmp(a,b)==-1)
		printf("Hoyr dahi ni ih");
}
