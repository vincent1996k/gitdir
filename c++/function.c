#include "function.h"

void calcul(int a, int b){
	cout<<"le resultat de l'operation a+b est "<<a+b<<endl;
	cout<<"le resultat de l'operation a-b est "<<a-b<<endl;
	cout<<"le resultat de l'operation a*b est "<<a*b<<endl;
	if(b!=0) cout<<"le resultat de l'operation a/b est "<<a/(float)b<<endl;
	else cout<<"a/b n'est pas possible : Erreur division par 0!"<<endl;
	cout<<"Le resultat de l'operation a! est "<<factoriel(a)<<endl;
	cout<<"Le resultat de l'operation b! est "<<factoriel(b)<<endl;

}

long double factoriel(int n){
	if(n==0) return 1;
    else return n*factoriel(n-1);
}
