#include <bits/stdc++.h>
using namespace std;


bool sus(string s1, string s2){


    if(s1.length() != s2.length()) return false;

    unordered_map<char,int> cnt1;
    unordered_map<char,int> cnt2;

    for(int i =0;i< s1.length();i++){
        cnt1[s1[i]]++;
        cnt2[s2[i]]++;
    }
    return cnt1 == cnt2;
}

int main(){
      string s1 ,s2;
    cin >> s1 >> s2;
    cout << sus(s1,s2);

}