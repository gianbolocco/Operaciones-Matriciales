    #include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

/*Hacer un programa que pida dos matrices de NxN(cuadradas) y realice la suma*/

int main(){

int n, operacion;
cout<<"Ingrese la cantidad de filas y columnas tendran las matrices cuadradas: ";cin>>n;

int A[n][n], At[n][n];
int B[n][n], Bt[n][n];
int mR[n][n];


//Cargar Matriz A
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<"Ingrese el elemento "<<i<<j<<" de la matriz A: ";cin>>A[i][j];
    }
    cout<<endl;
}
//Cargar Matriz B
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<"Ingrese el elemento "<<i<<j<<" de la matriz B: ";cin>>B[i][j];
    }
    cout<<endl;
}

cout<<"/===MATRIZ A===/"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<"["<<A[i][j]<<"]";
    }
    cout<<endl;
}

cout<<"/===MATRIZ B===/"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<"["<<B[i][j]<<"]";
    }
    cout<<endl;
}

//Menu operacion:
cout<<"Que operacion desea realizar?"<<endl<<"1)SUMA"<<endl<<"2)RESTA"<<endl<<"3)MULTIPLICACION"<<endl<<"4)TRASPUESTA"<<endl;
cin>>operacion;

switch (operacion)
{
case 1:     for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){

                    mR[i][j] = A[i][j] + B[i][j];

                } 
            }

            //mostrar la matriz suma por pantalla

            cout<<"/===MATRIZ RESULTANTE===/"<<endl;

            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<"["<<mR[i][j]<<"]";
                }
                cout<<endl;
            }

            break;

case 2:     for(int i=0;i<n;i++){//resta
                for(int j=0;j<n;j++){

                    mR[i][j] = A[i][j] - B[i][j];

                }
            }

            //mostrar la matriz suma por pantalla

            cout<<"/===MATRIZ RESULTANTE===/"<<endl;

            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<"["<<mR[i][j]<<"]";
                }
                cout<<endl;
            }

            break;

case 3:     for(int i=0;i<n;i++){//Multiplicacion
                for(int j=0;j<n;j++){

                    mR[i][j]=0;

                    for (int k = 0; k < n; k++){
                        mR[i][j] = mR[i][j] + (A[i][k] * B[k][j]);
                        
                    }
                }
            }

            //mostrar la matriz suma por pantalla

            cout<<"/===MATRIZ RESULTANTE===/"<<endl;

            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<"["<<mR[i][j]<<"]";
                }
                cout<<endl;
            }

            break;

case 4:     

            for(int i=0;i<n;i++){//traspuesta A
                for(int j=0;j<n;j++){
                    
                 At[j][i]=A[i][j];

                }
            }

            cout<<"/===MATRIZ A TRASPUESTA===/"<<endl;

            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<"["<<At[i][j]<<"]";
                }
                cout<<endl;
            }

            for(int i=0;i<n;i++){//traspuesta B
                for(int j=0;j<n;j++){

                 Bt[j][i]=B[i][j];

                }
            }

            cout<<"/===MATRIZ B TRASPUESTA===/"<<endl;

            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<"["<<Bt[i][j]<<"]";
                }
                cout<<endl;
            }

            break;

default: cout<<"Introduzca una operacion valida.";
}

getch();
return 0;
}
