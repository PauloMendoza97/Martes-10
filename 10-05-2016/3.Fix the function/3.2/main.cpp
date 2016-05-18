/*Codigo a corregir
#include <iostream>
using namespace std;
void printNum(){

cout<<number; 

};

int main () {

int number = 35;

printNum ( number );

return 0;

}
*/

/*primera solucion
#include <iostream>
using namespace std;
void printNum(int number){

cout<<number; 

}

int main () {

int number = 35;

printNum(number);

return 0;

}
*/

/*segunda solucion- Esta es preferible, ya que es mas sencillo modiciar el valor a imprimir*/

#include <iostream>
using namespace std;

int number = 35;

void printNum(){
	
	cout<<number; 
	
}

int main () {
	
	printNum();
	
	return 0;
	
}
