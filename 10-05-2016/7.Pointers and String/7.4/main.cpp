#include <iostream>

using namespace std;

void swap(int **x, int **y)
{
	int *temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(){
	
	int word1=16,word2=67;
	int *ptr1=&word1,*ptr2=&word2;
	
	cout<<"Numeros: "<<*ptr1<< "," <<*ptr2<<endl;
	swap(&ptr1,&ptr2);
	cout<<"Valores intercambiados: "<<*ptr1<< "," <<*ptr2<<endl;
	
	return 0;
	
}
