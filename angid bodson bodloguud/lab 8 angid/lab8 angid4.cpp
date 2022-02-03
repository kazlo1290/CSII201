// Laboratory angid bodlogo 4
#include<stdio.h>
#include<string.h>
int main () 
{
	char s[] = "hello";
	char s2[] = "MUIS - iinhaan";
	int i;
	for(i=0; i<=strlen(s); i++)
		s2[i] = s[i];
	
	printf("%s",s2) ;
	return 0;
}

