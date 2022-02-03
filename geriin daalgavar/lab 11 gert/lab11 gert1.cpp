//laboratory 11 gert bodlogo 1
#include<stdio.h>
#include<string.h>
struct Student
{
	char fname[20], lname[20], id[10];
	float golch;
};
typedef struct Student Student;
// n oyutnii medeelliig garaas avch a husnegted hadgalna
void read_students(Student a[], int n);
// a husnegted hadgalsan n oyutnii medeelliig hevlene
void print_students(Student a[], int n);
// st oyutnii medeelliig hevlene
void print(Student st);
// a husnegted hadgalsan n oyutnii medeellees fname neriig haina
// Ug nertei oyutan oldoj baigaa bol husnegtiin dugaariig ugui bol -1 utgiig butsaana
int search_by_fname(Student a[], int n, char fname[]);
// a husnegted hadgalsan n oyutnii medeellees lname neriig haina
// Ug nertei oyutan oldoj baigaa bol husnegtiin dugaariig ugui bol -1 utgiig butsaana
int search_by_lname(Student a[], int n, char lname[]);
// a husnegted hadgalsan n oyutnii medeellees id id-g haina
// Ug id-tai oyutan oldoj baigaa bol husnegtiin dugaariig ugui bol -1 utgiig butsaana
int search_by_id(Student a[], int n, char id[]);
// a husnegted hadgalsan n oyutnii medeellees golch golchiig haina
// Ug golchtai oyutan oldoj baigaa bol husnegtiin dugaariig ugui bol -1 utgiig butsaana
int search_by_golch(Student a[], int n, float golch);
// a husnegted hadgalsan n oyutnii medeellees golchoor ni erembelne
void sort_by_golch(Student a[], int n);

int main()
{
	Student a[100];
	int n, cmd, idx;
	printf("Oyutnii too: ");
	scanf("%d", &n);
	read_students(a, n);
	print_students(a, n);
	char fname[20], lname[20], id[20];
	float golch;
	while(1)
	{
		printf("1: Nereer haih, 2: Ovgoor haih, 3: ID-aar haih, 4: Golchoor haih, 5: Golchoor erembeleh, 6: Hevleh, 7: Garah\n");
		scanf("%d", &cmd);
		if(cmd == 1)
		{
			printf("Haih ner: ");
			scanf("%s", fname);
			idx = search_by_fname(a, n, fname);
			if(idx == -1)
				printf("Oyutan oldsongui\n");
			else
				print(a[idx]);
		}
		else if(cmd == 2)
		{
			printf("Haih ovog: ");
			scanf("%s", lname);
			idx = search_by_lname(a, n, lname);
			if(idx == -1)
				printf("Oyutan oldsongui\n");
			else
				print(a[idx]);
		}
		else if(cmd == 3)
		{
			printf("Haih id: ");
			scanf("%s", id);
			idx = search_by_id(a, n, id);
			if(idx == -1)
				printf("Oyutan oldsongui\n");
			else
				print(a[idx]);
		}
		else if(cmd == 4)
		{
			printf("Haih golch: ");
			scanf("%f", &golch);
			idx = search_by_golch(a, n, golch);
			if(idx == -1)
				printf("Oyutan oldsongui\n");
			else
				print(a[idx]);
		}
		else if(cmd == 5)
			sort_by_golch(a, n);
		else if(cmd == 6)
			print_students(a, n);
		else
			break;
	}
	return 0;
}

void print(Student st)
{
	printf("Ner: %s\n", st.fname);
	printf("Ovog: %s\n", st.lname);
	printf("ID: %s\n", st.id);
	printf("Golch: %.1f\n", st.golch);
}
void read_students(Student a[], int n)
{
	int i;
	for(i=1; i<=n; i++)
	{
		scanf("%s", a[i].fname);
		scanf("%s", a[i].lname);
		scanf("%s", a[i].id);
		scanf("%f", &a[i].golch);
	}
}
void print_students(Student a[], int n)
{
	int i;
	for(i=1; i<=n; i++)
	{
		printf("%s\n", a[i].fname);
		printf("%s\n", a[i].lname);
		printf("%s\n", a[i].id);
		printf("%.1f\n", a[i].golch);
	}
}
int search_by_fname(Student a[], int n, char fname[])
{
	int i;
	for(i=1; i<=n; i++)
	{
		if(strcmp(a[i].fname,fname) == 0)
			return i;
	}
	return -1;
}
int search_by_lname(Student a[], int n, char lname[])
{
	int i;
	for(i=1; i<=n; i++)
	{
		if(strcmp(a[i].lname,lname) == 0)
			return i;
	}
	return -1;
}
int search_by_id(Student a[], int n, char id[])
{
	int i;
	for(i=1; i<=n; i++)
	{
		if(strcmp(a[i].id,id) == 0)
			return i;
	}
	return -1;
}
int search_by_golch(Student a[], int n, float golch)
{
	int i;
	for(i=1; i<=n; i++)
	{
		if(a[i].golch == golch)
		{
			return i;
		}
	}
	return -1;
}
void sort_by_golch(Student a[], int n)
{
	int i, t;
	float tmp_golch;
	char tmp_lname[20], tmp_fname[20], tmp_id[20];
	for(i=1; i<n; i++)
	{
		for(t=i+1; t<=n; t++)
		{
			if(a[i].golch <= a[t].golch)
			{
				tmp_golch = a[i].golch;
				strcpy(tmp_fname, a[i].fname);
				strcpy(tmp_lname, a[i].lname);
				strcpy(tmp_id, a[i].id);
				a[i].golch = a[t].golch;
				strcpy(a[i].fname, a[t].fname);
				strcpy(a[i].lname, a[t].lname);
				strcpy(a[i].id, a[t].id);
				a[t].golch = tmp_golch;
				strcpy(a[t].fname, tmp_fname);
				strcpy(a[t].lname, tmp_lname);
				strcpy(a[t].id, tmp_id);
			}
		}
	}
}
