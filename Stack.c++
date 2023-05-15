#include <iostream>

using namespace std;

const int MAX_SIZE = 100;
template <class t>

class stack
{
  int top;
  t item[MAX_SIZE];

public:

  stack():top (-1) {}

  void push (t Element)
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

  void pop(t&Element)
  {
    if (isEmpty())
    {
      cout << "Stack empty on pop";
    } else {
      Element = item[top];
      top--;
    }
  }

  void getTop(t&stackTop)
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

  stack<int>s;

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