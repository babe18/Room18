#include <iostream> 
using namespace std; 

int main() { 

    char text[] = "hello"; 
    for(auto ch : text) { 
        if(ch == '\0') {
            cout << " null"; 
        } 
        else { 
            cout << ch; 
        }
    } 
    cout << endl; 

    return 0; 
}