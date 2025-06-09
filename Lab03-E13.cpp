#include <iostream>
using namespace std;

int main() {
    int a, b, resultado = 0;

    cout<<"Ingrese el primer numero: ";
    cin>>a;
    cout<<"Ingrese el segundo numero: ";
    cin>>b;
    //Manejo de signos
    bool negativo = false;
    if(a < 0){
        a = -a;
        negativo = !negativo;
    }
    if(b < 0){
        b = -b;
        negativo = !negativo;
    }
    //Suma repetida
    for(int i = 0; i < b; i++){
        resultado += a;
    }
    if(negativo){
        resultado = -resultado;
    }
    cout<<"El resultado de la multiplicacion es: "<<resultado<<endl;
    return 0;
    
}
