#include <iostream>
#include <conio.h>

using namespace std;

    //Declaración de variables y matrices 
    int firstMatrix[100][100], filas, columnas,n,m;
    int secMatrix[100][100];

    //Declaración de funciones

    int ingresoFirstMatrix(int,int); //Realiza el registro de los datos en la primera matriz
    int copiadoMatrix(int,int); //Realiza el copia de datos de la primera matriz a la segunda
    int imprimirSecMatrix(int,int); //Imprime la segunda matriz con los datos copiados

int main(){
    
    cout<<"¿Cuantas filas deseas? ";
    cin>>filas;
    cout<<"¿Cuantas columnas deseas?";
    cin>>columnas;

    //Llamada a las funciones
    ingresoFirstMatrix(filas,columnas);
    copiadoMatrix(filas,columnas);
    imprimirSecMatrix(filas,columnas);

    getch(); //Impide terminar el compilador para ver la ejecución completa
    return 0;

}


int ingresoFirstMatrix(int filas,int columnas){

    for(n=0;n<filas;n++){
        for(m=0;m<columnas;m++){
            cout<<"Digita un numero: ["<<n+1<<"]["<<m+1<<"]";
            cin>>firstMatrix[n][m];
        }
    }
    return 0;
}


int copiadoMatrix(int filas,int columnas){

    for(n=0;n<filas;n++){
        for(m=0;m<columnas;m++){
            secMatrix[n][m]=firstMatrix[n][m];
        }
    }
    return 0;
}


int imprimirSecMatrix(int filas,int columnas){

    cout<<"\n\n";
    for(n=0;n<filas;n++){
        for(m=0;m<columnas;m++){
            cout<<secMatrix[n][m]<<" ";
        }
        cout<<"\n\n";
    }
    return 0;
}
