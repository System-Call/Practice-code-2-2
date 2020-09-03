#include <stdio.h>
#include <malloc.h>
typedef int Elemtapy;
typedef struct Lnode
{
	Elemtapy data;
	struct Lnode* next;
}Linknode;
void Createlistf(Linknode*& L, Elemtapy a[], int n)//头插法
{
	Linknode* s;
	L = (Linknode*)malloc(sizeof(Linknode));
	L->next = NULL;
	for (int i = 0;i < n;i++)
	{
		s = (Linknode*)malloc(sizeof(Linknode));
		s->data = a[i];
		s->next = L->next;
		L->next = s;
	}
}
void Creatalistr(Linknode*& L, Elemtapy a[], int n)
{
	Linknode* s, * r;
	L = (Linknode*)malloc(sizeof(Linknode));
	L->next = NULL;
	for (int i = 0;i < n;i++)
	{

	}
}
int main()
{
   
}

