#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

bool vis[10000]; // creacion de un arreglo que almacenara si un nodo fue visitado o no
vector<int> grafo[10000]; //creacion de un vector de tipo int
void dfs (int nodoInicial) {
    stack<int> pilita; // creacion de una pila
    pilita.push(nodoInicial); // introduciomos el nodo inicial a la pila
    while(!pilita.empty()){ // verificamos si la pila no esta vacia y con un while
        int nodoActual = pilita.top(); // obtenemos el primer elemento de la pila y lo guardamos en una variable llamada nodo actual
        pilita.pop();  // y luego lo eliminamos
        if(!vis[nodoActual]) {  // coon un if preguntamos si el nodo actual no ha sido visitado
            vis[nodoActual] = true; // entonces lo marco como visitado
            for(int i = 0; i < grafo[nodoActual].size(); i++ ){  // con un for vamos a todos los nodos amigos de el nodo actual
                int amigo = grafo[nodoActual][i]; // obtenemos al nodo adyacente que en un nodo amigo
                if(!vis[amigo]) { // con un if preguuntamos si el amigo no ha sido visitado
                    pilita.push(amigo);  // entonces ponemos al amigo a la cola
                } 
            }   
        }
    }
}


int main() {
    input;
    int nodos, aristas;  // declaramos dos variables que nos indican el numero de nodos y aristas del grafo que queremos analizar
    cin>>nodos>>aristas; // leemos los valores
    for(int i = 0 ; i < aristas; i++ ) {  // con un for vamos a las aristas del grafo
        int nodoInicial, nodoFinal;  // creamos dos variables para el nodo  inicial y fianl
        cin>>nodoInicial>>nodoFinal;  // los leemos
        grafo[nodoInicial].push_back(nodoFinal);  // y hace que el nodo final sea adyacente de nodo inicial
    }
    int S,T; // creamos dos variables para preguntar si hay un camino de S a T
    cin>>S>>T;  // leemos las variables
    dfs(S);  // llamamos a la funcion dfs
    if(vis[T]) { // con un if pregunttamos si logro llegar a T
        cout<<"Si lo podria conocer"<<endl;  // entonces hay un camino de S a T
    } else {
        cout<<"No lo podria conocer"<<endl;  // entonces no hay un camino de S a T
    }
}
