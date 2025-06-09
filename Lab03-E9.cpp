#include <iostream>
using namespace std;

int main(){
    int numero;
    int contador = 0;
	//Entrada
    cout<<"Ingrese un numero positivo: ";
    cin>>numero;
	//Proceso
    if(numero <= 0){
        cout<<"El numero debe ser positivo."<<endl;				//Salida N°01
    }else{
        while(numero > 0){
            numero = numero / 10;
            contador++;
        }
        cout<<"La cantidad de digitos es: "<<contador<<endl;	//Salida N°02
    }
    return 0;
    
}
