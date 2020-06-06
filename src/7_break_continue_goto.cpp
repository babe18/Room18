#include <iostream> 
using namespace std; 

int main() { 

BEGIN: 
    int input = 0; 
    cout << "輸入一數："; 
    cin >> input; 

    if(input == 0) {
        goto ERROR; 
    }
    cout << "100 / " << input 
         << " = " << 100.0 / input 
         << endl; 

    return 0; 

ERROR: 
    cout << "除數不可為 0" << endl; 
    goto BEGIN;
}