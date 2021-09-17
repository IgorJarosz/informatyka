#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    /*
    char znak='A';
    cout << "znak="<<znak<< endl;
//===============================================
// przypisanie wartosci lancuchowi
//   char lancuch[10];
//   lancuch="telefon"; //kompilator zglasza blad

//==============================================

// rozwiazanie problemu :
// 1. inicjalizacja tablicy
   char lancuch[10]="telefon";

   for(int i=0;i<10;i++){
   cout << lancuch[i];
   }
   cout<<endl;

// lub
/*
   char lancuch1[10]="telefon";
   char lancuch2[10]={'t','e','l','e','f','o','n','\0'};
   char lancuch3[]={"telefon"};
   char lancuch4[]="telefon";


//1.1 jak sprawdzic rozmiar lancucha
    unsigned int rozmiar= sizeof(lancuch3)/sizeof(lancuch3[0]);
    cout<<"rozmiar="<<rozmiar<<endl;
    // lub
    // size_t specjalny typ dla operatora sizeof
    // <cstdio> lub <cstdlib> lub <cstring>
    std::size_t rozmiar1=sizeof(lancuch3)/sizeof(lancuch3[0]);
    cout<<"rozmiar1="<<rozmiar1<<endl;


// 2. funkcja strcpy ( #include <cstring>)

    strcpy(lancuch,"komorkaikomoreczka");
    for(int i=0;i<10;i++){
    cout << lancuch[i];
    }
    cout<<endl;

/*
// strcpy nie sprawdza czy lancucha miesci sie w tablicy
    strcpy(lancuch,"Brzeczyszczykiewicz");
    for(int i=0;i<20;i++){
    cout << lancuch[i];
    }
    cout<<endl;

// 3. wskaźnik do zarezerwowanego łańcucha
    char *bohater="jez";
    cout << bohater << endl;
    bohater="Wolodyjowski";
    cout << bohater << endl;

// 4. funkcja printf - wypisuje lancuch na ktory
// wskazuje wskaznik wraz z odpowiednim formatem
    char postac[10]="Nowak";
    printf("%s i %s sa kolegami\n",postac,bohater);

    printf( "Znaki: %c, %c\n", 'h', 68 );
    printf( "Liczby (1): %d %i\n", 23, 45 );
    printf( "Liczby (2): %5d %0*d\n", 1234, 8, 5678 );
    printf( "Lancuchy znakow: %s, %s\n", "napis pierwszy", "napis drugi" );
    printf( "Systemy liczbowe: %d %x %o %#x %#o \n", 250, 250, 250, 250, 250 );
    printf( "Liczby zmiennoprzecinkowe: %4.2f %+.0e %E \n", 2.1254, 2.1254, 2.1254 );
    printf( "Liczba bez  zer wiadacych: %7d \n", 1387 );
    printf( "Liczba z zerami wiadocymi: %07d \n", 1387 );


// 5.funkcja int scanf(const char *format, ...);
// wczytuje ze standardowego strumienia wejsciowego ciag
// znakow (lancuch) ,formatuje go zgodnie z kodami
// podanymi w formachar imie2[30];
	printf("Podaj imie: ");
//potrzebne wyczyszczenie bufora
//	fflush(stdout); //nie działa
    getchar(); //pobiera znak => pobiera /n po printf
// lub endl();
	fgets(imie2, sizeof(imie2), stdin);  // read string
	printf("Imie: ");
	puts(imie2);    // display t i przypisuje do zmiennych, których
// adresy przekazujemy w liscie
// potrzebna biblioteka include <cstdio> lub <cstring>
    char imie[20];
    printf("Podaj imie: ");
    scanf("%s",imie);
    int liczba;
    scanf("%d",&liczba);
    printf("Twoja liczba to %d.\n", liczba);
    printf("Twoje imie to %s.\n", imie);
*/
// 6. funkcja puts - wypisuje lancuch na ktory
// wskazuje wskaznik + koniec linii
// int puts(conts char* str);
// mozna ignorowac zwracana wartosc int
// potrzebna biblioteka include <cstdio> lub <cstring>
	puts(lancuch);
	puts(bohater);
	puts(postac);
	puts("Lewandowski");

// 7. funkcja char * fgets( char * str, int num, FILE * stream );} - wczytuje tekst ze wskazanego strumienia aż do napotkania znaku przejścia do nowej linii lub do wczytania \textbf{num-1} znaków
// potrzebna biblioteka include <cstdio> lub <cstring>
    char imie2[30];
	printf("Podaj imie: ");
//potrzebne wyczyszczenie bufora
//	fflush(stdout); //nie działa
    getchar(); //pobiera znak => pobiera /n po printf
// lub endl();
	fgets(imie2, sizeof(imie2), stdin);  // read string
	printf("Imie: ");
	puts(imie2);    // display string
/*
// 8. funkcja strcpy()
    char a[]="abcdef";
    strcpy(a,"nowy");
    cout <<"strcpy():"<< a << endl;
// 9. funkcja strncpy()
    char b[]="abcdef";
	strncpy(b,"nowy",3);
    cout <<"strncpy():"<< b << endl;

// 10. funkcja strcat()
    char c[]="abcdef";
    strcat(c,"nowy");
    cout <<"strcat():"<< c << endl;

// 11. funkcja strlen()
    char d[]="abcdef";
    int l=strlen(d);
    cout << "liczba znakow="<<l << endl;

// 12. funkcja strcmp()
    char e[]="cdefgh";
    int p=strcmp(e,"bcdefg");
    cout <<"porownanie="<<p << endl;



*/



    return 0;
}
