#include <bits/stdc++.h>
using namespace std;
void insertLinkedList(struct node **, int, int);
void deleteLinkedList(struct node **, int);
struct node
{
	int data;
	struct node *next;
};

void insertLinkedList(struct node **head, int data, int position)
{
	int k = 1;
	struct node *p, *q, *temp = (struct node *)malloc(sizeof(struct node));
	if (!temp)
	{
		cout << "Memory Error\n";
		return;
	}
	temp->data = data;
	p = *head;
	if (position == 1)
	{
		temp->next = p;
		*head = temp;
	}
	else
	{
		while ((p != NULL) && (k < position))
		{
			k++;
			q = p;
			p = p->next;
		}
		q->next = temp;
		temp->next = p;
	}
}

void deleteLinkedList(struct node **head, int position)
{
	int k = 1;
	if (*head == NULL)
	{
		cout << "List Empty\n";
		return;
	}
	struct node *p, *q;
	p = *head;
	if (position == 1)
	{
		*head = (*head)->next;
		free(p);
		return;
	}
	else
	{
		while ((p != NULL) && (k < position))
		{
			k++;
			q = p;
			p = p->next;
		}
		if (p == NULL)
			cout << "Position invalid\n";
		else
		{
			q->next = p->next;
			free(p);
		}
	}
}
int main()
{
}