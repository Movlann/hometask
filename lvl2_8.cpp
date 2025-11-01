#include <iostream>
using namespace std;
int il;
int main(){
    cout << "Il daxil edin: ";
    cin >> il;
    if((il % 4 == 0 && il % 100 != 0) || il % 400 == 0){
        cout << "Bu il artiq ildir";
    }
    else{
        cout << "Bu il normal ildir";
    }
}