#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n = 1000000;
    long long maxCnt = 0;
    long long best = 0;
    for(long long i = 13; i<n;i++){
        long long x = i;
        long long cnt = 1;
        while(x != 1){
            if((x & 1) == 1){
                x = 3*x +1;
            }
            else{
                x= x/2;
            }
            cnt++;
        }

        if(cnt>maxCnt){
            maxCnt = cnt;
            best = i;
        }        
    }
    cout << best;


}