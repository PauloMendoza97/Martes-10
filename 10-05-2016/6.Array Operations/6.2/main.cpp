#include<iostream>
using namespace std;
/*hacer una funcion sin retorno que imprima una cadena
de enteros, pero a la inversa*/
void printarray(int array[],int cant)
{
	cout<<"["<<array[cant-1];
	for(int i=cant-2;i>=0;i--)
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

