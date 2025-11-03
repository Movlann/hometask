#include <iostream>
using namespace std;
int a;
int s = 0;
int main(){
    cout << "Eded daxil edin: ";
    cin >> a;
    for(int i = -a;i<=a;i++){
        if(i != 0){
            if(a % i == 0){
                s = s + 1;
            }
        }
    }
    cout << "Tam bolenlerin sayi: " << s;
}