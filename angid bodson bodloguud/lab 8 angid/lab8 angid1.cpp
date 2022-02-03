// Laboratory angid bodlogo 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char ner[100], ovog[100], ongo[100], choloot[100], hobby[100], torsonsarodor[100];
	int year, month, day, nas, i;
		printf("Tanii ovog?: ");
	scanf("%s",ovog);
		printf("Tanii ner?: ");
	scanf("%s",ner);
		printf("Tanii torson on sar odor? Jich(2002/05/27): ");
	scanf("%s",torsonsarodor);
		printf("Tanii durtai ongo?: ");
	scanf("%s",ongo);
		printf("Tanii hobby?: ");
	scanf("%s",hobby);
		printf("Ta choloot tsagaaraa yu hiideg ve?: ");
	scanf("%s",choloot);
	
	for(i=0, year=0; torsonsarodor[i]!='/'; i++)
		year = year*10 + torsonsarodor[i] - 48;
	for(i++, month=0; torsonsarodor[i]!='/'; i++)
		month = month*10 + torsonsarodor[i] - 48;
	for(i++, day=0; torsonsarodor[i]!='\0'; i++)
		day = day*10 + torsonsarodor[i] - 48;		
		
	if(month <= 4)
	{
		if(day <= 2)
			nas = 2021 - year;
		else
			nas = 2020-year;
	}
	else
		nas = 2020 - year;
		

	//nas = 2021 - year;
	//printf("%d %d %d\n",year,month,day);

	printf("%s ovogtoi %s ni %s udur tursun. Odoo %d nastai. \nTuunii durtai ongo bol %s. Ter choloot tsagaaraa %s hiideg. Tuunii hobby bol %s.",ovog,ner,torsonsarodor,nas,ongo,choloot,hobby);
}
