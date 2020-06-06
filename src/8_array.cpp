#include<iostream>
using namespace std;
int main(){

    // constexpr int LEN = 10;
    // int number[LEN] = {0}; 
    // for(int i = 0; i < LEN; i++) {
    //     cout << number[i] << " "; 
    // }
    // cout << endl; 

    // for(int i = 0; i < LEN; i++) {
    //     number[i] = i; 
    // }

    // for(int i = 0; i < LEN; i++) {
    //     cout << number[i] << " "; 
    // }
    // cout << endl; 

    int number[5] = {0, 1, 2, 3, 4};
    int length = sizeof(number) / sizeof(number[0]);
    cout<<sizeof(number)<<endl<<sizeof(number[200])<<endl;
    for(int i = 0; i < length; i++) {
        cout << number[i] << " "; 
    }
    cout << endl; 

    return 0;
}