#include <bits/stdc++.h>

using namespace std;

int isPrime(int n){
    int f =0;
    if(n<2) f =1;
    if(n !=2 && n%2 ==0){
        f=1;
    }
    else if(n != 3 && n%3 ==0) f = 1;

    else{
        for(int i = 5; i *i <=n; i +=6){
            if(n%i==0 || n %(i+2) == 0){
                f = 1;
                break;
            }
        }
    }

    if(f==1) return false;
    else return true;
}


int somePrime(int n){
    int cnt = 0;
    int i = 1;
    while(cnt < n){
        i++;
        if(isPrime(i)) cnt++;
    }
    return i;
}

int main(){
    cout << somePrime(10001);  
}