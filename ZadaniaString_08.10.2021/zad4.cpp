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
        if(wczytajTekst.at(i)!='h')
        {
            cout<<wczytajTekst.at(i);
        }
    }
    cout<<endl;
    
    for(int j=0;j<dlugosc;j++)
    {
        if(wczytajTekst.at(j)=='a'|| wczytajTekst.at(j)=='A'||wczytajTekst.at(j)=='o'||wczytajTekst.at(j)=='O')
        {
            cout<<wczytajTekst.at(j);
        }
    }
    cout<<endl;
 
    return 0;
}
