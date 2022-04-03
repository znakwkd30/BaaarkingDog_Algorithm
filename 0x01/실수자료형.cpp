#include<iostream>
#include<math.h>
using namespace std;

// 1. 실수는 저장/연산 과정에서 반드시 오차가 발생할 수 밖에 없다.
// 결과는 no no ..
int main(void) {
  if (0.1 + 0.1 + 0.1 == 0.3) {
    cout << 'true';
  } else {
    cout << 'no no ..';
  }
}

// 2. double에 long long 범위의 정수를 함부로 담으면 안된다.
// 결과는 wow..
int main(void) {
  double a = 1000000000000000001;
  double b = 1000000000000000000;

  if (a == b) {
    cout << 'wow..';
  } else {
    cout << 'a != b';
  }
}

// 3. 실수를 비교할 때는 등호를 사용하면 안된다.
// 결과는 same 2
int main(void) {
  double a = 0.1 + 0.1 + 0.1;
  double b = 0.3;

  if (a == b) {
    cout << 'same 1';
  }

  if (abs(a - b) < 1e-12) {
    cout << 'same 2';
  }
}