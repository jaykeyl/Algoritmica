#include<bits/stdc++.h>
using namespace std;
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)


int main() {
    int numNodos;  // se pide el numero de nodos del grafo
    cin >> numNodos;   // se lee el numero de nodos

    int grafo[numNodos][numNodos];   // se crea la matriz que vamos a utilizar
    memset(grafo, 0, sizeof(grafo)); // llenamos la matriz con ceros

    int numAristas;   // se pide el numero de aristas del grafo
    cin >> numAristas;   // se leen el numero de aristas

    for (int i = 0; i < numAristas; i++) {   // con un for loop vamos revisando las posciones 
        int nodoOrigen, nodoDestino;         // hasta encontrar la correcta 
        cin >> nodoOrigen >> nodoDestino;    // y poder poner un uno a las conexiones
        grafo[nodoOrigen][nodoDestino] = 1;
    }

    for (int i = 0; i < numNodos; i++) {   // con este for anidado podemos imprimir la matriz
        for (int j = 0; j < numNodos; j++) {
            cout << "[" << grafo[i][j] << "]";
        }
        cout << endl;
    }

    return 0; 
}
