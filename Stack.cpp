#include <iostream>

using namespace std;

struct Stack
{
    int cap;
    int top;
    int *arr;
} * stk;

bool isfull()
{
    return (stk->top == stk->cap - 1); //* if top and capacity are equal then stack is full
}

bool isempty()
{
    return (stk->top == -1);
}

void create(int cap)
{

    stk = new Stack;
    stk->cap = cap; //* Stack Capacity
    stk->top = -1;  //* Stack top
    stk->arr = new int[cap];
}

void push()
{
    if (!isfull())
    {
        int data;
        cout << "Enter the data:";
        cin >> data;
        stk->top++;
        stk->arr[stk->top] = data;
        return;
    }
    cout << "Stack is Full" << endl;
    system("pause");
}

void pop()
{

    if (!isempty())
    {
        int item = 0;
        item = stk->arr[stk->top];
        stk->top--;
        cout << "Item Deleted : " << item << endl;
        return;
    }
    cout << "Stack is empty!!" << endl;
}

void traverse()
{
    if (!isempty())
    {
        cout << "Stack item:" << endl;
        for (int i = 0; i <= stk->top; i++)
        {
            cout << (i + 1) << " . " << stk->arr[i] << endl;
        }
        return;
    }
    cout << "Stack is Empty!!" << endl;
}

void fre()
{
    delete stk;
}

int menu()
{
    system("cls");
    int op;
    cout << "|--------------|" << endl;
    cout << "|1. Add Item   |" << endl;
    cout << "|2. Print Items|" << endl;
    cout << "|3. Delete Item|" << endl;
    cout << "|4. Exit       |" << endl;
    cout << "|--------------|" << endl;
    cout << "Enter your option >";
    cin >> op;
    return (op);
}
int main()
{
    int size;
    cout << "Enter the size of Stack :";
    cin >> size;
    create(size);
loop:
    while (true)
    {
        switch (menu())
        {
        case 1:
            push();
            break;

        case 2:
            traverse();
            system("Pause");
            break;

        case 3:
            pop();
            system("Pause");
            break;

        case 4:
            fre();
            exit(0);
            break;

        default:
            goto loop;
        }
    }
}
