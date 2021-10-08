#include <iostream>
#include <fstream>
using namespace std;

int main(){
const int SIZE = 4;
char data[SIZE] = {'A', 'B', 'C', 'D'};
fstream file;

file.open("test.dat", ios::out | ios::binary);

cout <<"Zapis tablicy znakow do pliku.\n";
file.write(data, sizeof(data));

file.close();

file.open("test.dat", ios::in | ios::binary);

// Czytanie zawartosci pliku do tablicy.
cout <<"Czytanie danych do pamieci z pliku.\n";
file.read(data, sizeof(data));

for (int count = 0; count <SIZE; count++)
 cout <<data[count] <<" ";
 cout <<endl;

file.close();
return 0;
}
