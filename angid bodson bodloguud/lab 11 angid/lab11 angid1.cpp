//laboratory 11 angid bodlogo 1
#include<stdio.h>
#include<math.h>
struct Triangle
{
	int a, b, c; // a, b, c ni gurvaljnii 3 taliin urt
};

int main()
{
	int p2, p1, s1, s2;
	struct Triangle neg, hoyr;
	printf("1 dahi gurvaljinii taluud: ");
	scanf("%d%d%d", &neg.a, &neg.b, &neg.c);
	printf("2 dahi gurvaljinii taluud: ");
	scanf("%d%d%d", &hoyr.a, &hoyr.b, &hoyr.c);
	p1 = (neg.a + neg.b + neg.c)/2;
	p2 = (hoyr.a + hoyr.b + hoyr.c)/2;
	s1 = sqrt(p1 * (p1 - neg.a) * (p1 - neg.b) * (p1 - neg.c));
	s2 = sqrt(p2 * (p2 - hoyr.a) * (p2 - hoyr.b) * (p2 - hoyr.c));
	if(s1 < s2)
		printf("2 dahi gurvaljin tom");
	else
		printf("1 dahi gurvaljin tom");
	return 0;
}
