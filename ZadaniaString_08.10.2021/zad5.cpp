#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string wczytajTekst;
    cout<<"wpisz tekst:"<<endl;
    getline(cin,wczytajTekst);
    
    int dlugosc = wczytajTekst.size();
    

    cout<<"a) wszystkie wyrazy w kolumnie:"<<endl;

    for(int i=0;i<dlugosc;i++)
    {
        if(wczytajTekst.at(i)!=' ')
        {
            cout<<wczytajTekst.at(i);
        }

        if(wczytajTekst.at(i)==' ')
        {
            cout<<endl;  
        }
        
    }

    cout<<endl<<"b) wszystkie wyrazy gdzie pierwszy znak jest taki sam jak ostatni znak, w tym pojedyncze znaki:"<<endl;

    char pierwszyZnak;
    char ostatniZnak;
    int gdziewczyt;
    
    for(int i=0;i<dlugosc;i++)
    {
        

            if(i==0)
            {
                pierwszyZnak=wczytajTekst.at(i);
                gdziewczyt=i;
            }
            else if(wczytajTekst.at(i-1)==' ')
            {
                pierwszyZnak=wczytajTekst.at(i);
                gdziewczyt=i;
            }

            


            if((i+1)==dlugosc)
            {


                if(wczytajTekst.at(i)==pierwszyZnak)
                {
                    for(int j=gdziewczyt;j<=i;j++)
                    {
                        cout<<wczytajTekst.at(j);
                    }
                }
                return 0;
            }
            if(wczytajTekst.at(i)==' ')
            {
                if(wczytajTekst.at(i-1)==pierwszyZnak)
                {
                    for(int j=gdziewczyt;j<i;j++)
                    {
                        cout<<wczytajTekst.at(j);
                    }
                    cout<<endl;
                }
            }


    } 


    return 0;
}
