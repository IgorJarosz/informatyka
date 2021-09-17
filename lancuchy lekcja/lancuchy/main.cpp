#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string lancuch="telefon";
    lancuch="pioro";
    cout<<lancuch<<endl;

    lancuch+=" among";
    cout<<lancuch<<endl;

    lancuch="among";
    cout<<lancuch<<endl<<endl;


    char tablica[10]="komorka";
    cout<<lancuch[3]<<endl;
    cout<<tablica[3]<<endl<<endl;

    //string wczytaj;
    //cin>>wczytaj;
    //cout<<wczytaj;

    string wczytajlepiej;
    getline (cin, wczytajlepiej);
    cout<<wczytajlepiej<<endl;

    int licznik=0;
    for(int i=0;i<12;i++)
    {
        if (isspace(wczytajlepiej[i])!=0)
            {
                licznik++;
            }

    }
    cout<<licznik<<endl<<endl;


    string haslo="superhaslo";
    string haslopodane;
    cout<<"podaj haslo"<<endl;
    getline (cin, haslopodane);
    if(haslopodane == haslo)
        cout<<"zalogowales sie, super"<<endl;
    else
        cout<<"bledne haslo, sprobuj ponownie"<<endl;

        cout<<"podaj imie i nazwisko:"<<endl;
        string imieinazwisko;
        getline(cin, imieinazwisko);
        int dlugosc = imieinazwisko.size();
        cout<<imieinazwisko<<" ma "<<dlugosc<<" znakow"<<endl;

    return 0;
}
