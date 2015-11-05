#include <iostream>
using namespace std;
int main() {
   int n = 5;
   cout << (n == 3) << endl;
   cout << (n != 3) << endl;
   cout << (n >= 3) << endl;
   cout << (n <= 3) << endl;
   cout << (n > 0 && n < 5) << endl;
   cout << (n > 0 || n < 5) << endl;
   cout << (!n) << endl;
   cout << (n ^ 3) << endl; // 0101 XOR 0011 => 0110
}
