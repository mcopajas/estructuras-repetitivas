#include <iostream>
using namespace std;

int main(){
    int n;
    unsigned long long factorial = 1; 							//Manejamos "unsigned long long" para factoriales grandes
    int i = 1;
	//Entrada
    cout<<"Ingrese un numero entero positivo: ";
    cin>>n;
	//Proceso
    if(n < 0){
        cout<<"El numero debe ser positivo."<<endl;				//Salida N°01
    }else{
        while(i <= n){
            factorial *= i;
            i++;
        }
        cout<<"El factorial de "<<n<<" es: "<<factorial<<endl;	//Salida N°02
    }
    return 0;
    
}
