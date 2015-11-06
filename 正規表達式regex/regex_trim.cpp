#include<iostream>
#include <regex>
using namespace std;

string ltrim(string str) {
   return regex_replace(str, regex("^\\s+"), string(""));
}

string rtrim(string str) {
   return regex_replace(str, regex("\\s+$"), string(""));
}

string trim(string str) {
   return ltrim(rtrim(str));
}
int main() {
   string s1 = " \t hello world \n";
   string s2 = "\t hello world\n";
   string s3 = "\t hello world \r\n";
   cout << trim(s1) << endl;
   cout << trim(s2) << endl;
   cout << trim(s3) << endl;
   return 0;
}
