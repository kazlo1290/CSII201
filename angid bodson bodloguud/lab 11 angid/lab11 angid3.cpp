//laboratory 11 angid bodlogo 2
#include<stdio.h>
#include<math.h>
struct Triangle 
{
	int a, b, c;
};
double find_area(struct Triangle g);
int main()
{
	int s1, s2;
	struct Triangle neg, hoyr;
	printf("Neg dahi gurvaljnii taluud: ");
	scanf("%d%d%d", &neg.a, &neg.b, &neg.c);
	printf("Hoyr dahi gurvaljnii taluud: ");
	scanf("%d%d%d", &hoyr.a, &hoyr.b, &hoyr.c);
	s1 = find_area(neg);
	s2 = find_area(hoyr);
	if(s1 > s2)
		printf("1 dahi gurvaljin tom");
	else
		printf("2 dahi gurvaljin tom");
}
double find_area(struct Triangle g)
{
	int p, s;
	p = (g.a + g.b + g.c)/2;
	s = sqrt(p * (p-g.a) * (p-g.b) * (p-g.c));
	return s;
}
