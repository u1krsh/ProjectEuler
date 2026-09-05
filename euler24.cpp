#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> digits = {0,1,2,3,4,5,6,7,8,9};
    long long fact[10];
    fact[0] = 1;
    for (int i = 1; i < 10; i++) fact[i] = fact[i-1] * i;

    long long index = 999999; 
    string result;

    for (int i = 9; i >= 0; i--) {
        long long f = fact[i]; 
        int pos = (int)(index / f);
        index %= f;
        result += ('0' + digits[pos]);
        digits.erase(digits.begin() + pos);
    }

    cout << result << endl;
    return 0;
}