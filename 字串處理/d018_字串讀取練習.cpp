#include<iostream>
#include<sstream>
using namespace std;

int main() {
   string line;
   while (getline(cin, line)) {
      stringstream ss(line);
      int n = 0;
      char c;
      double d = 0;
      double sum = 0;
      while (ss >> n >> c >> d) { //讀取 1:3.02
         if (n % 2 == 1) {
            sum += d;
         } else {
            sum -= d;
         }
      }
      cout << sum << endl;
   }
   return 0;
}
