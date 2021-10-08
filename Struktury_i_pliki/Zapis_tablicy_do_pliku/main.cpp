#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){

const int ROWS = 3;
const int COLS = 3;
int nums[ROWS][COLS] = { 2897, 5, 837,
                        1234, 7, 1623,
                        13390, 3456, 12};
fstream outFile("tablica.txt", ios::out);

for (int row = 0; row <ROWS; row++){
 for (int col = 0; col <COLS; col++){
    outFile <<setw(8) <<nums[row][col];
 }
 outFile <<endl;
}
outFile.close();
cout <<"Zrobione.\n";
return 0;
}
