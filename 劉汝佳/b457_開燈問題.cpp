#include<iostream>
#include<fstream>
using namespace std;

int main() {
   ifstream cin("b457.in");

   int n, k;
   while (cin >> n >> k) {
      int a[1000] = { 0 };
//      memset(a, 0, sizeof(int) * 1000); //設定為 0
      for (int kk = 1; kk <= k; kk++) {
         for (int nn = 1; nn <= n; nn++) {
            if (nn % kk == 0) {
               a[nn] = !a[nn];
            }
         }
      }
      bool first = true;
      for (int i = 1; i <= n; i++) {
         if (a[i]) {
            if (first) {
               first = false;
            } else {
               cout << " ";
            }
            cout << i;
         }
      }
      cout << endl;
   }
   return 0;
}
