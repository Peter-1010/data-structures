#include <iostream>

using namespace std;

  const int MAX_SIZE = 100;

class stack
{
  int top;
  int item[MAX_SIZE];

public:

  stack():top (-1) {}

  void push (int Element)
  {
    if (top >= MAX_SIZE - 1) {
      cout << "Stack full on push";
    } else {
      top++;
      item[top] = Element;
    }
  }

  bool isEmpty()
  {
    return top < 0;
  }

  void pop()
  {
    if (isEmpty()) {
      cout << "Stack empty on pop";
    } else {
      top--;
    }
  }

  void pop(int&Element)
  {
    if (isEmpty())
    {
      cout << "Stack empty on pop";
    } else {
      Element = item[top];
      top--;
    }
  }

  void getTop(int&stackTop)
  {
    if (isEmpty())
    {
      cout << "Stack empty on getTop";
    } else {
      stackTop = item[top];
      cout << "Stack Top = " << stackTop << endl;
    }
  }

  void print()
  {
    cout << "[";
    for (int i = top; i >= 0; i--) {
      cout << item[i] << " ";
    }
    cout << "]\n";
  }

};

int main() {

  stack s;

  s.push(100);
  s.push(200);
  s.push(300);
  s.push(600);

  s.pop();

  s.push(400);
  s.push(500);

  s.print();

  int x = 0;
  s.getTop(x);

  return 0;

}