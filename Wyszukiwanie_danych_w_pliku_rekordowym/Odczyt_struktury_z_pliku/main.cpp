#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;

const int Rozmiar_nazwiska = 51, Rozmiar_przedmiotu = 51, Ilosc_ocen = 5, Ilosc_uczniow =5;

struct Info {
 char nazwisko[Rozmiar_nazwiska];
 char przedmiot[Rozmiar_przedmiotu];
 float oceny[Ilosc_ocen];
 float stypendium;
} uczniowie[Ilosc_uczniow];

void wyswietl_rekordy(Info uczniowie[Ilosc_uczniow]){
 for(int k=0;k<Ilosc_uczniow;k++){
    cout<<uczniowie[k].nazwisko<<endl;
    cout<<uczniowie[k].przedmiot<<endl;
    for(int l=0;l<Ilosc_ocen;l++){
        cout<<fixed<<setprecision(2)<<uczniowie[k].oceny[l]<<" ";
    }
    cout<<endl;
    cout<<uczniowie[k].stypendium<<endl;
    cout<<endl;
 }
 cout<<"==========wyswietl_rekordy====="<<endl;
}

bool wyszukaj_nazwisko(Info uczniowie[Ilosc_uczniow],char Nazwisko[Rozmiar_nazwiska]){
for(int k=0;k<Ilosc_uczniow;k++){
    if (strcmp(Nazwisko,uczniowie[k].nazwisko)==0) {
        cout<<uczniowie[k].nazwisko<<endl;
        cout<<uczniowie[k].przedmiot<<endl;
        for(int l=0;l<Ilosc_ocen;l++){
            cout<<uczniowie[k].oceny[l]<<" ";
        }
        cout<<endl;
        return 1;
    }
 }
 return 0;
}

float policz_srednia_ucznia(Info uczniowie[Ilosc_uczniow],char Nazwisko[Rozmiar_nazwiska]){
    float srednia=0.0;
    for(int k=0;k<Ilosc_uczniow;k++){
    if (strcmp(Nazwisko,uczniowie[k].nazwisko)==0) {
        cout<<uczniowie[k].nazwisko<<endl;
        cout<<uczniowie[k].przedmiot<<endl;
        for(int l=0;l<Ilosc_ocen;l++){
            cout<<uczniowie[k].oceny[l]<<" ";
            srednia+=uczniowie[k].oceny[l];
        }
        cout <<"Srednia:";
        srednia/=Ilosc_ocen;
        cout <<fixed<<setprecision(2) <<srednia<<endl;
        cout<<endl;
        return srednia;
     }
    }

    return srednia;
}

void sortowanie_po_stypendium(Info uczniowie[Ilosc_uczniow]){
     Info POM;

    for(int j=Ilosc_uczniow-1;j>0;j--){
     for(int i=0;i<j;i++){
        if (uczniowie[i].stypendium>uczniowie[i+1].stypendium) {
//            //zamiana
//            POM=T[i];
    strcpy(POM.nazwisko,uczniowie[i].nazwisko);
    strcpy(POM.przedmiot,uczniowie[i].przedmiot);
    for (int k=0;k<Ilosc_ocen;k++){
        POM.oceny[k]=uczniowie[i].oceny[k];
    }
    POM.stypendium=uczniowie[i].stypendium;
//            T[i]=T[i+1];
    strcpy(uczniowie[i].nazwisko,uczniowie[i+1].nazwisko);
    strcpy(uczniowie[i].przedmiot,uczniowie[i+1].przedmiot);
    for (int k=0;k<Ilosc_ocen;k++){
        uczniowie[i].oceny[k]=uczniowie[i+1].oceny[k];
    }
    uczniowie[i].stypendium=uczniowie[i+1].stypendium;
//            T[i+1]=POM;
    strcpy(uczniowie[i+1].nazwisko,POM.nazwisko);
    strcpy(uczniowie[i+1].przedmiot,POM.przedmiot);
    for (int k=0;k<Ilosc_ocen;k++){
        uczniowie[i+1].oceny[k]=POM.oceny[k];
    }
    uczniowie[i+1].stypendium=POM.stypendium;
        }
     }
    }
}

bool alfabetSort(int i, int j)
{
    if(uczniowie[i].nazwisko[j]<uczniowie[i+1].nazwisko[j]) return 0;
    else if(uczniowie[i].nazwisko[j]==uczniowie[i+1].nazwisko[j]) return alfabetSort(i, j+1);
    else return 1;
}



void sortowanie_po_nazwisku(Info uczniowie[Ilosc_uczniow]){
     Info POM;

    for(int j=Ilosc_uczniow-1;j>0;j--){
     for(int i=0;i<j;i++){

        if (alfabetSort(i, 0))
             {
//            //zamiana
//            POM=T[i];
    strcpy(POM.nazwisko,uczniowie[i].nazwisko);
    strcpy(POM.przedmiot,uczniowie[i].przedmiot);
    for (int k=0;k<Ilosc_ocen;k++){
        POM.oceny[k]=uczniowie[i].oceny[k];
    }
    POM.stypendium=uczniowie[i].stypendium;
//            T[i]=T[i+1];
    strcpy(uczniowie[i].nazwisko,uczniowie[i+1].nazwisko);
    strcpy(uczniowie[i].przedmiot,uczniowie[i+1].przedmiot);
    for (int k=0;k<Ilosc_ocen;k++){
        uczniowie[i].oceny[k]=uczniowie[i+1].oceny[k];
    }
    uczniowie[i].stypendium=uczniowie[i+1].stypendium;
//            T[i+1]=POM;
    strcpy(uczniowie[i+1].nazwisko,POM.nazwisko);
    strcpy(uczniowie[i+1].przedmiot,POM.przedmiot);
    for (int k=0;k<Ilosc_ocen;k++){
        uczniowie[i+1].oceny[k]=POM.oceny[k];
    }
    uczniowie[i+1].stypendium=POM.stypendium;

        }


     }
    }
}

int main(){
 Info uczen;
 char again;
 float srednia;
 char nazwisko[Rozmiar_nazwiska];
 fstream dane;

 dane.open("dane.dat", ios::in | ios::binary);

 // Testujemy czy mozna otworzyc plik.
 if (!dane){
 cout <<"Blad otwierania pliku.Zamkniecie programu.\n";
 return 0;
 }

 cout <<"Dane z pliku:\n\n";
 dane.read(reinterpret_cast<char *>(&uczen),sizeof(uczen));
 int i=0;

 while (!dane.eof()) {
    strcpy(uczniowie[i].nazwisko,uczen.nazwisko);
    strcpy(uczniowie[i].przedmiot,uczen.przedmiot);
    for (int j=0;j<Ilosc_ocen;j++){
        uczniowie[i].oceny[j]=uczen.oceny[j];
    }
    uczniowie[i].stypendium=uczen.stypendium;
    dane.read(reinterpret_cast<char *>(&uczen),sizeof(uczen));
    i++;
 }

 //strcpy(nazwisko,"Nowak");
 wyswietl_rekordy(uczniowie);
 //wyszukaj_nazwisko(uczniowie,nazwisko);
 //policz_srednia_ucznia(uczniowie,nazwisko);
 sortowanie_po_nazwisku(uczniowie);
 wyswietl_rekordy(uczniowie);
 cout <<"To wszystkie dane z pliku!\n";
 dane.close();
 return 0;
 }
