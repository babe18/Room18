#include <iostream> 
using namespace std; 

int main() { 

    // constexpr int ROWS = 5;
    // constexpr int COLUMNS = 10;
    // int maze[ROWS][COLUMNS]; 
    // for(int row = 0; row < ROWS; row++) {
    //     for(int i = 0; i < COLUMNS; i++) {
    //         maze[row][i] = (row + 1) * (i+ 1);
    //     }
    // } 
    // for(int row = 0; row < ROWS; row++) {
    //     for(int i = 0; i < COLUMNS; i++) {
    //         cout << maze[row][i] << "\t"; 
    //     }
    //     cout << endl; 
    // } 

    // int maze[2][3] = {
    //                      {1, 2, 3},
    //                      {4, 5, 6}
    //                  };
    // for(auto row : maze) {
    //     for(int i = 0; i < 3; i++) {
    //         cout << row[i] << "\t"; 
    //     }
    //     cout << endl; 
    // } 

    int maze[2][3] = {
                         {1, 2, 3},
                         {4, 5, 6}
                     };
    for(auto &row : maze) {
        for(auto n : row) {
            cout << n << "\t"; 
        }
        cout << endl; 
    } 


    return 0; 

}