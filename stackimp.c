#include<stdio.h>
#include<stdlib.h>

#define max_size 20
struct stack
{
    char data[max_size];
    int top;
}s;

void initStack(struct stack *s)
{
    s->top=-1;
}

void push(struct stack *s, int x)
{
    if (s->top==(max_size-1))
    {
        printf("Overflow!\n");
    } else
    {
        s->top++;
        s->data[s->top]=x;
    }
}

int pop(struct stack *s)
{
    int a;

    if (s->top==-1)
    {
        printf("Underflow!\n");
    } else
    {
        a=s->data[s->top];
        s->top--;
        return(a);
    }
}

void display(struct stack *s)
{
    for (int i = s->top; i >= 0; i--)
    {
        printf("\n%d  ",s->data[i]);
    }
}

void main()
{
    int opt;
    char a,x;

    initStack(&s);

    X:printf("\nEnter the function to be undertaken:\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
    scanf("%d",&opt);
    switch (opt)
    {
        case 1: printf("Enter Element to be pushed\n");
                scanf("%d",&x);
                push(&s,x);
                goto X;
        case 2: a=pop(&s);
                printf("%c",a);
                goto X;
        case 3: display(&s);
                goto X;
        case 4: printf("Thank You!");
                exit(0);
        default: printf("Invalid Option\n");
                break;
    }
}
