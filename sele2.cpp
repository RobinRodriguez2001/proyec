#include <iostream>

using namespace std;

main(){
	/*int i5;
	while(i<5)(
	cout<<"while: "<<i<<endl;
	i++;*/

	char respuesta='s';
	while(respuesta=='s' || respuesta=='S'){
		cout<<"Desea ingresar otro valor (s/n)";
		cin>>respuesta;
	}
	system("pause");
}
