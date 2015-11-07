#include<iostream>
#include<vector>
using namespace std;

int main() {
   vector<int> vi;
   vi.push_back(1);
   vi.push_back(2);
   vi.push_back(3);
   vi.begin();
   vi.end();
   vi.size(); //取得 vector 目前持有的元素個數。
   vi.capacity(); //取得 vector 目前可容納的最大元素個數。
   vi.at(2); //第三個元素
   vi[2]; // 陣列形式的寫法(可能越界)
   vi.push_back(2);
   vi.insert(1, 3); //在某一位址插入元素
   //v1.assign(v.begin(), v.begin() + 5); // 複製 v 前5個元素到 v1
   int array[100] = { 0 };
   //v1.assign(array, array + 5); // 複製 array 前5個元素到 v1
   vi.back(); // 查看最後一個元素
   vi.erase(vi.begin());
   //刪除某一位址的元素
   return 0;
}
