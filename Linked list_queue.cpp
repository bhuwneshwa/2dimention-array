#include<stdio.h>
#include<stdlib.h>
struct node
{
    int item;
    struct node *next;
};

void push(struct node **s,int data)
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    n->next=*s;
    *s=n;
}

void pop(struct node **s)
{
    struct node *t1,*t2;
    if(*s==NULL)
        printf("List is empty");
    else
    {
        t1=*s;
        t2=NULL;
        while(t1->next!=NULL)
        {
            t2=t1;
            t1=t1->next;
        }
        if(t2==NULL)
            *s=t2;
        else
            t2->next=NULL;
          free(t1);
    }
}

void viewNode(struct node *s)
{
    struct node *v;
    if(s==NULL)
        printf("Unavailable");
    else
    {
        v=s;
        while(v->next!=NULL || v->next==NULL)
        {
            printf("\n%d",v->item);
            v=v->next;
        }
    }
}

main()
{
    struct node *start=NULL;
    push(&start,40);
    push(&start,50);
    pop(&start);
    viewNode(start);
}
