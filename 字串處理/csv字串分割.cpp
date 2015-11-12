#include<iostream>
#include<sstream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

/**
 * split 回傳 vector
 */
vector<string> split(string s, char delimiter) {
   stringstream ss(s);
   vector<string> vs;
   string sub_str;
   while (getline(ss, sub_str, delimiter)) {
      vs.push_back(sub_str);
   }
   return vs;
}

/**
 * trim
 */
string trim(string s) {
   s.erase(0, s.find_first_not_of(" \n\r\t")); // ltrim
   s.erase(s.find_last_not_of(" \n\r\t") + 1); // rtrim
   return s;
}

int main() {
   ifstream cin("csv.in");
   string s;
   while (getline(cin, s)) {
      for (string vs : split(s, ',')) {
         cout << trim(vs) << endl;
      }
   }

   return 0;
}
