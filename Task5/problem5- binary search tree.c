#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left , *right;
};

struct Node * newnode (int data)
{
  struct Node *ptr= (struct Node *) malloc(sizeof(struct Node));
     ptr->data=data;
    ptr->left=ptr->right=NULL;
}

struct Node * creatnode (struct Node *head,int value)
{
    if (head==NULL)
    {
        head =newnode(value);
        return head;
    }
    else if(head->data <= value)
        head->left= creatnode(head->left,value);
    else
        head->right= creatnode(head->right,value);
}
void Preorderdisplay(struct Node *node)
{
    if(node==NULL)
        return;
    printf("%d\t",node->data);
    Preorderdisplay(node->right);
        Preorderdisplay(node->left);

}
int main()
{
    struct Node *head =NULL;
    head=creatnode(head,4);
    head=creatnode(head,2);
    head=creatnode(head,7);
    head=creatnode(head,1);
    head=creatnode(head,3);

    head=creatnode(head,6);

    Preorderdisplay(head);
}
