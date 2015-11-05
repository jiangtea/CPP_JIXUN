#include <iostream>
using namespace std;
int main() {
   string s = "2013/12/31 10:25";
   int y, M, d, h, m;
   sscanf(s.c_str(), "%d/%d/%d %d:%d", &y, &M, &d, &h, &m);
   cout << s << endl;
   cout << y << "年" << M << "月" << d << "日" << h << "點" << m << "分" << endl;
}
