#include<iostream>
using namespace std;
int main(){

    // int input = 0; 
    // cout << "輸入整數："; 
    // cin >> input; 
    // int remain = input % 2; 
    // if(remain == 1) 
    //     cout << input << " 為奇數" << endl; 
    // else 
    //     cout << input << " 為偶數" << endl; 

        int score = 0; 

    cout << "輸入分數："; 
    cin >> score; 
    if(score >= 90) {
        cout << "得 A" << endl; 
    }
    else if(score >= 80 && score < 90) {
        cout << "得 B" << endl; 
    }
    else if(score >= 70 && score < 80) {
        cout << "得 C" << endl; 
    }
    else if(score >= 60 && score < 70) {
        cout << "得 D" << endl; 
    }
    else {
        cout << "得 F（不及格）" << endl; 
    }

    return 0;
}