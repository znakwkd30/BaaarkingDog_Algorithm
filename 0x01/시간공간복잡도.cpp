#include <iostream>
using namespace std;

// 시간복잡도 O(N)
int func1(int x) {
  int res = 0;
  for (int i = 0; i < x; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      res += i;
    }
  }

  return res;
}

// 시간복잡도 O(N^2)
int func2(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] + arr[j] == 100) {
        return 1;
      }
    }
  }

  return 0;
}

// 시간복잡도 O(√N)
int func3(int n) {
  for (int i = 1; i * i <= n; i++) {
    if (i * i == n) {
      return 1;
    }
  }

  return 0;
}

// 시간복잡도 O(lg N)
int func4(int n) {
  int res;
  for (int i = 2; i * 2 <= n; i *= 2) {
    res *= i;
  }

  return res * 2;
}