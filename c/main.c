#include "function.h"




int main(int argc, char* argv){
	puts("main function");
        int a,b;
        puts("Entrez la valeur de a : ");
        scanf("%d",&a);
        printf("a = %d\n",a);
	puts("Entrez la valeur de b : ");
        scanf("%d",&b);
        printf("b = %d\n",b);
	calcul(a,b);

	return 0;
}
