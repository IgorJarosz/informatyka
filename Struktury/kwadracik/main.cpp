#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

struct punkty{
	int x, y;
	char nazwa;
}tab[4];


struct loginy{
    string login;
    string password;
}usr[5];

int main()
{
	tab[0].x = 0;
	tab[0].y = 0;
	tab[0].nazwa = 'A';

	tab[1].x = 12;
	tab[1].y = 0;
	tab[1].nazwa = 'B';

	tab[2].x = 12;
	tab[2].y = 12;
	tab[2].nazwa = 'C';

	tab[3].x = 0;
	tab[3].y = 12;
	tab[3].nazwa = 'D';

	for(int i=0;i<4;i++)
    {
        cout<<tab[i].nazwa<<'('<<tab[i].x<<','<<tab[i].y<<')'<<endl;
    }

    srand(time(NULL));

    usr[0].login = "Jan";
    usr[1].login = "Ola";
    usr[2].login = "Ala";
    usr[3].login = "Aga";
    usr[4].login = "Sus";

    for(int i=0;i<5;i++)
    {

        for(int j=0;j<8;j++)
            {
                usr[i].password += (33+rand()%(122-33+1));
            }
        cout<<usr[i].login<<endl<<usr[i].password<<endl<<endl;
    }





	return 0;
}
