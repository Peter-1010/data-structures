#include <iostream>

using namespace std;

template<class t>

class stack
{
    struct node{
        t item;
        node *next;      
    };
    node *top, *cur;

public:
    stack () {
        top = NULL;
    }

    void push(t newItem)
    {
        node *newItemPtr = new node;    
        if (newItemPtr == NULL)
        {
            cout << "Stack push cannot allocate memory";
        } else {
            newItemPtr->item = newItem;
            newItemPtr->next = top;
            top = newItemPtr;
        }
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    void pop()
    {
        if(isEmpty())
        {
            cout << "The stack is empty on pop";
        } else {
            node *temp = top;
            top = top->next;
            temp = temp->next = NULL;
            delete temp;
        }
    }

    void pop(t&stackTop)
    {
        if(isEmpty())
        {
            cout << "The stack is empty on pop";
        } else {
            stackTop = top->item;
            node *temp = top;
            top = top->next;
            temp = temp->next = NULL;
            delete temp;
        }
    }

    void getTop(t&stackTop)
    {
        if(isEmpty())
        {
            cout << "The stack is empty on get top";
        } else {
            stackTop = top->item;
        }
    }

    void display()
    {
        cur = top;

        cout << "\n Items in stack : \n[ ";

        while (cur!=NULL)
        {
            cout << cur->item << " ";
            cur = cur->next;
        }

        cout << "]\n";
    }
};



int main(){

    stack<int>s;
    s.push(100);
    s.push(200);
    s.push(300);
    s.pop();

    s.display();

    int x = 0;
    s.getTop(x);
    cout << "\nTop value = " << x;

    return 0;
}