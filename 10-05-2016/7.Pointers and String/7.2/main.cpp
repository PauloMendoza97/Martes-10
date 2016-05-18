#include <iostream>

using namespace std;

void swap(int &x, int &y)
{
	int temp;
	
	temp = x;
	x = y;
	y = temp;
}

int main(){
	
	int word1=16,word2=67;
	
	cout<<"Numeros: "<<word1<< ", " <<word2<<endl;
	swap(word1,word2);
	cout<<"Valores intercambiados: "<<word1<< ", " <<word2<<endl;
	
	return 0;
	
}
