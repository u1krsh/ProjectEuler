#include <bits/stdc++.h>
using namespace std;

long long smallPos(){
    long long i = 0;
    bool found = false;

    while(!found){
        i++;
        found = true;
        for(int k = 1; k <= 20; k++){
            if(i % k != 0){
                found = false;
                break;  
            }
        }
    }
    return i;
}

int main(){
    cout << smallPos();
}