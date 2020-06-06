#include <iostream>
using namespace std;

int main() { 

    int score = 0; 
    cout << "輸入分數："; 
    cin >> score; 
    switch(score / 10) { 
        case 10: case 9: 
            cout << "得 A" << endl; 
            break; 
        case 8: 
            cout << "得 B" << endl; 
            break; 
        case 7: 
            cout << "得 C" << endl; 
            break; 
        case 6: 
            cout << "得 D" << endl; 
            break; 
        default: 
            cout << "得 F（不及格）" << endl; 
            break;
    } 

    return 0;
}