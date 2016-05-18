#include<iostream>
using namespace std;
//hacer 3 diferentes funciones para 2, para 3, y para 4
int suma2num(const int &a,int &b)  {return a+b;}	
int suma3num(const int &a,int &b,int &c)  {return a+b+c;}	
int suma4num(const int &a,int &b,int &c,int &d)  {return a+b+c+d;}		

int main () {
	int l=4,m=34,n=5,o=67;
	cout<<suma2num(l,m)<<endl;
	cout<<suma3num(l,m,n)<<endl;
	cout<<suma4num(l,m,n,o)<<endl;
	
	return 0;
}

