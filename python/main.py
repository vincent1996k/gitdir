#!/usr/bin/env python
from function import calcul

def main():
        print("main function")
        a = int(input("Entrez la valeur de a : "))
        print("a = ",a)
        b = int(input("Entrez la valeur de b : "))
        print("b = ",b)
        calcul(a,b)

if __name__ == "__main__":
        main()
