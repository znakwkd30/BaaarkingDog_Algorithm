#include<iostream>
using namespace std;

int main() {
    int a, b, x[10000];
    cin >> a >> b;

    for (int i = 0; i < a; i++) {
        cin >> x[i];
    }

    for (int i = 0; i < a; i++) {
        if (x[i] < b) {
            cout << x[i] << ' ';
        }
    }

    return 0;
}