#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n <= 1) return false;
    if (n <= 3) return true;          
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; (long long)i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
bool isRightTruncatable(long long n) {
    while (n > 0) {
        if (!isPrime(n)) return false;
        n /= 10;
    }
    return true;
}

bool isLeftTruncatable(long long n) {
    string s = to_string(n);
    for (int i = 0; i < (int)s.size(); i++) {
        long long val = stoll(s.substr(i));
        if (!isPrime(val)) return false;
    }
    return true;
}

int main() {
    int cnt = 0;
    long long sum = 0;
    long long i = 11;  

    while (cnt < 11) {
        if (isPrime(i) && isRightTruncatable(i) && isLeftTruncatable(i)) {
            sum += i;
            cnt++;
        }
        i += 2; 
    }

    cout << sum << endl;
    return 0;
}