// lab2-iin geriin daalgavar bodlogo 3
#include<stdio.h>

main()
{
	float n, huvi;
	scanf("%f",&n);
	huvi = (n / 35) * 100;
	huvi <= 100 && huvi >= 90 && printf("Dun: A");
	huvi <= 89 && huvi >= 80 && printf("Dun: B");
	huvi <= 79 && huvi >= 70 && printf("Dun: C");
	huvi <= 69 && huvi >= 60 && printf("Dun: D");
	huvi <= 59 && huvi >= 0 && printf("Dun: F");
}

