#include <cstdio>
#include <iostream>
#include <sstream>
#include <vector>
#include<string>
#include<cstring>
using namespace std;

int main() {
   printf("Characters: %c %c \n", 'a', 65);
   printf("Decimals: %d %lld\n", 1977, 650000LL);
   printf("空格填充10字元: %10d \n", 1977);
   printf("0填充10字元: %010d \n", 1977);
   printf("Some different radixes: %d %x %o %#x %#o \n", 100, 100, 100, 100,
         100);
   printf("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
   printf("Width trick: %*d \n", 5, 10);
   printf("%s \n", "A string");

   char s[100] = "test judge";

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

   printf("Say %s to %d person.\n", "hi", 5);
   string cheer = "cheer";
   printf("Say %s to %d person.\n", cheer.c_str(), 5);

   char hello[100] = "hello";
   sprintf(s, "Say %s to %d person.", hello, 5);
   cout << s << endl;
   string sint = "1234";

   cout << "stoi(string to int)=" << stoi(sint) << endl;
   string sfloat = "123.4";
   cout << "stoi(string to float)=" << stof(sfloat) << endl;

   //cout << hex << 10 << "!!" << endl;  // 16進位

//   string weight;
//   char c;
//   double d;
//   // 鍵盤輸入 weight:62.6
//   cin >> weight >> c >> d;
//   cout << weight << " " << d;

   char w[100];
   char ch;
   double num = 0;
   // 鍵盤輸入weight:62.6
   // cin >> bookname >> ch >> price; // 無法正確讀入
   scanf("%s:%lf", w, &num);

   cout << w << "---" << num << endl;

   string text = "Tommy,Tommy Chen,1991";
   stringstream ss(text);
   vector<string> strings;
   string sub_str;
   while (getline(ss, sub_str, ',')) {
      strings.push_back(sub_str);
   }

   for (string a : strings) { // c++11 語法
      cout << a << endl;
   }

}
