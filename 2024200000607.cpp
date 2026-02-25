#include<bits/stdc++.h>
using namespace std;

struct Stack
{
    int top;
    int stack_size;
    int * items;
};

Stack * createStack(int capacity)
{
    Stack * pt = new Stack();
    pt->stack_size = capacity;
    pt->top = -1;
    pt->items = new int[capacity];
    return pt;
}

int isEmpty(Stack * pt)
{
    if(pt->top == -1)
        return 1;
    return 0;
}

int isFull(Stack *pt)
{
    if(pt->top == pt->stack_size - 1)
        return 1;
    return 0;
}

void push(Stack * pt, int data)
{
    if(isFull(pt))
    {
        cout<<"Stack is Full"<<endl;
        return;
    }
    pt->top++;
    pt->items[pt->top] = data;
}

int pop(Stack * pt)
{
    if(isEmpty(pt))
    {
        cout<<"Stack is Empty"<<endl;
        return -1;
    }
    int data = pt->items[pt->top];
    pt->top--;
    return data;
}

int peek(Stack * pt)
{
    if(isEmpty(pt))
        return -1;
    return pt->items[pt->top];
}

struct Queue
{
    Stack * s1;
    Stack * s2;
    int capacity;
};

Queue * createQueue(int capacity)
{
    Queue * q = new Queue();
    q->capacity = capacity;
    q->s1 = createStack(capacity);
    q->s2 = createStack(capacity);
    return q;
}

void enqueue(Queue * q, int data)
{
    if(isFull(q->s1))
    {
        cout<<"Queue is Full"<<endl;
        return;
    }
    push(q->s1, data);
    cout<<"Enqueued "<<data<<endl;
}

void dequeue(Queue * q)
{
    if(isEmpty(q->s1) && isEmpty(q->s2))
    {
        cout<<"Queue is Empty"<<endl;
        return;
    }

    if(isEmpty(q->s2))
    {
        while(!isEmpty(q->s1))
        {
            int x = pop(q->s1);
            push(q->s2, x);
        }
    }

    int removed = pop(q->s2);
    cout<<"Dequeued "<<removed<<endl;
}

int front(Queue * q)
{
    if(isEmpty(q->s1) && isEmpty(q->s2))
    {
        cout<<"Queue is Empty"<<endl;
        return -1;
    }

    if(isEmpty(q->s2))
    {
        while(!isEmpty(q->s1))
        {
            int x = pop(q->s1);
            push(q->s2, x);
        }
    }

    return peek(q->s2);
}

int main()
{
    Queue * q = createQueue(5);

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);

    cout<<"Front: "<<front(q)<<endl;

    dequeue(q);
    dequeue(q);

    enqueue(q, 40);

    cout<<"Front: "<<front(q)<<endl;

    return 0;
}
