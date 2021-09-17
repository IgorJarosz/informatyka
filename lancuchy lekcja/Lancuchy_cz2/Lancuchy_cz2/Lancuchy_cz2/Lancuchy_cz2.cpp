#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
//2. Deklaracja lub inicjalizacja zmiennej typu string
	string s1;
	s1="telefon"; // wynik s="telefon"
	string s2("telefon");  // wynik s="telefon"
	string s3="telefon";  // wynik s="telefon"
	string s4(8,'*');  // wynik s="********"
	string w=s4; // wynik w="********"

//3. Operator +   łączy dwa łańcuchy tworząc nowy łańcuch,
	string a="jeden",b="dwa";
	cout<<a+b<<endl;
	cout<<b+a<<endl;

//Ważne ! operator + nie może łączyć literałów
//4. Deklaracja lub inicjalizacja zmiennej typu string
	string napis;
//	napis="Ala"+"Ola"; //blad !!!
	napis=napis+"Jola";
	napis="Ewa"+napis;
	cout<<napis<<endl;

//5. Operator +=  operator łączy dwa łańcuchy tworząc nowy łańcuch,
	string jeden="jeden",dwa="dwa";
	jeden+=dwa;
	cout<<jeden<<endl;
//6. Operator indeksowy []  - dostęp do poszczególnych znaków jak w tablicy
	cout<<jeden[0]<<endl;
	cout<<jeden[7]<<endl;
	cout<<jeden[-1]<<endl; //kompilator nie pilnuje czy wychodzimy poza zakres

//7. Wczytywanie całego łańcucha
	string wczytaj;
	cout<<"Podaj lanuch"<<endl;
	cin>>wczytaj;
	cout<<wczytaj<<endl;

	char znak;
	cout<<"Podaj znak"<<endl;
	cin>>znak;
	cout<<"isalpha(znak)="<<isalpha(znak)<<endl;
	//https://en.cppreference.com/w/cpp/string/byte/isalpha
    cout<<"isdigit(znak)="<<isdigit(znak)<<endl;

//10.Operatory  >, <, >=, <=, !=  - operatory porównują wg porządku alfabetycznego - np.:'a'>'A', 'z'>'a'
// == - operator porównuje czy łańcuchy sa takie same
string haslo = "admin";
string password;
cout << "Podaj haslo:"<< endl;
// wazne, aby umiscic cin.ignore() !!!
cin.ignore();
getline(cin,password);
if(haslo == password)
cout << "OK" << endl;
else
cout << "bledne haslo"<<endl;

//====================================
string l_1, l_2("Ala"), l_3="Ola";
 l_1="Ala";
 if (l_1==l_2) cout<<"teksty "<<l_1<<" i "<<l_2<<" sa takie same"<<endl;
 else if (l_1<l_2) cout<<"tekst "<<l_1<<" jest wczesniej w slowniku niz tekst "<<l_2<<endl;
  else cout<<"tekst "<<l_1<<" nie jest pozniej w slowniku niz tekst "<<l_2<<endl;
 l_2+='n';
 if (l_1==l_2) cout<<"teksty "<<l_1<<" i "<<l_2<<" sa takie same"<<endl;
 else if (l_1<l_2) cout<<"tekst "<<l_1<<" jest wczesniej w slowniku niz tekst "<<l_2<<endl;
  else cout<<"tekst "<<l_1<<" jest pozniej w slowniku niz tekst "<<l_2<<endl;
 l_3+="!!!";
 cout<<l_3<<endl;
 l_3[1]='*';
 cout<<l_3<<endl;

// 11. Przydatne funkcje:
string s = "abcdef";

//    bool empty(void) - zwraca wartość true,jeśli napis jest pusty, w przeciwnym razie false
      bool a1 = s.empty();
      cout<<a1<<endl;
//    int size(void) - zwraca liczbę znaków w napisie
      int a2 = s.size();
      cout<<a2<<endl;
//    char at(int i) - zwraca znak o podanym indeksie i, zapobiega wyjściu poza przedział
      char a3 = s.at(3);
      cout<<a3<<endl;

//    void clear(void) - usuwa wszystkie znaki z łańcucha
      s.clear();
      cout<<s<<endl;

//    char* c_str(void) - konwertuje typ string na char[]
      s="abcdef";
      char a4[s.size()+1];
      strcpy(a4,s.c_str());

//    string substr(int i, int j) - zwraca podciąg znaków napisu zaczynający sie na pozycji i, o długości j znaków
      string a5;
      a5=s.substr(2,3);
      cout<<a5<<endl;
//    int find(string b) - wyszukuje w napisie podciąg znaków b, zwraca pozycję rozpoczęcia szukanego podciągu w tekście lub wartość większą od długości przeszukiwanego napisu
      string b1="cde";
      int a6=s.find(b1);
      cout<<a6<<endl;
// 12. Konwersje łańcuchów:
// (1) konwersji typu string na char[]:
	string s11 = "abcdef";
	char s22[50];
	strcpy(s22, s11.c_str());
	cout<<s22[0]<<endl;
// (2) konwersji char[ ] na string:
	string s_1;
	char s_2[] = "abcdef";
	s_1 = s_2;
	cout<<s_1[0]<<endl;





    return 0;
}
