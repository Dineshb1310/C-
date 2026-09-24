#include <stdlib.h>
#include <stdio.h>	
typedef struct Node
{
    int data;
    struct Node* next;
}Node;
Node* ptr,*temp;
Node*insert(Node*head,int data)
{
    if(head==NULL){
        ptr = (Node*)malloc(sizeof(Node));
        head=ptr;
        head->data=data;
        head->next=NULL;
        
    }
    else{
        temp=head;
        while(1){
            if(temp->next==NULL){
                ptr = (Node*)malloc(sizeof(Node));
                temp->next = ptr;
                ptr->data=data;
                ptr->next=NULL;
                break;
            }
            temp=temp->next;
        }
    }
    return head;
    
}

   

void display(Node *head)
{
	Node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}
int main()
{
	int T,data;
    scanf("%d",&T);
    Node *head=NULL;	
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
    }
  display(head);
		
}
