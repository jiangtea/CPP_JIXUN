#include<iostream>
#include <limits.h>
#include <limits>
using namespace std;

int main() {
   cout << "變數類型為 int 的最大值=" << INT_MAX << endl;
   cout << "變數類型為 unsigned int 的最大值= " << UINT_MAX << endl;
   cout << "long=" << LONG_MAX << endl;
   cout << "numeric_limits<int>::max()=" << numeric_limits<int>::max() << endl;
   cout << "numeric_limits<long long int>::max()="
         << numeric_limits<long long int>::max() << endl;
   cout << "numeric_limits<float>::max()=" << numeric_limits<float>::max()
         << endl;
   cout << "numeric_limits<double>::max()=" << numeric_limits<double>::max()
         << endl;
   return 0;
}
