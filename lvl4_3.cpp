#include <iostream>
using namespace std;
int N;
int main(){
    cout << "Eded daxil edin: ";
    cin >> N;
    for(int i = 2;i<N;i++){
        int x = 0;
        for(int j = 2;j<=i;j++){
            if(i % j == 0){
                x = x + 1;
            }
        }
        if(x == 1){
            cout << i << endl;
        }
    }
}