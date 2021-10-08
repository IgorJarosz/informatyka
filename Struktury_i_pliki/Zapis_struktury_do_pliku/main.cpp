#include <iostream>
#include <fstream>
using namespace std;

const int Rozmiar_nazwiska = 51, Rozmiar_adresu = 51, Rozmiar_telefonu = 14;

struct Info {
 char nazwisko[Rozmiar_nazwiska];
 int wiek;
 char adres1[Rozmiar_adresu];
 char adres2[Rozmiar_adresu];
 char telefon[Rozmiar_telefonu];
};

int main(){
 Info osoba;
 char again;
 fstream dane("dane.dat", ios::out | ios::binary);

do
 {
 cout <<"Podaj nastepujace dane "<<"osoby:\n";
 cout <<"Naziwsko: ";
 cin.getline(osoba.nazwisko, Rozmiar_nazwiska);
 cout <<"Age: ";
 cin >>osoba.wiek;
 cin.ignore(); // Pomin istniejaca nowa linie.
 cout <<"Adres 1: ";
 cin.getline(osoba.adres1, Rozmiar_adresu);
 cout <<"Adres 2: ";
 cin.getline(osoba.adres2, Rozmiar_adresu);
 cout <<"Telefon: ";
 cin.getline(osoba.telefon, Rozmiar_telefonu);


dane.write(reinterpret_cast<char *>(&osoba),sizeof(osoba));

cout <<"Chcesz podac inny rekord? ";
cin >>again;
cin.ignore();
} while (again == 'Y' || again == 'y');


dane.close();
return 0;
}
