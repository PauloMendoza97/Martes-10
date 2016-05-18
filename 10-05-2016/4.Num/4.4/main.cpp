#include<iostream>
using namespace std;

//una sola funcion capas de sumar 2, 3 o 4 numeros enteros
int suma(const int &a,int &b,int c=0,int d=0)
{
	int s,c1=c,d1=d;
	s=a+b+c1+d1;
	return s;	
	
}
int main () {
	int l=4,m=34,n=5,o=67;
	cout<<suma(l,m)<<endl;
	cout<<suma(l,m,n)<<endl;
	cout<<suma(l,m,n,o)<<endl;
	
	return 0;
}
