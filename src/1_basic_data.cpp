//https://openhome.cc/Gossip/CppGossip/index.html
//1
//basic data
#include <iostream>
using namespace std; 
int main() { 
    //Data type
    cout << "\n型態\t大小(bytes)"; 
    cout << "\nint\t"    << sizeof(int); 
    cout << "\nlong\t"   << sizeof(long); 
    cout << "\nfloat\t"  << sizeof(float); 
    cout << "\ndouble\t" << sizeof(double); 
    cout << "\nchar\t"   << sizeof(char);
    cout << "\nunsigned int "<< sizeof(unsigned int)<<endl;
    cout << "sizeof(bool)\t" << sizeof(bool)   << "\n";
    cout << "sizeof(true)\t" << sizeof(true)   << "\n";
    cout << "sizeof(false)\t" << sizeof(false) << "\n";
    cout << "true\t" << true  << "\n";
    cout << "false\t" << false << "\n\n";

    //Literal constant
    cout << "sizeof(1):\t"   << sizeof(1)   << "\n";
    cout << "sizeof(1.0):\t" << sizeof(1.0) << "\n\n";

    cout << 26 << "\n";       // 10 進位
    cout << 032 << "\n";      // 8 進位
    cout << 0x1A << "\n";     // 16 進位
    cout << 0b11010 << "\n";  // 2 進位（C++ 14）

    return 0; 
} 