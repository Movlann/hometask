#include <iostream>
#include <cmath>
using namespace std;
int a;
int i = 1;
int s = 0;
int main(){
    cout << "Eded daxil edin: ";
    cin >> a;
    for(i;i <= a;i++){
        if(i % 2 == 0){
            s = s + pow(i,2);
        }
    }
    cout << "Cem: " << s;
}