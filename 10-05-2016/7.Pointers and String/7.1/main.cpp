#include <iostream>

using namespace std;

int long_cadena(char *cadena)
{
	int i;
	for (i=0 ; *(cadena + i)!='\0'; i++);
	return i;
}

int main()
{
	char *cadena="HOLA MUNDO";
	cout <<long_cadena(cadena) << endl;
	return 0;
}
