//Programa que lea 5 numeros e imprima los enteros mayor y menor en el grupo

#include <iostream>
#include <stdlib.h>
using namespace std;


    void ordenar_numeros(int arreglo[], int lon){
        int Temp;
         for(int i=0;i<lon;i++)
                for(int q=0;q<lon-1;q++)
                    if(arreglo[q]<arreglo[q+1]){
                        Temp=arreglo[q];
                        arreglo[q]=arreglo[q+1];
                        arreglo[q+1]=Temp;}

                 for(int i=0;i<lon;i++)
                    cout<<arreglo[i]<<endl;
						}
        main(){

        int lon,n;
        cout<<"Escriba ecuantos numeros ordenara: ";
        cin>>lon;
        int arr[5];
        for(int i=0;i<5;i++){
            cout<<"Escriba el numero "<<i+1<<": ";
            cin>>n;
            arr[i]=n;
            }
            cout<<endl<<"Numeros ordenados: "<<endl;
            ordenar_numeros(arr,lon);
            system("pause");
        }
