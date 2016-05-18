#include<iostream>
using namespace std;
/*Reescribir el ejercicio 4.5 y usar recursividad en vez de bucle*/
int suma(int num[],int max)
{
	if(max==1)
		return num[0];
	else	
		return num[max-1]+suma(num, max-1);
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
