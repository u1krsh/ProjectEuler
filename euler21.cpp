#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int a = 1; a < 10000; a++) {
        int d1 = 1;

        for (int i = 2; i * i <= a; i++) {
            if (a % i == 0) {
                d1 += i;

                if (i != a / i)
                    d1 += a / i;
            }
        }

        if (d1 != a && d1 < 10000) {
            int d2 = 1;

            for (int i = 2; i * i <= d1; i++) {
                if (d1 % i == 0) {
                    d2 += i;

                    if (i != d1 / i)
                        d2 += d1 / i;
                }
            }

            if (d2 == a)
                sum += a;
        }
    }

    cout << sum << endl;

    return 0;
}