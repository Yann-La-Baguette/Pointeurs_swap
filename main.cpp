#include <iostream>

using namespace std;

char jour1[]={"lundi"};
char jour2[]={"mardi"};
char jour3[]={"mercredi"};
char jour4[]={"jeudi"};
char jour5[]={"vendredi"};
char jour6[]={"samedi"};
char jour7[]={"dimanche"};

void minMax(int tab[], int tailleTableau, int *min, int *max){
    *min = 15406880;
    *max = 0;
    for(int i=0 ; i<tailleTableau ; i++){
        if(tab[i]<*min){
            *min = tab[i];
        }
        if(tab[i]>*max){
            *max = tab[i];
        }
    }
}

void affJour(char *j){
    cout<<"Nous sommes "<< j <<endl;
}

void echange(int *i, int *j){
    int k;
    k = *i;
    *i = *j;
    *j = k;
}

double nombreA(char j[]){
    double nbA = 0;
    char *ptrJ = j;
    int tailleJ = sizeof(j)/sizeof(char) - 2;

    for(int i=0 ; i<tailleJ ; i++){
        if(*ptrJ == 'a'){
            nbA++;
        }
        ptrJ+=1;
    }
    return nbA;
}

int main()
{
    int x=1; int y = 2;
    cout<<"x= "<< x <<" , y = "<< y <<endl;
    echange(&x,&y);
    cout<<"x = "<< x << " , y = "<< y <<endl;


    char *p;
    p = jour5;
    affJour(p);


    int tab[4] = {8, 7, 5, 1};
    int tailleTableau = sizeof(tab)/sizeof(int);
    int min, max;
    minMax(tab, tailleTableau, &min, &max);
    cout<<"Min = "<<min<<"  Max = "<<max<<endl;


    double nbA = nombreA(jour6);
    cout<< "Il y a "<<nbA<<" A dans le mot "<<jour6<<endl;

    return 0;
}
