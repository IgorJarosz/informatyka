#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string tekst = "BaBaamogus";
    int iloscA = 0;
    int iloscB = 0;
    int dlugosc = tekst.size();

    for(int i=0;i<dlugosc;i++)
    {
        if(tekst.at(i)=='a')
        {
            iloscA++;
        }
    }

    for(int j=0;j<dlugosc;j++)
    {
        if((tekst.at(j)!='B')&&(j%2==0))
        {
            iloscB++;
        }
    }
  
  
    cout<<iloscA<<endl;
    cout<<iloscB;
 
    return 0;
}
