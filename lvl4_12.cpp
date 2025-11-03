#include <iostream>
using namespace std;
int n;
int s = 0;
int z;
int x;
int main(){
    cout << "Eded daxil edin: ";
    cin >> n;
    z = n;
    for(int x = 1;x<n;x++){
        if(n % x == 0){
            s = s + x;
        }
        }
        if(s == z){
            cout << "Mukemmel ededdir";
        }
        else{
            cout << "Mukemmel eded deyil";
        }
    }