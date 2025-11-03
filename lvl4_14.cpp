#include <iostream>
using namespace std;
int x;
int z;
int s;
int main(){
    cout << "Eded daxil edin: ";
    cin >> x;
    z = x;
    while(z>0){
        s = s * 10 + z % 10;
        z = z / 10;
    }
    if(s == x){
        cout << "Ededin tersi ozune beraberdir";
    }
    else{
        cout << "Ededin tersi ozune beraber deyil";
    }
}