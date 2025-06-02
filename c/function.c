#include "function.h"

void calcul(int a, int b){
	printf("le resultat de l'operation a+b est %d\n",a+b);
	printf("le resultat de l'operation a-b est %d\n",a-b);
	printf("le resultat de l'operation a*b est %d\n",a*b);
	if(b!=0) printf("le resultat de l'operation a/b est %2.2f\n",a/(float)b);
	else puts("a/b n'est pas possible : Erreur division par 0!");
	printf("Le resultat de l'operation !a est %d\n",factoriel(a));
	printf("Le resultat de l'operation !b est %d\n",factoriel(b));

}

int factoriel(int n){
	if(n==0) return 1;
        else return n*factoriel(n-1);
}
