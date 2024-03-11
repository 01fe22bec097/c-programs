//SINGLY LINKED LIST
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node *NODE;

NODE CreateNode();
void DisplayList(NODE );
NODE InsertEnd(NODE );
NODE InsertFront(NODE );
NODE DeleteEnd(NODE );
NODE DeleteFront(NODE );
NODE InsertPosition(NODE ,int );
NODE DeletePosition(NODE, int );
int CountNodes(NODE );
NODE ReverseList(NODE );
void SearchNode(NODE ,int );

int main()
{
    NODE head=NULL;
    int choice,pos,count,toSearch;
    for (;;)
    {
        printf("\n1.Insert End\n2.Insert Front\n3.Display List\n4.Delete End\n5.Delete Front\n6.Insert at Position\n7.Delete at Position\n8.Count number of nodes\n9.Reverse the list\n10.Search Node\n11.End\n");
        printf("Enter the choice:");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:head=InsertEnd(head); break;
            case 2:head=InsertFront(head); break;
            case 3:DisplayList(head); break;
            case 4:head=DeleteEnd(head); break;
            case 5:head=DeleteFront(head); break;
            case 6:printf("Enter the position to insert element:");
                   scanf("%d",&pos);
                   head=InsertPosition(head,pos); break;
            case 7:printf("Enter the position to be deleted:");
                   scanf("%d",&pos);
                   head=DeletePosition(head,pos); break;
            case 8:count=CountNodes(head);
                   printf("\nThe number of nodes is %d\n",count); break;
            case 9:head=ReverseList(head); break;
            case 10:printf("Enter the number to search for:");
                    scanf("%d",&toSearch);
                    SearchNode(head,toSearch); break;
            case 11:exit(0); break;
        }
    }
}
NODE CreateNode()
{
    NODE New,cur;
    New=(NODE)malloc(sizeof(struct node));
    if (New==NULL)
    {
        printf("Memory not allocated");
        exit(1);
    }
    printf("Enter the data:");
    scanf("%d",&New->data);
    New->next=NULL;
    return New;
}
void DisplayList(NODE head)
{
    NODE cur;
    cur=head;
    if (head==NULL)
    {
        printf("\nEmpty List\n");
        return;
    }
    printf("\n");
    while (cur!=NULL)
    {
        printf("%d ",cur->data);
        cur=cur->next;
    }
    printf("\n");
}
NODE InsertEnd(NODE head)
{
    NODE New,cur;
    New=CreateNode();
    if (head==NULL)
    {
        head=New;
    }
    else
    {
        cur=head;
        while (cur->next!=NULL)
        {
            cur=cur->next;
        }
        cur->next=New;
    }
    New->next=NULL;
    return head;
}
NODE InsertFront(NODE head)
{
    NODE New;
    New=CreateNode();
    if (head==NULL)
    {
        New->next=NULL;
    }
    else
    {
        New->next=head;
    }
    head=New;
    return head;
}
NODE DeleteEnd(NODE head)
{
    NODE cur,prev;
    if (head==NULL)
    {
        printf("\nEmpty List\n");
    }
    else if (head->next==NULL)
    {
        free(head);
        return NULL;
    }
    else
    {
        cur=head;
        prev=NULL;
        while (cur->next!=NULL)
        {
            prev=cur;
            cur=cur->next;
            printf("\nDeleted node is %d\n",cur->data);
        }
        prev->next=NULL;
        free(cur);
    }
    return head;
}
NODE DeleteFront(NODE head)
{
    NODE cur;
    if (head==NULL)
    {
        printf("\nEmpty List\n");
    }
    else if (head->next==NULL)
    {
        free(head);
        return NULL;
    }
    else
    {
        cur=head;
        head=head->next;
        printf("\nDeleted node is %d\n",cur->data);
        free(cur);
    }
    return head;
}
NODE InsertPosition(NODE head,int pos)
{
    NODE cur,prev,New;
    int count=0,temp=0;
    New=CreateNode();
    if (pos<=0)
    {
        printf("\nInvalid position\n");
        free(New);
        return head;
    }
    cur=head;
    while (cur!=NULL)
    {
        cur=cur->next;
        count++;
    }
    if (pos==1)
    {
        if (head!=NULL)
            New->next=head;
        else
            New->next=NULL;
        head=New;
        return head;
    }
    if (pos<=count+1)
    {
        prev=NULL;
        cur=head;
        while (cur!=NULL && temp!=pos-1)
        {
            prev=cur;
            cur=cur->next;
            temp++;
        }
        prev->next=New;
        New->next=cur;
        return head;
    }
    if (pos>count+1)
    {
        printf("\nInvalid position\n");
        free(New);
        return head;
    }
}
NODE DeletePosition(NODE head,int pos)
{
    NODE prev,cur,New;
    int count=0,temp=0;
    cur=head;
    while (cur!=NULL)
    {
        cur=cur->next;
        count++;
    }
    if (head==NULL)
    {
        printf("\nList is empty\n");
        return head;
    }
    if (pos<=0)
    {
        printf("\nInvalid position\n");
        return head;
    }
    if (pos==1)
    {
        cur=head;
        head=head->next;
        free(cur);
        return head;
    }
    if (pos<=count)
    {
        prev=NULL;
        cur=head;
        while (cur!=NULL && temp!=pos-1)
        {
            prev=cur;
            cur=cur->next;
            temp++;
        }
        prev->next=cur->next;
        free(cur);
        return head;
    }
    if (pos>count)
    {
        printf("\nInvalid Position\n");
        return head;
    }
}
int CountNodes(NODE head)
{
    int count=0;
    NODE cur=head;
    while (cur!=NULL)
    {
        cur=cur->next;
        count++;
    }
    return count;
}
NODE ReverseList(NODE head)
{
    NODE prev,cur,temp;
    if (head==NULL)
    {
        printf("\nList is empty\n");
        return head;
    }
    prev=NULL;
    cur=head;
    temp=NULL;
    while (cur!=NULL)
    {
        prev=cur;
        cur=cur->next;
        prev->next=temp;
        temp=prev;
    }
    head=temp;
    return head;
}
void SearchNode(NODE head,int toSearch)
{
    NODE cur;
    int flag=0;
    int position=1;
    cur=head;
    while (cur!=NULL)
    {
        if (cur->data==toSearch)
        {
            flag=1;
            break;
        }
        position++;
        cur=cur->next;
    }
    if (flag==1)
    {
        printf("\nElement %d found at position %d\n",toSearch,position);
    }
    else
    {
        printf("\n%d not found in the list\n",toSearch);
    }
}
