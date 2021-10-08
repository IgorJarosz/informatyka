#include <iostream>
#include <fstream>
using namespace std;

int main()
{
//    ofstream file("num.dat");
//    short x = 1297;
//    file <<x;
//    file.close();

    ofstream file;
    file.open("stuff.dat",ios::out|ios::binary);
    short x = 1297;
    file.write(reinterpret_cast<char *>(&x), sizeof(x));
    file.close();
    return 0;
}
