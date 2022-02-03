//laboratory 11 angid bodlogo 2
#include<stdio.h>
#include<math.h>
struct Point 
{
	int x, y;
};
double distance(Point a, Point b);
int main()
{
	double l;
	struct Point m, n;
	scanf("%d%d", &m.x, &m.y);
	scanf("%d%d", &n.x, &n.y);
	l = distance(m,n);
	printf("Hoyr tsegiin hoorondoh urt: %lf",l);
}

double distance(struct Point a, struct Point b)
{
	double d;
	d = sqrt( (b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
	return d;
}
