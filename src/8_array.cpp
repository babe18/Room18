#include<iostream>
#include <algorithm>
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

    // int number[5] = {0, 1, 2, 3, 4};
    // int length = sizeof(number) / sizeof(number[0]);
    // cout<<sizeof(number)<<endl<<sizeof(number[0])<<endl;
    // for(int i = 0; i < length; i++) {
    //     cout << number[i] << " "; 
    // }
    // cout << endl; 

    // int number[5] = {0, 1, 2, 3, 4};
    // for(auto offset = begin(number); offset != end(number); offset++) {
    //     auto n = *offset;
    //     cout << n << " "; 
    // }
    // cout << endl; 

    // int number[5] = {0, 1, 2, 3, 4};
    // for(auto n : number) {
    //     cout << n << " "; 
    // }
    // cout << endl; 


    //-------------------------------------------------------------
    int number[] = {30, 12, 55, 31, 98, 11};

    // 排序 
    sort(begin(number), end(number));
    for(auto n : number) {
        cout << n << " ";
    }
    cout << endl;

    //搜尋
    cout << "輸入搜尋值：";
    int search = 0;
    cin >> search;

    int* addr = find(begin(number), end(number), search);
    cout << (addr != end(number) ? "找到" : "沒有")
         << "搜尋值" 
         << endl
         <<search
         <<endl;

    // 反轉 
    reverse(begin(number), end(number));
    for(auto n : number) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}