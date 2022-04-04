#include<iostream>
#include<vector>
using namespace std;

// 공백이 포함된 문자열을 받아야 할 때 단순히 scanf나 cin은 사용할 수 없음
int main(void) {
  string s;
  getline(cin, s);
  cout << s;
}

// C stream과 C++ stream sync를 끊어주는 명령어
int main(void) {
  ios::sync_with_stdio(0);
}

// cin 명령어를 수행하기전에 cout 버퍼를 비우지 않도록 하는 명령어
int main(void) {
  cin.tie(0);
}

// endl은 절대 사용 X