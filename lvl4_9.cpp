#include <iostream>
using namespace std;
int n;
int s = 0;
int x;
int main (){
    for(n = 1;n<=1000;n++){
        int m = n;
        while(m>0){
            x = m % 10;
            s = s * 10 + x;
            m = m / 10;
        }
        if(n==s){
            cout << n << endl;
        }
    }
}