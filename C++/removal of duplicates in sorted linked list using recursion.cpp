/* Recursive Solution */

#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node* next;
};

void removeDuplicates(Node* head)
{
	Node* to_free;
  
	if (head == NULL)
		return;

	if (head->next != NULL)
	{
		
		if (head->data == head->next->data)
		{
			to_free = head->next;
		head->next = head->next->next;
		free(to_free);
		removeDuplicates(head);
		}
		else 
		{
			removeDuplicates(head->next);
		}
	}
}

void push(Node** head_ref, int new_data)
{
	Node* new_node = new Node();
			
	new_node->data = new_data;
				
	new_node->next = (*head_ref);	
		
	(*head_ref) = new_node;
}

void printList(Node *node)
{
	while (node!=NULL)
	{
		cout<<" "<<node->data;
		node = node->next;
	}
}

int main()
{
	Node* head = NULL;
	
	push(&head, 40);
	push(&head, 35);
	push(&head, 23);
	push(&head, 23);
	push(&head, 21);
	push(&head, 21);									

	cout<<"Before duplicate removal ";
	printList(head);

	removeDuplicates(head);

	cout<<"\nAfter duplicate removal ";	
	printList(head);			
	
	return 0;
}
