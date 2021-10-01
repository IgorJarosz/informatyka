#include <iostream>
#include <string>

using namespace std;

struct User //deklaracja struktury
{
    //opis struktury
    string nik;
    short wiek;
    char plec;

};

int main()
{

    User Monika, Mariola, Kasia;

    Monika.nik = "Mika";
    Monika.plec = 'K';
    Monika.wiek = 20;

    //przypisanie struktur
    Kasia = Mariola = Monika;

    cout << "Wyswietla uzytkownikow plci pieknej"
    << endl
    << "Nik Kasi " << Kasia.nik << endl
    << "Nik Marioli " << Mariola.nik << "  wiek "
    << Mariola.wiek << endl
    << "Nik Moniki " << Monika.nik << "  plec "
    << Monika.plec << endl;

    Monika.nik="Monicznka";
    cout<< "Nik Kasi " << Kasia.nik << endl;
    cout<< "Nik Marioli " << Mariola.nik << endl;
    cout<< "Nik Moniki " << Monika.nik << endl;
    return  0 ;
}
