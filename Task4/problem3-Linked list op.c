#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int calcSize(struct Node* node)
{
    int size=0;

    while(node!=NULL){
        node = node->next;
        size++;
    }
    return size;
}

void insertfirst(struct Node** head, int data)
{

    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void insertLast(struct Node** head, int data)
{

    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = NULL;

    if(*head==NULL){
        *head = newNode;
        return;
    }

    struct Node* temp = *head;

    while(temp->next!=NULL)
        temp = temp->next;

    temp->next = newNode;
}

void insertPosition(int pos, int data, struct Node** head)
{
    int size = calcSize(*head);
    if(pos < 1 || pos > size )
      {
        printf("Invalid position!\n");
      }
    else
      {
        struct Node* temp = *head;
        struct Node* newNode = (struct Node*)
        malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;

        while(--pos)
          {
            temp = temp->next;
          }
        newNode->next= temp->next;
        temp->next = newNode;
      }
}

void removeitem(struct Node** head , int key)
{
     struct Node *delptr = *head , *prev=NULL;

    if(delptr != NULL && delptr->data == key)
      {
       head = delptr->next;
         free(delptr);
         return;
      }
    while (delptr != NULL && delptr->data != key)
      {
        prev=delptr;
        delptr = delptr->next;
      }
      prev->next = delptr->next;
      free(delptr);
    if (delptr==NULL)
    {
        printf("Key not found\n");
        delptr = head;
    }
}

void display(struct Node* node){

    while(node!=NULL){
        printf("%d ",node->data);
        node = node->next;
    }
    printf("\n");
}

int f,count=0; 
int occurance (struct Node *temp)
{
    if(temp==NULL)
		return count;
	else
	{
		if(temp->data==f)
			count++;
		occurance(temp->next);
	}
}
int main()
{
    struct Node* head = NULL;

    insertfirst(&head,30);
    insertfirst(&head,40);
    insertfirst(&head,10);

    insertLast(&head,40);
    insertLast(&head,50);
    insertLast(&head,60);
    insertLast(&head,70);

    int item,pos,key;
    printf("Enter the Item and position to be inserted:");
    scanf("%d %d",&item , &pos);
    insertPosition(pos,item,&head);
    display(head);

    printf("Enter item to be deleted:");
    scanf("%d",&key);
    removeitem(&head,key);
    printf("%d was successfully removed\n",key);
    display(head);

    printf("Enter the item to find it's occurance:");
    scanf("%d",&f);
   int v = occurance(head);
   printf("%d occured %d times in the list",f,v);
    return 0;
}
