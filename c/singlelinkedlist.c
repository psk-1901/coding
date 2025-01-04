#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *ptr=NULL, *temp=NULL, *temp1, *temp2;
void create();
void insert_at_front();
void insert_at_end();
void insert_at_middle();
void delete_at_front();
void delete_at_middle();
void delete_at_end();
void display();
int main()
{
    int ch;
    head=(struct node*)malloc(sizeof(struct node));
    head->next=NULL;
    ptr=head;
    printf("\n1.create\n2.insert_at_front\n3.insert_at_middle\n4.insert_at_end\n5.display\n6.delete_at_front\n7.delete_at_middle\n8.delete_at_end\n9.exit");
    while(1)
    {
        printf("\n enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: create();
                    break;
            case 2: insert_at_front();
                    break;
            case 3: insert_at_middle();
                    break;
            case 4: insert_at_end();
                    break;
            case 5: display();
                    break;
            case 6: delete_at_front();
                    break;
            case 7: delete_at_middle();
                    break;
            case 8: delete_at_end();
                    break;
            case 9: exit(0);
            default: printf("wrong choice");
        }
    }
}
void create()
{
    char ch;
    while(1)
    {
        insert_at_end();
        printf("if u want to continue press 'y' or 'n':");
        scanf("\n%c",&ch);
        if(ch=='y'||ch=='Y')
        {
            continue;
        }
        else
        {
            break;
        }
    }
}
void insert_at_front()
{
    int ele;
    struct node *newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    if(newNode==NULL)
    {
        printf("out of space");
        return;
    }
    printf("enter ele:");
    scanf("%d",&ele);
    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        newNode->next=head->next;
        head->next=newNode;
        newNode->data=ele;
    }
    printf("inserted successfully");
}
void insert_at_end()
{
    struct node *newNode;
    int ele;
    newNode=(struct node*)malloc(sizeof(struct node));
    temp=head;
    if(newNode==NULL)
    {
        printf("out of space");
        return;
    }
    printf("enter element:");
    scanf("%d",&ele);
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    newNode->next=NULL;
    temp->next=newNode;
    newNode->data=ele;
    printf("inserted successfully");
}
void insert_at_middle()
{
    struct node *newNode;
    int ele, pos, count=0;
    newNode=(struct node*)malloc(sizeof(struct node));
    temp=head;
    if(newNode==NULL)
    {
        printf("out of space");
        return;
    }
    printf("enter element:");
    scanf("%d",&ele);
    printf("enter the position where u want to insert the ele:");
    scanf("%d",&pos);
    while(temp->next!=NULL)
    {
        count++;
        temp=temp->next;
    }
    if(count<pos)
    {
        printf("pos is out of range");
        return;
    }
    temp=head;
    count=0;
    while(count<pos-1)
    {
        temp=temp->next;
        count++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    newNode->data=ele;
    printf("inserted successfully");
}
void display()
{
    temp=head;
    if(temp->next==NULL)
    {
        printf("list is empty");
        return;
    }
    while(temp->next!=NULL)
    {
        printf("%d->",temp->next->data);
        temp=temp->next;
    }
    printf("NULL");
}
void delete_at_front()
{
    temp=head;
    if(temp->next==NULL)
    {
        printf("list is empty deletion is not possible");
        return;
    }
    head=temp->next;
    free(temp);
    printf("deleted successfully");
}
void delete_at_end()
{
    temp1=head;
    if(temp1->next==NULL)
    {
        head=NULL;
        return;
    }
    while(temp1->next!=NULL)
    {
        temp2=temp1;
        temp1=temp1->next;
    }
    temp2->next=NULL;
    free(temp1);
    printf("inserted successfully");
}
void delete_at_middle()
{
    int pos,count;
    ptr=head;
    if(ptr->next==NULL)
    {
        printf("list is empty");
        return;
    }
    count=0;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
        count++;
    }
    printf("enter the position u want to delete:");
    scanf("%d",&pos);
    if(count<pos)
    {
        printf("pos is out of range");
        return;
    }
    ptr=head;
    count=0;
    while(ptr->next->next!=NULL&&count<pos-1)
    {
        ptr=ptr->next;
        count++;
    }
    temp=ptr->next;
    ptr->next=ptr->next->next;
    free(temp);
    printf("deleted successfully");
}