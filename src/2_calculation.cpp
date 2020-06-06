#include <iostream>
using namespace std;
int main(){
    // cout << (1 + 2 * 3)<<endl; 
    // cout << 1 + 2 + 3 / 4<<endl;
    // cout << (1 + 2 + 3) / 4<<endl;
    // cout << rand() % 100<<endl;

    // int number = 10;
    // cout <<endl<< number / 3<<endl;

    // int num = 0;
    // double number = 3.14;
    // num = number;
    // cout <<endl<< num <<endl;

    // int a = 10;
    // int b = 3;
    // cout << a / b<<endl; // 顯示 3
    // cout << (double) a / b<<endl; // 顯示 3.33333
    // cout << double(a) / b<<endl; // 顯示 3.33333

    // int num = 0;
    // double number = 3.14;
    // num = int(number);     // 編譯時加上 `-Wconversion` 引數也不會有警訊
    // cout << num<<endl;

    // cout << "10 > 5\t\t"  << (10 > 5)  << endl;
    // cout << "10 >= 5\t\t" << (10 >= 5) << endl;
    // cout << "10 < 5\t\t"  << (10 < 5)  << endl;
    // cout << "10 <= 5\t\t" << (10 <= 5) << endl;
    // cout << "10 == 5\t\t" << (10 == 5) << endl;
    // cout << "10 != 5\t\t" << (10 != 5) << endl;

    // int score = 0; 
    // cout << "輸入學生分數："; 
    // cin >> score; 
    // cout << "該生是否及格？" 
    //      << (score >= 60 ? 'Y' : 'N') 
    //      << endl; 
         
    // int input = 0; 
    // cout << "輸入整數："; 
    // cin >> input; 
    // cout << "該數為奇數？" 
    //      << (input % 2 ? 'Y' : 'N') 
    //      << endl;

    // int num = 75;
    // cout <<  (num > 70 && num < 80) << endl;
    // cout << (num > 80 || num < 75)  << endl;
    // cout << !(num > 80 || num < 75) << endl;

    // cout << "AND 運算：" << endl; 
    // cout << "0 AND 0\t\t" << (0 & 0) << endl; 
    // cout << "0 AND 1\t\t" << (0 & 1) << endl; 
    // cout << "1 AND 0\t\t" << (1 & 0) << endl; 
    // cout << "1 AND 1\t\t" << (1 & 1) << endl; 
    // cout << "OR 運算：" << endl; 
    // cout << "0 OR 0\t\t" << (0 | 0) << endl; 
    // cout << "0 OR 1\t\t" << (0 | 1) << endl; 
    // cout << "1 OR 0\t\t" << (1 | 0) << endl; 
    // cout << "1 OR 1\t\t" << (1 | 1) << endl; 
    // cout << "XOR 運算：" << endl; 
    // cout << "0 XOR 0\t\t" << (0 ^ 0) << endl; 
    // cout << "0 XOR 1\t\t" << (0 ^ 1) << endl; 
    // cout << "1 XOR 0\t\t" << (1 ^ 0) << endl; 
    // cout << "1 XOR 1\t\t" << (1 ^ 1) << endl; 
    // cout << "NOT 運算：" << endl; 
    // cout << "NOT 0\t\t" << (!0) << endl; 
    // cout << "NOT 1\t\t" << (!1) << endl; 

    signed char num = 255;
    cout << ~num<<endl;
    return 0;
}