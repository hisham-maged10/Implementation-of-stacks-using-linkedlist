#include <stdio.h>
#include <stdlib.h>
#define type int
typedef struct
{
    type data;
    node*next;
}node;
typedef struct
{
    node*top;
}stack;
node* newnode(int value)
{
    node*n=(node*)malloc(sizeof(node));
    n->data=value;
    n->next=NULL;
    return n;
}
void initializestack(stack*s)
{
    s->top=NULL;
}
void push(stack*s,int value)
{
    node *n=newnode(value);
    n->next=s->top;
    s->top=n;
}
type pop(stack*s)
{
    if(!isempty(s))
    {
    node*n=s->top;
    s->top=n->next;
    type value=n->data;
    free(n);
    return value;
    }
    else
    {
        printf("nothing to be popped!\n");
        return -1;
    }
}
int isemtpy(stack*s)
{
    if(s->top==NULL)
    {
        return 1;
    }
    else
        return 0;
}
type peak(stack*s)
{
    if(!isempty(s))
    {
        return s->top->data;
    }
    else
    {
        printf("Empty stack!\n");
        return -1;
    }
}
int size(stack*s)
{
    node*n=s->top;
    int counter=0;
    while(n)
    {
        count++;
        n=n->next;
    }
    return counter;
}
void display(stack*s)
{
    printf("[");
    if(!isempty(s))
    {
    node*n=s->top;
    while(n)
    {
        printf("%d ",n->data);
        n=n->next;
    }
    printf("]\n");
    }
    else
    {
        printf("The stack is empty!\n");
        exit(1);
    }
}
int main()
{
    printf("Hello world!\n");
    return 0;
}
