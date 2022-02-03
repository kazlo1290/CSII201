// laboratory 8 gert bodoh bodlogo 2
#include<stdio.h>
#include<string.h>

main()
{
	int s, i, max, k;
	char sentence[10000], ug[10000], olon[10000];
	gets(sentence);
	for(max=0, s=0, i=0, k=0; i<=strlen(sentence); i++, k++)
	{
		if(sentence[i]<65 || sentence[i]>90)
		{
			if(sentence[i]<97 || sentence[i]>122)
			{
				if(max < s)
				{
					max = s;
					strcpy(olon,ug);
				}
				k = -1; //ug[k]-g ehnees utga avhuulah uildel
				i++; //daraagiin ugnii omnoh zaig ug[k]-d oruulahgui bh uildel
				s = 0;						
			}
		}
		if(sentence[i]>=97 && sentence[i]<=122)
			ug[k] = sentence[i];
		else if(sentence[i]>=65 && sentence[i]<=90)
			ug[k] = sentence[i];
				
		if(sentence[i] == 'a' || sentence[i] == 'A')
			s++;
		else if(sentence[i] == 'i' || sentence[i] == 'I')
			s++;
		else if(sentence[i] == 'y' || sentence[i] == 'Y')
			s++;
		else if(sentence[i] == 'u' || sentence[i] == 'U')
			s++;
		else if(sentence[i] == 'e' || sentence[i] == 'E')
			s++;
		else if(sentence[i] == 'o' || sentence[i] == 'O')
			s++;
	}
	printf("%s",olon);
}
