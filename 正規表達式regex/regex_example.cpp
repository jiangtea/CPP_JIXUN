#include<iostream>
#include<regex>
using namespace std;

int main() {
   regex reg("son[A-Za-z]*");
   string input;
   getline(cin, input);
   if (regex_match(input, reg)) {
      cout << "Match!" << endl;
   } else {
      cout << "Not Match!" << endl;
   }

   return 0;
}
