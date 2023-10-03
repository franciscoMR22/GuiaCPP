/*Vamos a realizar un ejercicio viendo el funcionamiento de una matriz ingresando n�meros*/

#include <iostream>
#include<conio.h>

using namespace std;

int matriz[100][100],filas,columnas; //matriz[filas][columnas]

int ingresaDatos(int,int);
int imprimeMatriz();

int main(){
    
    
    cout<<"Digite el n�mero de filas: ";
    cin>>filas;
    cout<<"Digite el n�mero de columnas: ";
    cin>>columnas;
    
    
    ingresaDatos(filas,columnas);
	cout<<"\n\n";
	imprimeMatriz();
}

//ESTA FUNCI�N REGISTRA LOS DATOS EN LA MATRIZ
int ingresaDatos(int filas,int columnas){ 
	
	 for(int i=0;i<filas;i++){
       for(int j=0;j<columnas;j++){
           cout<<"Digite un n�mero ["<<i+1<<"]["<<j+1<<"]";
           cin>>matriz[i][j];
       }  
    }
	
}

//ESTA FUNCI�N IMPRIME LOS DATOS INGRESADOS EN LA MATRIZ
int imprimeMatriz(){
	    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
        	cout<<"\t";
            cout<<matriz[i][j];
            cout<<"  ";
        }
           cout<<"\n\n"; //Esto es para realizar un salto entre cada terminaci�n de fila
    }
}
