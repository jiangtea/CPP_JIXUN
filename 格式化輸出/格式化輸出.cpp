#include <cstdio>
#include <iostream>
using namespace std;

int main() {
   char s[100];
   sprintf(s, "%d", 222220202); //輸出十進位數
   cout << s << endl;
   sprintf(s, "%f", 12.25); //以最多位數顯示
   cout << s << endl;
   sprintf(s, "%lf", 12.25); //for double
   cout << s << endl;
   sprintf(s, "%g", 12.25); //以剛好的位數顯示
   cout << s << endl;
   sprintf(s, "%e", 12.25); //以科學記號表示
   cout << s << endl;
   sprintf(s, "%5d", 12); //預留寬度5並靠右對齊
   cout << s << endl;
   sprintf(s, "%05d", 12); //預留寬度左側補0 00012
   cout << s << endl;
   sprintf(s, "%5.4f", 12.25); // 12.2500
   cout << s << endl;
   sprintf(s, "%.3f", 12.25678); //小數點下3位
   cout << s << endl;
   sprintf(s, "%x", 10); //顯示為16進位
   cout << s << endl;
   sprintf(s, "%s", "Hello");  //輸出字串
   cout << s << endl;
   sprintf(s, "Say %s to %d person", "Hello", 5);
   cout << s << endl;
   printf("Characters: %c %c \n", 'a', 65);
   printf("Decimals: %d %ld\n", 1977, 650000L);
   printf("Preceding with blanks: %10d \n", 1977);
   printf("Preceding with zeros: %010d \n", 1977);
   printf("Some different radixes: %d %x %o %#x %#o \n", 100, 100, 100, 100,
         100);
   printf("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
   printf("Width trick: %*d \n", 5, 10);
   printf("%s \n", "A string");
   cout << hex << 10 << "!!" << endl;  // 16進位
}
