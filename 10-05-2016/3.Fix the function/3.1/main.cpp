/*Codigo a corregir
#include <iostream>
using namespace std;
int main()
{
	printNum(35);
	return 0;
}

void printNum (int number){ cout << number;}
*/

/*Primera solucion*/

#include <iostream>
using namespace std;

void printNum (int number);

int main(){
	
	printNum(35);
	
	return 0;
	
}

void printNum (int number){
	
	cout << number;
	
}

/*Segunda solucion

#include <iostream>
using namespace std;
void printNum (int number){cout << number;}

int main()
{
	printNum(35);
	return 0;
}*/
