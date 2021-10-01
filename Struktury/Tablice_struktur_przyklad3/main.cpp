#include <iostream>
#include <string>
using namespace std;

struct User
{
    //opis struktury
    string nik;
    string haslo;
    string status;
    string rodzaj_konta;
};

int main()
{

    //Tworzenie obiektu struktury-------
    User Uzytkownicy[ 3 ];
    cout << "Wprowadz dane.\n";
    //wprowadzenie 3 uzytkowników
    for( short licz = 0; licz < 3; licz++ ) {
        cout << "Podaj nik ";
        cin >> Uzytkownicy[ licz ].nik;
        cout << "Podaj haslo ";
        cin >> Uzytkownicy[ licz ].haslo;
    }
    //wyswietlanie wprowadzonych danych
    cout << endl
    << "Oto rezultat wprowadzonych danych:"
    << endl;
    for( short licz = 0; licz < 3; licz++ ) {
        cout << "Uzytkownik " << licz + 1
        << " Nik " << Uzytkownicy[ licz ].nik
        << "   haslo " << Uzytkownicy[ licz ].haslo
        << endl;
    }

    return 0;
}
