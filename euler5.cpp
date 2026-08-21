#include <bits/stdc++.h>
using namespace std;
int smallPos(){
    int flag =0;
    int i = 0;
    while(flag == 0){
        i++;
        for(int k =1 ;k<21;k++){
            if(i%k != 0){
                flag = 1;
            }
            return i;
            
        }
    }
}




int main(){

   cout << smallPos();

}