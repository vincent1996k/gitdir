#include "function.h"

void calcul(int a, int b){
	printf("le resultat de l'operation a+b est %d\n",a+b);
	printf("le resultat de l'operation a-b est %d\n",a-b);
	printf("le resultat de l'operation a*b est %d\n",a*b);
	if(b!=0) printf("le resultat de l'operation a/b est %d\n",a/b);
	else puts("a/b n'est pas possible : Erreur division par 0!");
}
