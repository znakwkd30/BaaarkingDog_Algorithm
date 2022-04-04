#include<iostream>
#include<vector>
using namespace std;

void func(int a) {
  a = 5;
}

// 결과 0
int main(void) {
  int t = 0;
  func(t);
  cout << t;
}

void func2(int arr[]) {
  arr[0] = 10;
}

// 결과 10
int main(void) {
  int arr[3] = {1, 2, 3};
  func2(arr);
  cout << arr[0];
}

struct pt {
  int x,y;
};

void func3(pt a) {
  a.x = 10;
}

// 결과 0
int main(void) {
  pt tmp = {0, 0};
  func3(tmp);
  cout << tmp.x;
}

// 동작 X
void swap1(int a, int b) {
  int tmp = a;
  a = b;
  b = tmp;
}

// 동작 O
void swap2(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

// 동작 O
void swap3(int& a, int& b) {
  int tmp = a;
  a = b;
  b = tmp;
}

void func4(vector<int> v) {
  v[10] = 7;
}

// 결과 0
int main(void) {
  vector<int> v(100);
  func4(v);
  cout << v[10];
}

// 시간복잡도 O(N)
// vecotr를 복사하는 과정때문
bool cmp1(vector<int> v1, vector<int> v2, int idx) {
  return v1[idx] > v2[idx];
}

// 시간복잡도 O(1)
bool cmp2(vector<int>& v1, vector<int>& v2, int idx) {
  return v1[idx] > v2[idx];
}