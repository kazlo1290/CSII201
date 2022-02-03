// laboratory 10 angid bodlogo 1
#include<stdio.h>
#include<string.h>
int count(char s[]);
int main()
{
	char a[100];
	int t;
	scanf("%s",a);
	t = count(a);
	printf("%d",t);
}

int count(char s[])
{
	int tooluur, i;
	tooluur = 0;
	for(i=0; i<strlen(s); i++)
	{
		if((s[i] == 'a') || (s[i] == 'A'))
			tooluur++;
		if((s[i] == 'o') || (s[i] == 'O'))
			tooluur++;
		if((s[i] == 'e') || (s[i] == 'E'))
			tooluur++;
		if((s[i] == 'i') || (s[i] == 'I'))
			tooluur++;
		if((s[i] == 'u') || (s[i] == 'U'))
			tooluur++;
	}
	return tooluur;
}
