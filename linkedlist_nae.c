
#include <stdio.h>
#include<stdlib.h>

typedef struct node

{
    int data;
    struct node * link;
    
}node;

node *  node_at_end(node*head,int data);

int main()
{
    node * head;
    head=(node*)calloc(1,sizeof(node));
    head->data=1;
    head->link=NULL;
    node * ptr=head;
    
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    
    
    ptr=node_at_end(ptr,2);
    ptr=node_at_end(ptr,3);
    

    return 0;
}

node * node_at_end(node*ptr,int data)
{

    node * temp;
    temp=calloc(1,sizeof(node));
    temp->data=data;
    temp->link=NULL;
    
    ptr->link=temp;
    return temp;

}
