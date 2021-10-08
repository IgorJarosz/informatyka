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
 fstream dane;

 dane.open("dane.dat", ios::in | ios::binary);

 // Testujemy czy mozna otworzyc plik.
 if (!dane){
 cout <<"Blad otwierania pliku.Zamkniecie programu.\n";
 return 0;
 }


 cout <<"Dane z pliku:\n\n";
 dane.read(reinterpret_cast<char *>(&osoba),sizeof(osoba));

 while (!dane.eof()) {
 cout <<"Nazwisko: ";
 cout <<osoba.nazwisko <<endl;
 cout <<"Wiek: ";
 cout <<osoba.wiek <<endl;
 cout <<"Adres 1: ";
 cout <<osoba.adres1 <<endl;
 cout <<"Adres 2: ";
 cout <<osoba.adres2 <<endl;
 cout <<"Telefon: ";
 cout <<osoba.telefon <<endl;

 cout <<"\n Nacisnij Enter aby wczytac nastepny rekord.\n";
 cin.get(again);

 dane.read(reinterpret_cast<char *>(&osoba),
 sizeof(osoba));
 }

 cout <<"To wszystkie dane z pliku!\n";
 dane.close();
 return 0;
 }
