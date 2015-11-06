#include<iostream>
#include<sstream>
using namespace std;

int main() {
   string text = "Tommy, Tommy Chen , 1991";
   stringstream ss(text);
   string sub_str;

   while (getline(ss, sub_str, ',')) {
      cout << sub_str << endl;
   }
   return 0;
}
