/* C program to merge two sorted linked lists */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
}ListNode;

 ListNode* reverseList( ListNode* head){
     ListNode* prev=NULL;
     ListNode*current=head;
     ListNode*next_node=head;

    while(next_node!=NULL)
    {
        next_node=next_node->next;
        current->next=prev;
        prev=current;
        current=next_node;
    }
    head=prev;
return head;

}



void create(ListNode** head, int data)
{
	
	ListNode* new_node = (ListNode*)malloc(sizeof(ListNode));
	
	new_node->data = data;

	new_node->next = (*head);

	(*head) = new_node;
}


void show(ListNode* node)
{
	while (node != NULL) {
		printf("%d ", node->data);
		node = node->next;
	}
}


int main()
{
	struct Node* head = NULL;
	create(&head, 6);
	create(&head, 7);
	create(&head, 8);
	create(&head, 9);
	printf("Created Linked list is:\n");
	show(head);
	head=reverseList(head);
	printf("\nLinked List after Reverse is:\n");
	show(head);
	return 0;
}



