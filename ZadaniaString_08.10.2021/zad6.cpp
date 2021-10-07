#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string tekst="papek pape pap pe ape ap";
    
    
    int dlugosc = tekst.size();
    int gdziewczyt;


    for(int i=0;i<dlugosc;i++)
    {
        

            if((i==0))
            {    
                gdziewczyt=i;
            }
            else if(tekst.at(i-1)==' ')
            {     
                gdziewczyt=i;
            }

            

            if(tekst.at(gdziewczyt)=='p'||tekst.at(gdziewczyt)=='P')
            {

            if(((i+1)==dlugosc)&&((i-gdziewczyt)%2==1))
            {
                for(int j=gdziewczyt;j<i;j++)
                    {
                        cout<<tekst.at(j);
                    }
                return 0;
            }
            if((tekst.at(i)==' ')&&((i-gdziewczyt)%2==1))
            {
                
                    for(int j=gdziewczyt;j<i;j++)
                    {
                        cout<<tekst.at(j);
                    }
                    cout<<endl;
                
            }

            }

    } 

    cout<<endl;
    
    return 0;
}
