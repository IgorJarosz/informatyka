#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string wczytajImie;
    cout<<"wpisz imie:"<<endl;
    cin>>wczytajImie;
    int Imie = wczytajImie.size();
    cout<<Imie<<endl;
    
    string wczytajNazwisko;
    cout<<"wpisz nazwisko:"<<endl;
    cin >> wczytajNazwisko;
    int Nazwisko = wczytajNazwisko.size();
    cout << Nazwisko<<endl;

    return 0;
}
