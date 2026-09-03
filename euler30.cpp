#include <bits/stdc++.h>
using namespace std;

int fifthPowerDigitSum(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit * digit * digit * digit;
        n /= 10;
    }
    return sum;
}

int main(){
    // Upper bound: find where d * 9^5 stops exceeding a d-digit number.
    // 6 * 9^5 = 354294 (6 digits) -> still valid upper bound
    // 7 * 9^5 = 413343 (6 digits) -> a 7-digit number can never be reached, so cap at 6 digits
    int upperBound = 6 * (int)pow(9, 5); // 354294

    long long total = 0;
    for (int i = 2; i <= upperBound; i++) { // start at 2 since 1 = 1^5 is excluded
        if (i == fifthPowerDigitSum(i)) {
            total += i;
        }
    }

    cout << total << endl;
    return 0;
}