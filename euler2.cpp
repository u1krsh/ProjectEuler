#include <bits/stdc++.h>
using namespace std;

long long fiboSum(long long limit){
    long long sum = 0;
    long long a = 1, b = 2;

    while (a <= limit){
        if (a % 2 == 0) sum += a;
        long long c = a + b;
        a = b;
        b = c;
    }
    return sum;
}

int main(){
    cout << fiboSum(4000000);
}