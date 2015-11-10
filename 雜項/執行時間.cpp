#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;

int main() {

   long long int n, count = 0;
   while (scanf("%lld", &n) == 1) {
      //while (cin >> n) {
      count++;
   }

   cout << "count=" << count << endl;

   cout << "time: " << (double) clock() / CLOCKS_PER_SEC << "s" << endl;

}
