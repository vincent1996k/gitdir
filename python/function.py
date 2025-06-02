def calcul(a, b):
	print("le resultat de l'operation a+b est ",a+b)
	print("le resultat de l'operation a-b est ",a-b)
	print("le resultat de l'operation a*b est ",a*b)
	if(b!=0):
		print("le resultat de l'operation a/b est ",a/b)
	else:
		print("a/b n'est pas possible : Erreur division par 0!")
	print("Le resultat de l'operation a! est ",factoriel(a))
	print("Le resultat de l'operation b! est ",factoriel(b))


def factoriel(n):
	if(n==0):
		return 1
	else:
		return n*factoriel(n-1)
