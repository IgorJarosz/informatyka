#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
fstream dataFile;
double num = 17.816392;

dataFile.open("numfile.txt", ios::out);
dataFile <<fixed; // Formatowanie staloprzecinkowej notacji
dataFile <<num <<endl;

dataFile <<setprecision(4); // Formatowanie 4 miejsc po przecinku
dataFile <<num <<endl;

dataFile <<setprecision(3); // Formatowanie 3 miejsc po przecinku
dataFile <<num <<endl;

dataFile <<setprecision(2); // Formatowanie 2 miejsc po przecinku
dataFile <<num <<endl;

dataFile <<setprecision(1); // Formatowanie 1 miejsca po przecinku
dataFile <<num <<endl;

cout <<"Zrobione.\n";
dataFile.close();

return 0;
}
