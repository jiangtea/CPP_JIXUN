#include<iostream>
using namespace std;

int main() {
   double x = 0.2;

   while (x <= 5) {

      x += 0.05;

      printf("%.2lf %.1lf\n", x, x);

   }
   return 0;
}
