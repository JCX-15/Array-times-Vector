#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int M,N,asi;
    cout<<"Ingrese el tamaño de la matriz: "<<endl;
    cin>>M;
    cout<<"X";
    cin>>N;
    int A[M][N];
    vector <int> X(N);
    vector <int> Y(M);
    cout<<"Ingrese los datos de la matriz: "<<endl;
    //Llenado de la matriz
    for (int i=0; i<=M;i++){
        for (int j=0;j<=N;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Ingrese los datos del vector: ";
    //Llenado de la matriz
    for (int i=0; i<=N;i++){
        cin>>X[i];
        cout<<endl;
    }
    //Asignacion al nuevo vector
    for (int f=0;f<=M;f++){
    	asi=0;
		for (int r=0;r<=N;r++){
    		asi+=(A[f][r])*X[r];
		}
		Y[f]=asi;
	}
	//Impresion del nuevo vector
	cout<<"El vector resultante es: "<<endl;
	for (int z=0;z<=M;z++){
		cout<<Y[z]<<endl;
	}

    return 0;
}

