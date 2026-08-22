#include <bits/stdc++.h>

using namespace std;

long long isPrime(long long n){
    long long f =0;
    if(n<2) f =1;
    if(n !=2 && n%2 ==0){
        f=1;
    }
    else if(n != 3 && n%3 ==0) f = 1;

    else{
        for(long long i = 5; i *i <=n; i +=6){
            if(n%i==0 || n %(i+2) == 0){
                f = 1;
                break;
            }
        }
    }

    if(f==1) return false;
    else return true;
}



int main(){
    long long sum = 0;
    long long n = 2000000;
    for(long long i =0; i<n;i++){
        if(isPrime(i) == true){
            sum += i;
        }
    }
    cout << sum;
}