#include<stack>
#include<iostream>
using namespace std;

void printStack(stack<char> mystack) {
   cout << "stack size= " << mystack.size() << endl;
   while (!mystack.empty()) {
      cout << " -> " << mystack.top();
      mystack.pop();
   }
   cout << endl;
}

int main() {
   stack<char> mystack;
   mystack.push('A');
   mystack.push('B');
   mystack.push('C');
   printStack(mystack);
   return 0;
}

