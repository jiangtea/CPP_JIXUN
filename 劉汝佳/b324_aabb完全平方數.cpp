#include<iostream>
#include<cmath>
using namespace std;

/**
 * 進行 sqrt 要注意浮點誤差的問題。
 */
void solution1() {
   int n;
   double m;
   for (int a = 1; a <= 9; a++) {
      for (int b = 0; b <= 9; b++) {
         n = a * 1100 + b * 11;
         m = sqrt(n);
         if (floor(m + 0.5) == m) {
            cout << n << endl;
         }
      }
   }
}

/**
 * 避免使用 sqrt 改採平方處理。
 * 使用 continue, break;
 */
void solution2() {
   int n, aa, bb;
   for (int x = 1;; x++) {
      n = x * x;
      if (n < 1000)
         continue;
      if (n > 9999)
         break;
      aa = n / 100;
      bb = n % 100;
      if (aa / 10 == aa % 10 && bb / 10 == bb % 10) {
         cout << n << endl;
      }
   }
}

int main() {
   //solution1();
   solution2();
   return 0;
}
