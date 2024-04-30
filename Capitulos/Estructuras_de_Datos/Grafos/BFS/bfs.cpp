#include<bits/stdc++.h>  
using namespace std;  

#define input freopen("in.txt","r",stdin)  
#define output freopen("out.txt","w",stdout)  

bool vis[10000];  // creacion de un arreglo tipo boolean
vector<int> grafo[10000];  // cracion de un vector de tipo int
int niveles[10000];  // creacion de un arreglo donde almacenamos los niveles de los nodos

void bfs (int nodoInicial) {  
    queue<int> colita;  // creamos una cola
    colita.push(nodoInicial);  // y agregamos el nodo inical a la cola
    niveles[nodoInicial] = 0;  // ya que es el nodo inicial entonces su nivel es 0
    while(!colita.empty()){  // con la ayuda de un whila verificamos que la cola no este vacia
        int nodoActual = colita.front();  // obtemos el primer elemento de la cola y lo convertimos en el nodo actual
        colita.pop();                     // y lo eliminamos
        if(!vis[nodoActual]) {  // con un if preguntamos si el nodo actual no ha sido visitado
            vis[nodoActual] = true;  // entonces lo marca como visitado
            for(int i = 0; i < grafo[nodoActual].size(); i++ ){  //con un for revisamos a sus amigos o vecinos
                int amigo = grafo[nodoActual][i];  // obtenemos un amigo, que ees un nodo adyacente
                niveles[amigo] = niveles[nodoActual] + 1;  // asigna el nivel del amigo que es el nivel del nodo actual mas 1
                if(!vis[amigo]) {  // y con un if pregunta si el nodo amigo no ha sido visitado
                    colita.push(amigo);  // y lo agrega a la cola
                } 
            }   
        }
    }
}

int main() {  
    input;  
    int nodos, aristas;  // Declaramos variables para guardar los nodos y aristas
    cin>>nodos>>aristas;  // se lee el numero de nodos y aristas
    for(int i = 0 ; i < aristas; i++ ) {  // con un for va por las aristas del grafo
        int nodoInicial, nodoFinal;  // declara variables para el nodoInicial y el nodo final
        cin>>nodoInicial>>nodoFinal;  // los lee
        grafo[nodoInicial].push_back(nodoFinal);  // pone al nodo final como aadyacente 
    }
    int S,T;  // variables para preguntar si hay un camino desde un nodo S a un nodo T
    cin>>S>>T;  // lee las variables
    bfs(S);  // llama a nuestra funcion bfs
    if(vis[T]) {  // con un if preguntamos si el nodo T fue visitado en algun momento al ejecutar bfs
        cout<<"Si lo podria conocer"<<endl;  // entonces hay un camino que llega de S a T
    } else {
        cout<<"No lo podria conocer"<<endl;  // entonces no hay un camino que llega de S a T
    }
}
