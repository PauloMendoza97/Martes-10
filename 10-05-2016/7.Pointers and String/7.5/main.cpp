#include<iostream>
using namespace std;

/*Supongamos que la siguiente declaración
de variable ya se ha hecho:
char * oddOrEven = " Never odd or even ";*/

int main()
{
	char *nthCharPtr = &oddOrEven[5];         //pregunta 1
	nthCharPtr -= 2;                          //pregunta 2
	cout << *nthCharPtr << "\n";              //pregunta 3
	char **pointerPtr = &nthCharPtr;          //pregunta 4
	cout << *pointerPtr << "\n";              //pregunta 5
	cout << **pointerPtr << "\n";             //pregunta 6
	nthCharPtr += 1;                          //pregunta 7
	cout << nthCharPtr - oddOrEven << endl;   //pregunta 8
	
	return 0;
}
