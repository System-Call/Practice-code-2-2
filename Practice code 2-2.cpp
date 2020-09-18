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
void Creatalistr(Linknode*& L, Elemtapy a[], int n)//尾插法
{
	Linknode* s, * r;
	L = (Linknode*)malloc(sizeof(Linknode));
	r = L;
	for (int i = 0;i < n;i++)
	{
		s = (Linknode*)malloc(sizeof(Linknode));
		s->data = a[i];
		r->next = s;
		r = s;
	}
	r->next = NULL;
}
void InitList(Linknode*& L)
{
	L = (Linknode*)malloc(sizeof(Linknode));
	L->next = NULL;
}
void DestroyList(Linknode*& L)//销毁链表
{
	Linknode* pre = L, * p = L->next;
	while (p != NULL)
	{
		free(pre);
		pre = p;
		p = p->next;
	}
	free(pre);
}
bool Listempty(Linknode* L)//判断链表是否为空
{
	return(L->next == NULL);
}
int Listlength(Linknode* L)//返回链表的长度
{
	int n = 0;
	Linknode* p = L;
	while (p->next != NULL)
	{
		n++;
		p = p->next;
	}
	return (n);
}
void Displist(Linknode* L)//输出链表
{
	Linknode* p = L->next;
	while (p != NULL)
	{
		printf("%d\n", p->data);
		p = p->next;
	}
	printf("\d");
}
bool GetElem(Linknode* L, int i, Elemtapy& e)//用e返回链表的第i个元素的值
{
	int j = 0;
	Linknode* p = L;
	while (j < i && p != NULL)
	{
		j++;
		p = p->next;
	}
	if (p == NULL)
		return false;
	else
	{
		e = p->data;
		return true;
	}
}
int Locatelist(Linknode* L, Elemtapy e)//按元素查找与e相同的数据域对应的逻辑序号
{
	int i = 1;
	Linknode* p = L->next;
	while (p != NULL && p->data != e)
	{
		i++;
		p = p->next;
	}
	if (p == NULL)
		return(0);
	else
		return(i);
}
bool Listinsert(Linknode*& L, int i, Elemtapy e)//在i位置插入数据元素e
{
	int j = 0;
	Linknode* p = L, * s;

	while (j < i - 1 && p != NULL)
	{
		j++;
		p = p->next;
	}
	if (p != NULL)
	{
		s = (Linknode*)malloc(sizeof(Linknode));
		s->data = e;
		s->next = p->next;
		p->next = s;
		return true;
	}
	else
		return false;
}
bool Deletelist(Linknode*& L, int i, Elemtapy& e)//删除第i个节点
{
	int j = 0;
	Linknode* p = L, * q;
	if (i <= 0)return false;
	while (j < i - 1 && p != NULL)
	{
		j++;
		p = p->next;
	}
	if (p == NULL)
		return false;
	else
	{
		q = p->next;
		if (q == NULL)return false;
		p->next = q->next;
		free(q);
		return true;
	}
}

int main()
{
	
}

