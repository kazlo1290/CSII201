// lab 2 angid bodoh bodloguud : 6
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);
	(a == b) && (b == c) && (c == a) && printf("Zov gurvaljin");
	(a != b) && (b != c) && (c != a) && printf("Eldev talt gurvaljin");
	(a == b) && (b != c) && (c != a) && printf("Adil hajuut gurvaljin");
	(a != b) && (b == c) && (c != a) && printf("Adil hajuut gurvaljin");
	(a != b) && (b != c) && (c == a) && printf("Adil hajuut gurvaljin");
}
