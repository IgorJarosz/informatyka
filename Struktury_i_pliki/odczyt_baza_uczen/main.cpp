#include <iostream>
#include <fstream>
using namespace std;

const int Rozmiar_nazwiska = 51, Rozmiar_przedmiotu= 51, Ilosc= 5;

struct Info {
 char nazwisko[Rozmiar_nazwiska];
 char przedmiot[Rozmiar_przedmiotu];
 short oceny[Ilosc];
};

int main(){
 Info uczen;
 char again;
 fstream dane;


 dane.open("dane.dat", ios::in | ios::binary);

 // Testujemy czy mozna otworzyc plik.
 //if (!dane){
 //cout <<"Blad otwierania pliku.Zamkniecie programu.\n";
 //return 0;
 //}

 cout <<"Dane z pliku:\n\n";
 dane.read(reinterpret_cast<char *>(&uczen),sizeof(uczen));

 while (!dane.eof()) {
 cout <<"Nazwisko: ";
 cout <<uczen.nazwisko <<endl;
 cout <<"Przedmiot: ";
 cout <<uczen.przedmiot <<endl;

 dane.read(reinterpret_cast<short int *>(&uczen),sizeof(uczen));
 cout <<"oceny: ";
 cout <<uczen.oceny <<endl;




 cout <<"\n Nacisnij Enter aby wczytac nastepny rekord.\n";
 cin.get(again);

 dane.read(reinterpret_cast<char *>(&uczen),
 sizeof(uczen));
 }

 cout <<"To wszystkie dane z pliku!\n";
 dane.close();

return 0;
}
