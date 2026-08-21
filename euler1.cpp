#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int t3 = 0, t5 =0, t15 =0;

    t3 = (n-1)/3;
    t5 = (n-1)/5;
    t15 = (n-1)/15;

    int s3 = 3 * t3*(t3+1)/2;
    int s5 = 5 * t5*(t5+1)/2;
    int s15 = 15 * t15*(t15+1)/2;

    cout << s3+s5-s15;
}