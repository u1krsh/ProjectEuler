#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int x) {
    if (x < 0) return false;           
    if (x != 0 && x % 10 == 0) return false; 

    long long original = x;
    long long reversed = 0;

    while (x > 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    return original == reversed;
}

int largestPallidrome(){
    long long x = 0;
    for(int i = 100; i<1000;i++){
        for(int j = 100;j<1000;j++){
            if(isPalindrome(i*j) == true){
                x = max(x,(long long)(i*j));
            }
        }
    }
    return x;
}



int main(){
    cout << largestPallidrome();
}