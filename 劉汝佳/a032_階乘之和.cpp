#include<iostream>
#include<fstream>
using namespace std;

/**
 * 每次都進行 MOD
 */
void solution1() {
//   ifstream cin("a032.in");
//   ofstream cout("a032.ans");
   int n;
   while (cin >> n) {
      n = n >= 25 ? 25 : n;
      long long int ans = 0;
      for (int i = 1; i <= n; i++) {
         int fact = 1;
         for (int j = 1; j <= i; j++) {
            fact = fact * j % 1000000;
         }
         ans = (ans + fact) % 1000000;
      }
      cout << ans << endl;
   }
}

int main() {

   solution1();
   return 0;
}
