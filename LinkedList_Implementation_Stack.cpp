/*#include <iostream>
using namespace std;
class Node { // user defined data type
public:
  int value;
  Node *next;
  Node(int value) {
    this->value = value;
    this->next = NULL;
  }
};
class Stack { // user defined data structure
public:
  Node *head;
  int size;
  Stack() {
    head = NULL;
    size = 0;
  }
  void push(int val) {
    Node *temp = new Node(val);
    temp->next = head;
    head = temp;
  }
  void pop() {
    if (head == NULL) {
      cout << "Stack is Empty ! " << endl;
      return;
    } else {
      head = head->next;
      size--;
    }
  }
  int top() {
    if (head == NULL) {
      cout << "Stack is Empty ! " << endl;
      return -1;
    } else {
      head->next;
    }
  }
  void print(Node *temp) {
    if (temp == NULL)
      return;
    print(temp->next);
    cout << temp->value;
  }
  void display() {
    Node *temp = head;
    /*while (temp != NULL) {
      cout << temp->value;
      temp = temp->next;
    }
    cout<<endl;
    print(temp);
    cout << endl;
  }
};

int main() {
  Stack st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  cout << st.size;
  cout << endl;
  cout << st.top();
  cout << endl;
  st.pop();
  cout << endl;
  cout << st.size;
  cout << endl;
  cout << st.top();
  cout << endl;
}*/
#include <iostream>
using namespace std;

class Node {
public:
  int value;
  Node *next;
  Node(int value) : value(value), next(NULL) {}
};

class Stack {
public:
  Node *head;
  int size;
  Stack() : head(NULL), size(0) {}

  void push(int val) {
    Node *temp = new Node(val);
    temp->next = head;
    head = temp;
    size++; // Increment size when pushing
  }

  void pop() {
    if (head == NULL) {
      cout << "Stack is Empty ! " << endl;
    } else {
      Node *temp = head;
      head = head->next;
      delete temp; // Free the removed node
      size--; // Decrement size when popping
    }
  }

  int top() {
    if (head == NULL) {
      cout << "Stack is Empty ! " << endl;
      return -1;
    } else {
      return head->value; // Return the value of the top element
    }
  }

  void display() {
    Node *temp = head;
    while (temp != NULL) {
      cout << temp->value << " ";
      temp = temp->next;
    }
    cout << endl;
  }
};

int main() {
  Stack st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  cout << "Stack size: " << st.size << endl;
  cout << "Top element: " << st.top() << endl;
  st.pop();
  cout << "After pop, size: " << st.size << endl;
  cout << "Top element: " << st.top() << endl;
  cout << "Stack elements: ";
  st.display();
}
