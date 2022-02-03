// laboratory 10 angid bodlogo 5
#include<stdio.h>
#include<string.h>
int is_valid(char pwd[]);

int main()
{
	int a;
	char pwd[1000];
	gets(pwd);
	a = is_valid(pwd);
	printf("%d",a);
}
int is_valid(char pwd[])
{
	int a, tomUseg, too, temdegt, i;
	a = strlen(pwd);
	if(a <= 6)
	{
		for(tomUseg=0, i=0; i<a; i++)
			if(pwd[i]>=65 && pwd[i]<=90)
				tomUseg = 1;
		if(tomUseg == 1)
		{
			for(too=0, i=0; i<a; i++)
				if(pwd[i]>=48 && pwd[i]<=57)
					too++;
			if(too<=3 && too>0)
			{
				for(temdegt=0, i=0; i<a; i++)
					//63 33 36 32 42 44 45 43
					if(pwd[i]==32 || pwd[i]==33 || pwd[i]==36 || pwd[i]==42 || pwd[i]==43 || pwd[i]==44 || pwd[i]==45 || pwd[i]==63)
						temdegt++;
				if(temdegt > 0)
					return 0;
				else
					return 4;
			}
			else
				return 3;
		}
		else
			return 2;
	}
	else
		return 1;
}
