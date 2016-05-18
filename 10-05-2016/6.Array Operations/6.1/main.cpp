#include<iostream>
using namespace std;
//hacer una funcion sin retorno que imprima una cadena de enteros
void printarray(int array[],int cant)
{
	cout<<"["<<array[0];
	for(int i=1;i<cant;i++)
	{
		cout<<","<<array[i];
	}
	cout<<"]";
}
	
int main ()
{
	int n;
	cout<<"Ingrese la cantidad de elemenos de la matriz: ";
	cin>>n;
	int array[n];
	for (int i=0;i<n;i++)
	{
		cout<<"Ingrese un numero: "<<endl;
		cin>>array[i];
	}
	printarray(array,n);
	
	return 0;
}

