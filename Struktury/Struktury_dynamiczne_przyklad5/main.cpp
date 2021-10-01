#include <iostream>
#include <cstdlib>

using namespace std;

struct osoba {
    string imie;
    int wiek;
};

int main()
{
    osoba * sklepowy = new osoba; // wskaźnik *sklepowy na strukturę

    sklepowy->imie = "Andrzej";

    cout << sklepowy->imie << endl;

    //====================================================================
    // odwołanie z kropką
    osoba * sprzedawca = new osoba; // wskaźnik *sklepowy na strukturę

    (*sprzedawca).imie = "Ala";
    cout << (*sprzedawca).imie << endl;

    delete sklepowy; // usuwamy obiekt
    delete sprzedawca; // usuwamy obiekt

    return 0;
}
