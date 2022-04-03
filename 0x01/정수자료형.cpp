#include<iostream>
using namespace std;

// 128번에 걸쳐 hi를 출력하는 함수
// Integer overflow 발생
void func1() {
  for (char s = 0; s < 128; s++) {
    cout << 'hi';
  }
}

// 50!을 61로 나눈 나머지를 반환하는 함수
int func2() {
  int r = 1;
  for (int i = 1; i <= 50; i++) {
    r = r * i % 61;
  }

  return r;
}

// 10의 10 거듭제곱을 1000000007로 나눈 나머지를 반환하는 함수
// Integer overflow 발생
int func3() {
  int a = 10;
  int mod = 1000000007;
  for (int i = 0; i < 10; i++) {
    a = 10 * a % mod;
  }

  return a;
}