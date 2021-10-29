#include <iostream>
#include <fstream>
using namespace std;

const int Rozmiar_nazwiska = 51, Rozmiar_przedmiotu = 51, Ilosc_ocen = 5, Ilosc_uczniow=5;

struct Info {
 char nazwisko[Rozmiar_nazwiska];
 char przedmiot[Rozmiar_przedmiotu];
 float oceny[Ilosc_ocen];
 float stypendium;
} ;



int main(){
 Info uczen;
 char again;
 fstream dane("dane.dat", ios::out | ios::binary);

do
 {
 cout <<"Podaj nastepujace dane "<<"osoby:\n";
 cout <<"Nazwisko: ";
 cin.getline(uczen.nazwisko, Rozmiar_nazwiska);
 cout <<"przedmiot: ";
 cin.getline(uczen.przedmiot, Rozmiar_przedmiotu);
 for (int i=0;i<Ilosc_ocen;i++){
 cout <<"Podaj ocene:";
 cin>>uczen.oceny[i];
 }
 cout<<"podaj stypendium:"<<endl;
 cin>>uczen.stypendium;

dane.write(reinterpret_cast<char *>(&uczen),sizeof(uczen));

cout <<"Chcesz podac inny rekord? ";
cin >>again;
cin.ignore();
} while (again == 'Y' || again == 'y');


dane.close();
return 0;
}
