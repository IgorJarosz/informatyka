#include<iostream>
using namespace std;
//struktura globalna widoczna w każdym zakątku
struct samochod{
	char marka[20]; //elementy struktury
	char model[20];
	int rok_produkcji;
	double pojemnosc;
}renault;

int main()
{
	samochod peugeot = {"Peugeot","407",2013,2.7};
    cout<<"Marka: "<<peugeot.marka<<endl;
    cout<<"Model: "<<peugeot.model<<endl;
    cout<<"Rok produkcji: "<<peugeot.rok_produkcji<<endl;
    cout<<"Pojemnosc: "<<peugeot.pojemnosc<<endl<<endl;

    samochod toyota = {"toyota","trueno a286",1986,1.5};
    cout<<"Marka: "<<toyota.marka<<endl;
    cout<<"Model: "<<toyota.model<<endl;
    cout<<"Rok produkcji: "<<toyota.rok_produkcji<<endl;
    cout<<"Pojemnosc: "<<toyota.pojemnosc<<endl;

	cin>>renault.marka;
	cin>>renault.model;
	cin>>renault.rok_produkcji;
    cin>>renault.pojemnosc;

    cout<<"Marka: "<<renault.marka<<endl;
    cout<<"Model: "<<renault.model<<endl;
    cout<<"Rok produkcji: "<<renault.rok_produkcji<<endl;
    cout<<"Pojemnosc: "<<renault.pojemnosc<<endl;

	return 0;
}
