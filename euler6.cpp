#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;


    int sumNat = x *(x+1)/2;
    sumNat = sumNat * sumNat;

    int sumSqNat = (x*(x+1)*(2*x+1))/6;

    cout << sumNat-sumSqNat;


}