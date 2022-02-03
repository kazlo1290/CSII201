// laboratory 13 angid bodlogo 1
#include<stdio.h>
main()
{
	int i, a[100];
	for(i=0; i<5; i++)
		scanf("%d", a+i); //&a[i]
	// hevleh uildel hiine uu.
	for(i=0; i<5; i++)
		printf("%d ", *(a+i));
}
