#include <iostream>
using namespace std;

/*Comentario de Sergio*/

/*Comentario de Wilmer*/

/*Comentario Veronica*/
int main(int argc, char *argv[]) {
	int numero;
	do{
		cout<<"INGRESE UN NUMERO: ";
		cin>>numero;
		
	}while((numero<1) || (numero>10));
	
	for(int i=1; i<=10; i++){
		cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
	}
	return 0;
}
