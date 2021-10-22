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

int znajdz_max(int rozmiar,int *T){
 //szukamy maksymalny element w tablicy,
 //tablica generowana jest od 0 do 100
    int maks=-1;
    for (int i=0;i<rozmiar;i++){
        if (T[i]>maks){
        maks=T[i];
        }
    }
    return maks;
}




void babelkowe(int rozmiar,int *T){
     int POM;

    for(int j=rozmiar-1;j>0;j--){
     for(int i=0;i<j;i++){
        if (T[i]>T[i+1]) {
            //zamiana
            POM=T[i];
            T[i]=T[i+1];
            T[i+1]=POM;
        }
         wypisz(rozmiar,T);
     }
     cout<<"================= \n";
    }
}

void przez_wybor ( int rozm,double T[])
{
 int k;
 double pom;
 for (int i=0;i<rozm-1;i++)
 {
  k=i;
  for (int j=i+1;j<rozm;j++)
   if (T[j]<T[k]) k=j;
  pom=T[k];
  T[k]=T[i];
  T[i]=pom;
 }
}

void przez_wstawianie ( int rozm,double T[])
{
 // cwiczenie na leckji - samodzielna implementacja na podstawie algorytmu i schematu w podreczniku str.128-129
}


void zliczanie (int rozm,int T[], int m)
{ //metoda z podrecznika - tzw. prostsza – sortująca in situ (w miejscu), zakłada, że elementy o równych kluczach są nierozróżnialne,
  //  nie mogą zatem być to klucze danych (każdy z nich jest bowiem powiązany z przenoszoną wartością – zatem,
  //  mimo iż są one równe, muszą pozostawać rozróżnialne);

  //m - wartosc od ktorej wszystkie wartosci w tablicy sa mniejsze
 int P[m]={0};
 for (int i=0;i<rozm;i++) P[T[i]]++;
 int k=0;
 for (int i=0;i<m;i++)
  for (int j=P[i];j>=1;j--)
  {
   T[k]=i;
   k++;
  }
}


int main()
{   int rozmiar,*T,m;
    cout << "Podaj rozmiar tablicy" << endl;
    cin >> rozmiar;
    T=new int[rozmiar];
    wypelnianie_tablicy(rozmiar,T);
    m=znajdz_max(rozmiar,T);
    cout<<"Maksymalny element tablicy: "<<m<<endl;
    zliczanie (rozmiar,T,m+1);
   // babelkowe(rozmiar,T);
    wypisz(rozmiar,T);


    delete []T;
    return 0;
}
