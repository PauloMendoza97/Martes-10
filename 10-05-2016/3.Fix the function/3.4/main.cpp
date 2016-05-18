/*Codigo a corregir
# include <iostream>
# include <cstdlib>
using namespace std;

int difference(const int x, const int y){

int diff = abs(x - y); // abs(n) retorna el valor absoluto de n

}

int main(){

cout << difference(24, 1238);

return 0;

}
*/

/*Correccion*/

# include <iostream>
# include <cstdlib>

using namespace std;

int difference(const int x, const int y){
	
	int diff = abs(x - y); // abs(n) retorna el valor absoluto de n
	
	return diff;
	
}

int main(){
	
	cout << difference(24, 1238);
	
	return 0;
	
}
