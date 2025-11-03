#include <iostream>
using namespace std;
int z;
int main(){
    for(int n = 100;n <= 999;n++){
        int s = 0;
        z = n;
        while(n > 0){
            int y = z % 10;
            n = int (z / 10);
            s+=y;
        }
        if(s == 10){
            cout << z << endl;
        }
    }
    return 0;
}