#include <iostream>
using namespace std;

int multiplicacion(int a, int b){
    int resultado = 0;
    bool negativo = false;

    if(a < 0){
        a = -a;
        negativo = !negativo;
    }
    if(b < 0){
        b = -b;
        negativo = !negativo;
    }

    while(b > 0){
        if (b % 2 == 1) {
            resultado += a;
        }
        a = a * 2;
        b = b / 2;
    }

    if (negativo) {
        resultado = -resultado;
    }
    return resultado;
}

int main(){
    int a, b;
    cout<<"Ingrese el primer numero: ";
    cin>>a;
    cout<<"Ingrese el segundo numero: ";
    cin>>b;

    int resultado = multiplicacion(a, b);
    cout<<"El resultado de la multiplicacion es: "<<resultado<<"."<<endl;
    return 0;
}
