// lab4-iin gert bodoh bodlogo 3
#include<stdio.h>
main()
{
	int odor, untah, hicheel, hicheeltsag, ajil, ajiltsag, choloottsag, tsag=0;
	printf("Onoodor hed dehi odor bolhiig oruulna uu: ");
	scanf("%d",&odor);
	printf("Ta heden tsag untsan be?:");
	scanf("%d",&untah);
	tsag = tsag + untah;
	printf("Onoodor ta heden hicheeltei ve?:");
	scanf("%d",&hicheel);
	if(hicheel > 0)
	{
		for(int i=1; i<=hicheel; i++)
		{
			printf("Hicheel %d-iin oroh tsagiig oruulna uu?:",i);
			scanf("%d",&hicheeltsag);
			tsag = tsag + hicheeltsag;
		}
	}
	printf("Onoodor ta hiih ajiltai yu?:");
	scanf("%d",&ajil);
	if(ajil > 0)
	{
		for(int i=1; i<=ajil; i++)
		{
			printf("Ajil %d-iin hiih tsagiig oruulna uu?:",i);
			scanf("%d",&ajiltsag);
			tsag = tsag + ajiltsag;
		}
	}
	printf("Onoodriin cholootei niit tsag:%d",24-tsag);
}
