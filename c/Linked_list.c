#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
  while (ptr != NULL)
  {
    printf("%d->", ptr->data);
    ptr = ptr->next;
  }
  printf("NULL\n");
}

struct Node *insertFirst(struct Node *head, int data)
{
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->next = head;
  ptr->data = data;
  return ptr;
}

struct Node *insertAtIndex(struct Node *head, int data, int index)
{
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;
  struct Node *p = head;
  int i = 0;
  while (i != index - 1)
  {
    p = p->next;
    i = i + 1;
  }
  ptr->next = p->next;
  p->next = ptr;
  return head;
}

struct Node *insertAtEnd(struct Node *head, int data)
{
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;
  struct Node *p = head;
  while (p->next != NULL)
  {
    p = p->next;
  }
  p->next = ptr;
  ptr->next = NULL;
  return head;
};

struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;
  ptr->next = prevNode->next;
  prevNode->next = ptr;
  return head;
};

struct Node *deleteFirst(struct Node *head)
{
  struct Node *ptr = head;
  head = head->next;
  free(ptr);
  return head;
}

struct Node *deleteAtIndex(struct Node *head, int index)
{
  struct Node *p = head;
  struct Node *q = head->next;
  for (int i = 0; i < index - 1; i++)
  {
    p = p->next;
    q = q->next;
  }
  p->next = q->next;
  free(q);
  return head;
};
struct Node *deleteValue(struct Node *head, int value)
{
  struct Node *p = head;
  struct Node *q = head->next;
  while (q->data != value && q->next != NULL)
  {
    q = q->next;
  }
  if (q->data == value)
  {
    p->next = q->next;
    free(q);
  }

  return head;
};

struct Node *deleteAtLast(struct Node *head)
{
  struct Node *p = head;
  struct Node *q = head->next;
  while (q->next != NULL)
  {
    p = p->next;
    q = q->next;
  }

  p->next = NULL;
  free(q);
  return head;
}

int main()
{
  struct Node *head;
  struct Node *second;
  struct Node *third;
  struct Node *fourth;

  // Allocate memory for the nodes in the linked list in the heap
  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  fourth = (struct Node *)malloc(sizeof(struct Node));

  // link head and second nodes
  head->data = 7;
  head->next = second;

  // link second and third nodes
  second->data = 11;
  second->next = third;

  third->data = 99;
  third->next = fourth;

  // Terminate the list at the last Node
  fourth->data = 66;
  fourth->next = NULL;

  linkedListTraversal(head);
  printf("\n");

  // head = insertFirst(head, 56);
  //  head =insertAtIndex(head, 10, 2);
  //  head =insertAtEnd(head, 10);
  head = insertAfterNode(head, third, 10);
  linkedListTraversal(head);

    // head = deleteFirst(head);
  // head = deleteAtIndex(head, 2);
  // head = deleteAtLast(head);
  head = deleteValue(head, 11);
  printf("Linked list After deletion\n");
  linkedListTraversal(head);
  return 0;
}