// Bucket sort in C++
//https://www.programiz.com/dsa/bucket-sort
#include <iomanip>
#include <iostream>
using namespace std;

int rozm_tab = 12;
int ilosc_kub=6;
int rozm_kub=10;


struct element {
  int dane;
  struct element *nastepny;
};

void SortKub(int tab[]);
element *SortWstaw(element *glowa);
void wypisz(int tab[]);
void wypisz_kub(element *glowa);
int ind_kub(int wart);

// glowna funckja sortujaca kubelkowo
void SortKub(int tab[]) {
  int i, j;
  // tablica dynamiczna kubelkow
  element** kubelki;
  kubelki=new element* [ilosc_kub];


  // inicjalizacja pustych kubelkow
  for (i = 0; i < ilosc_kub; ++i) {
    kubelki[i] = NULL;
  }


  // wypelnianie kubelkow
  for (i = 0; i < rozm_tab; ++i) {
    element *biezacy;
    int pos = ind_kub(tab[i]);
    biezacy = new element;
    biezacy->dane = tab[i];
    biezacy->nastepny = kubelki[pos];
    kubelki[pos] = biezacy;
  }

  // wypisywanie zawartosci kubelka
  for (i = 0; i < ilosc_kub; i++) {
    cout << "Kubelek[" << i << "] : ";
    wypisz_kub(kubelki[i]);
    cout << endl;
  }

  // sortowanie przez wstawianie w danym kubelku
  for (i = 0; i < ilosc_kub; ++i) {
    kubelki[i] = SortWstaw(kubelki[i]);
  }

  cout << "-------------" << endl;
  cout << "Kubelek po sortowaniu" << endl;
  for (i = 0; i < ilosc_kub; i++) {
    cout << "Kubelek[" << i << "] : ";
    wypisz_kub(kubelki[i]);
    cout << endl;
  }

  // zscalanie posortowanych kubelkow do tablicy
  for (j = 0, i = 0; i < ilosc_kub; ++i) {
    element *elemnt;
    elemnt = kubelki[i];
    while (elemnt) {
      tab[j++] = elemnt->dane;
      elemnt = elemnt->nastepny;
    }
  }


  // usuwanie dynamicznych struktur
    for(int i=0;i<ilosc_kub;i++){
    delete[ ]kubelki[i] ;
    }
    delete[]kubelki;

  return;
}

// sortowanie przez wstawianie liczb w kubelku
element *SortWstaw(element *glowa) {
   element *k, *pom;
  if (glowa == 0 || glowa->nastepny == 0) {
    return glowa;
  }

  pom = glowa;
  k = glowa->nastepny;
  pom->nastepny = 0;
  while (k != 0) {
     element *ptr;
    if (pom->dane > k->dane) {
      element *tmp;
      tmp = k;
      k = k->nastepny;
      tmp->nastepny = pom;
      pom = tmp;
      continue;
    }

    for (ptr = pom; ptr->nastepny != 0; ptr = ptr->nastepny) {
      if (ptr->nastepny->dane > k->dane)
        break;
    }

    if (ptr->nastepny != 0) {
      element *tmp;
      tmp = k;
      k = k->nastepny;
      tmp->nastepny = ptr->nastepny;
      ptr->nastepny = tmp;
      continue;
    } else {
      ptr->nastepny = k;
      k = k->nastepny;
      ptr->nastepny->nastepny = 0;
      continue;
    }
  }
  return pom;
}

int ind_kub(int wart) {
  return wart / rozm_kub;
}

// wypisanie zawartosci kubelka
void wypisz(int tab[]) {
  int i;
  for (i = 0; i < rozm_tab; ++i) {
    cout << setw(3) << tab[i];
  }
  cout << endl;
}

void wypisz_kub(element *glowa) {
  element *akt = glowa;
  while (akt) {
    cout << setw(3) << akt->dane;
    akt = akt->nastepny;
  }
}


int main(void) {
  int tab[rozm_tab] = {42, 32, 33, 52, 37, 47, 51,25,12,3,8,10};

  cout << "Poczatkowa tablica: " << endl;
  wypisz(tab);
  cout << "-------------" << endl;

  SortKub(tab);
  cout << "-------------" << endl;
  cout << "Koncowa tablica: " << endl;
  wypisz(tab);
}
