#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string wczytajTekst;
    cout<<"wpisz tekst:"<<endl;
    cin>>wczytajTekst;
    int dlugosc = wczytajTekst.size();
    for(int i=0;i<dlugosc;i++)
    {
        cout<<wczytajTekst.at(i);
        cout<<" ";
    }
    

    for(int j=0;j<dlugosc;j++)
    {
        cout<<wczytajTekst.at(dlugosc-j-1);
        cout<<" ";
    }
    return 0;
}
