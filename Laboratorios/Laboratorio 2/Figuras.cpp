//Ejercicio  2.21 del libro "Como programar en C++ (nov. edicion)"
//Mostrar figuras con asteriscos

#include <iostream>
using namespace std;
main()
{
    int op;
    for(;;){
    cout<<"ingrese una opcion: \n";
    cout<<"1.Cuadrado \n";
    cout<<"2.Ovalo \n";
    cout<<"3.Flecha \n";
    cout<<"4.Rombo \n";
    cin>>op;
    switch(op)
    {
        case 1:{
            cout<<"* * * * * * \n";
            cout<<"*         * \n";
            cout<<"*         * \n";
            cout<<"*         * \n";
            cout<<"*         * \n";
            cout<<"* * * * * * \n\n";
            break;
        }
        case 2:{
            cout<<"  * * * * \n";
            cout<<"*         * \n";
            cout<<"*         * \n";
            cout<<"*         * \n";
            cout<<"*         * \n";
            cout<<"  * * * * \n\n";
            break;
        }
        case 3:{
            cout<<"    *   \n";
            cout<<"   ***  \n";
            cout<<"  ***** \n";
            cout<<"    *   \n";
            cout<<"    *   \n";
            cout<<"    *   \n\n";
            break;
        }
        case 4:{
            cout<<"    *        \n";
            cout<<"   * *       \n";
            cout<<"  *   *      \n";
            cout<<" *     *     \n";
            cout<<"  *   *      \n";
            cout<<"   * *       \n";
            cout<<"    *        \n\n";
            break;
        }
    }
    }
}
