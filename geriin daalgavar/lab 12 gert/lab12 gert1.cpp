//laboratory 12 gert bodlogo 1
#include<stdio.h>
#include<string.h>
void print(char a[][10], int size);
void sort(char a[][10], int size);
int search(char a[][10], char *word);
int main()
{
	int n, p, i;
	char t[11];
	scanf("%d",&n);
	char a[n+1][10];
	for(i=0; i<n; i++)
		scanf("%s", a[i]);
	scanf("%s",t);
	sort(a, n);
	print(a, n);
	strcpy(a[n], "end");
	p = search(a, t);
	printf("%d",p);
//	printf("\n%d",sizeof(a)/10);

// car = 99 97 114             hamgiin ehnii usgiin ascii code-iig jishne
// robot = 114 111 98 111 116
// apple = 97 112 112 108 101
}
void print(char a[][10], int size)
{
	int i;
	for(i=0; i<size; i++)
		printf("%s\n",a[i]);
}
void sort(char a[][10], int size)
{
	char s[10];
	int i, k;
	for(i=0; i<size-1; i++)
	{
		for(k=i+1; k<size; k++)
		{
			if(strcmp(a[i],a[k]) == 1)
			{
				strcpy(s,a[i]);
				strcpy(a[i],a[k]);
				strcpy(a[k],s);
			}
		}
	}
}
 int search(char a[][10], char *word)
{
	int i;
	for(i=0; strcmp(a[i],"end")!=0; i++)
	{
		if(strcmp(a[i],word)==0)
			return i;
	}
	return -1;
} 
