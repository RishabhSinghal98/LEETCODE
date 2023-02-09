/* C program to merge two sorted linked lists */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
} ListNode;

ListNode* deleteNode(Node* head, int n)
{
  if(head->next==NULL)
    {
	
        free(head);
        return NULL;
    }

ListNode *temp=head;
ListNode *temp2=head;
ListNode *temp3;
ListNode *t1=head;

int len=1,j=0;
while(temp->next!=NULL)
{
    len++;
    temp=temp->next;
}
if(n==len){

head=head->next;
free(t1);
return head;

}
else {
while(j<len-n-1){
    temp2=temp2->next;
    j++;
}
if(temp2->next==NULL)
{
    return head;
}
temp3=temp2->next;
temp2->next=temp3->next;
free(temp3);
return head;

}
}
    
   





void create(Node** head, int data)
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
	create(&head, 7);
	create(&head, 1);
	create(&head, 3);
	create(&head, 2);
	printf("Created Linked list is:\n");
	show(head);
	int n = 3;
	deleteNode(head, n);
	printf("\nLinked List after Deletion is:\n");
	show(head);
	return 0;
}



