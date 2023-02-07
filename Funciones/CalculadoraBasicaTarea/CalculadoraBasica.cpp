#include <iostream>

using namespace std;
int main(){
    int num1, num2, opcion, resultado;
    cout<<"Ingrese el primer numero ";
    cin>>num1;
    cout<<"Ingrese el segundo numero ";
    cin>>num2;

    cout<<" "<<endl;
    cout<<"Ingrese una operacion"<<endl;
    cout<<" "<<endl;
    cout<<"1)Suma"<<endl;
    cout<<"2)resta."<<endl;
    cout<<"3)multiplicacion."<<endl;
    cout<<"4)division."<<endl;
    cout<<" "<<endl;
    cin>>opcion;
    switch(opcion){
        case 1: resultado = num1 + num2;
            break;
        case 2: resultado = num1 - num2;
            break;
        case 3: resultado = num1 * num2;
            break;
        case 4  : resultado = num1 / num2;
            break;
        default:
            break;
    }
    cout<<" "<<endl;
    cout<<"El resultado es: "<<resultado<<endl;
    system("pause");
    return 0;
}
