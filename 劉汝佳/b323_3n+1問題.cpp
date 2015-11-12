#include<iostream>
#include<fstream>
using namespace std;

int main() {
   ifstream cin("b323.in");
   //ofstream cout("b323.out");

   long long int n;
   while (cin >> n) {
      int count = 0;
      while (n > 1) {
         if (n % 2 == 1) {
            n = n * 3 + 1; // 變數在此會可能會爆炸。
         } else {
            n /= 2;
         }
         count++;
      }
      cout << count << endl;
   }
   return 0;
}
