#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int a = 1; a < 1000; a++) {
        for (int b = a + 1; b < 1000 - a; b++) {
            int c = 1000 - a - b;
            if (c > b && (long long)a*a + (long long)b*b == (long long)c*c) {
                cout << "a=" << a << ", b=" << b << ", c=" << c << endl;
                cout << "Product abc = " << (long long)a * b * c << endl;
                return 0;
            }
        }
    }
    return 0;
}