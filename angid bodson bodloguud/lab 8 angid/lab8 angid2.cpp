// Laboratory angid bodlogo 2
#include<stdio.h>
#include<string.h>
main()
{
	char s[100];
	int count, i;
	count = 0;
	scanf("%s",&s);
	for(i=0; i<strlen(s); i++)
	{
		if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I')
			count++;
		if(s[i] == 'O' || s[i] == 'Y' || s[i] == 'U')
			count++;
		if(s[i] == 'a')
			count++;
		if(s[i] == 'e')
			count++;
		if(s[i] == 'i')
			count++;
		if(s[i] == 'o')
			count++;
		if(s[i] == 'y')
			count++;
		if(s[i] == 'u')
			count++;		
	}
// egshig: 97 101 105 111 117 121 ASCII
	printf("Egshigiin too: %d",count);
}
