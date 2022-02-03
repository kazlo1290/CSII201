//laboratory 11 angid bodlogo 2
#include<stdio.h>
struct Rational
{
	int d, n; // d/n gesen engiin butarhai
};
typedef struct Rational Rational;
Rational add(Rational a, Rational b);
Rational sub(Rational a, Rational b);
Rational mult(Rational a, Rational b);
Rational div(Rational a, Rational b);
Rational simplify(Rational a);
void print(Rational a);

int main()
{
	int hieh;
	struct Rational niilber, ylgavar, urjver, huvaagdal, huraasan;
	Rational neg, hoyr;
	scanf("%d%d", &neg.d, &neg.n);
	scanf("%d%d", &hoyr.d, &hoyr.n);
	niilber = add(neg,hoyr);
	ylgavar = sub(neg,hoyr);
	urjver = mult(neg,hoyr);
	huvaagdal = div(neg,hoyr);
	huraasan = simplify(neg);
	print(neg);
	printf("Engiin butarhain niilber: %d/%d\n",simplify(niilber).d ,simplify(niilber).n);
	printf("Engiin butarhain ylgavar: %d/%d\n",simplify(ylgavar).d ,simplify(ylgavar).n);
	printf("Engiin butarhain urjver: %d/%d\n",simplify(urjver).d ,simplify(urjver).n);
	printf("Engiin butarhain huvaagdal: %d/%d\n",simplify(huvaagdal).d ,simplify(huvaagdal).n);
	printf("Engiin butarhaig huraaval: %d/%d\n",huraasan.d ,huraasan.n);
}
void print(Rational a)
{
	printf("%d/%d\n",a.d,a.n);
}
Rational add(Rational a, Rational b)
{
	Rational k;
	if(a.n == b.n)
	{
		k.d = a.d + b.d;
		k.n = a.n;
	}
	else
	{
		k.d = a.d * b.n + b.d * a.n;
		k.n = a.n * b.n;
	}
	return k;
}
Rational sub(Rational a, Rational b)
{
	Rational k;
	if(a.n == b.n)
	{
		k.d = a.d - b.d;
		k.n = a.n;
	}
	else
	{
		k.d = a.d * b.n - b.d * a.n;
		k.n = a.n * b.n;
	}
	return k;
}
Rational mult(Rational a, Rational b)
{
	Rational k;
	k.d = a.d * b.d;
	k.n = a.n * b.n;
	return k;
}
Rational div(Rational a, Rational b)
{
	Rational k;
	k.d = a.d * b.n;
	k.n = a.n * b.d;
	return k;
}
Rational simplify(Rational a)
{
	Rational k;
	int i, hieh;
	for(i=1; i<=a.n; i++)
		if(a.d%i==0 && a.n%i==0)
			hieh = i;
	k.d = a.d / hieh;
	k.n = a.n / hieh;
	return k;
}
