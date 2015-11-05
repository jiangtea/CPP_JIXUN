#include<iostream>
#include<sstream>
using namespace std;

int main() {
   string line;
   while (getline(cin, line)) {
      stringstream ss(line);
      string data;
      int i = 0;
      double d = 0;
      double sum = 0;
      while (ss >> data) {
         sscanf(data.c_str(), "%d:%lf", &i, &d);
         if (i % 2 == 1) {
            sum += d;
         } else {
            sum -= d;
         }
      }
      cout << sum << endl;
   }
   return 0;
}
