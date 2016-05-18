#include<iostream>
using namespace std;
/*Una sola funcion con bucle capáz de sumar un numero
arbitrario de numeros enteros*/
int suma(int num[],int max)
{
	int cont=0;
	
	for(int i=0;i<max;i++)
	{
		cont += num[i];
	}
	return cont;
}
int main () 
{
	int max,result;
	cout<<"Cantidad de elementos a sumar: ";
	cin>>max;
	int a[max];
	for(int i=0;i<max;i++)
	{
		cout<<"Ingrese sumando "<<i+1<<" : "<<endl;
		cin>>a[i];
	}
	result=suma(a,max); 
	cout<<"La suma es: "<<result;
	return 0;
}

