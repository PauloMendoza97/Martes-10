#include<iostream>
using namespace std;

int sum_int(const int &x,const int &y){return x+y;}
double sum_double(const double &x,const double &y){return x+y;}
int main () {
	int a=sum_int(24,67);
	double b=sum_double(45.7,6.8);
    cout<<"Suma de etneros 24 y 67 = "<<a<<endl;
	cout<<"Suma de etneros 45.7 y 6.8 = "<<b<<endl;
	return 0;
}

