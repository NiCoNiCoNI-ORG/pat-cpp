#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main() {
    int a, b;

    cin >> a;
    cin >> b;
    int c = a + b;
    bool flag = false;
    if (a + b == 0) {
        cout << 0;
    }
    if (c < 0) {
        c *= -1;
    }

    return 0;
}