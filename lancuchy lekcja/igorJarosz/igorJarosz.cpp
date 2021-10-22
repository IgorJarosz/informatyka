#include <iostream>

using namespace std;

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
const int MAX = 100;

void wypelnianie_tablicy(int rozmiar,int *T){
    //generator liczb pseudolosowych
    int a=0,b=100;
    srand(time(NULL));
    cout<<"|";
    for (int i=0;i<rozmiar;i++){
        T[i]=a+rand()%(b-a+1);
        cout<<T[i]<<"|";
    }
    cout<<"\n";
}

void wypisz(int rozmiar, int*T){
    cout<<"|";
    for (int i=0;i<rozmiar;i++){
        cout<<T[i]<<"|";
    }
    cout<<"\n";
}


void przez_wstawianie ( int rozm,int T[])
{
 // cwiczenie na leckji - samodzielna implementacja na podstawie algorytmu i schematu w podreczniku str.128-129

 int k;
 double POM;
 for(int i=0;i<rozm-1;i++)
 {
     k=i;
     for(int j=i+1;j<rozm;j++)
     {
        if (T[j]<T[k])
        {
            POM=T[j];
            T[j]=T[k];
            T[k]=POM;
        }

        cout<<"|";
        for (int l=0;l<rozm;l++){
        cout<<T[l]<<"|";
        }
        cout<<"\n";

     }

 }
}

int main()
{
    int rozmiar,*T,m;
    cout << "Podaj rozmiar tablicy" << endl;
    cin >> rozmiar;
    T=new int[rozmiar];
    wypelnianie_tablicy(rozmiar,T);

    przez_wstawianie(rozmiar,T);
    wypisz(rozmiar,T);
    delete []T;
    return 0;
}
