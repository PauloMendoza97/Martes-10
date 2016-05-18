#include<iostream>
using namespace std;
const int fil = 2;
const int col = 3;

void transpuesta(const int input[][col], int output[][fil])
{
	cout<<"\nTRANSPUESTA DE LA MATRIZ"<<endl;
	for (int i=0;i<col;i++)
	{
		for(int j=0;j<fil;j++)
		{
			output[i][j] = input[j][i];
			cout<<"  "<<output[i][j];
		}
		cout<<endl;
	}
}
int main ()
{
	cout<<"\n\tINGRESE LOS VALORES DE LA MATRIZ 2x3\n"<<endl;
	int matriz[fil][col];
	for (int i=0;i<fil;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<"Ingrese el valor ("<<i+1<<","<<j+1<<") de la matriz: ";
			cin>>matriz[i][j];
			cout<<endl;
		}
	}
	
	int matriz_tran[col][fil];
	transpuesta(matriz,matriz_tran);
	return 0;
}

