#include<iostream>
using namespace std;

struct punkty{
	int x, y;
	char nazwa;
}tab1[10];

int main()
{
	punkty tab2[10];

	//przypisanie wartosci do pierwszej komórki tablicy
	tab1[0].x = 2;
	tab1[0].y = 4;
	tab1[0].nazwa = 'A';

	//przypisanie do ostatniej komórki tablicy
	tab2[9].x = 1;
	tab2[9].y = 5;
	tab2[9].nazwa = 'X';

	//odwoływanie się do elementów tablicy
	cout<<"Dane pierwszego punktu: "<<tab1[0].x<<" "
	<<tab1[0].y<<" "<<tab1[0].nazwa<<endl;

	//odwoływanie się do elementów tablicy
	cout<<"Dane ostatniego punktu: "<<tab2[9].x<<" "
	<<tab2[9].y<<" "<<tab2[9].nazwa<<endl;

	return 0;
}
