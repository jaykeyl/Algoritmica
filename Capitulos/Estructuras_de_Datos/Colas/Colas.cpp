#include<bits/stdc++.h>

using namespace std;

int main() {
	// Una cola es una estructura de datos dinamicos que almacena elementos en una lista y permite acceder a los datos por uno de los dos extremos de la lista. 
	// Un elemento se inserta en la cola (parte final) de la lista y se suprime o elimina por la frente (parte inicial, cabeza) de la lista.
	// Las colas son FIFO: First In First out
	// Esto hace que podamos acceder a los primeros datos rapidamente.
	// Los metodos de la cola son:
	// .empty()   verifica si la cola esta vacia
	// .size()    retorna el tamaño de la cola
	// .push()    añade un nuevo elemento al final de la cola
	// .pop()     elimina el primer elemento de la cola
	// .front()   retorna el valor del elemento que esta al principio de la cola
	// .back()    retorna el valor del elemento que esta al final de la cola
   queue<int> colita;   //creamos una cola
    colita.push(2);   //agregamos cuatro elementos a la cola
    colita.push(8);
    colita.push(2);
    colita.push(8);
    cout<<"El primer elemento de la cola es: "<<colita.front()<<endl;   //vemos que elemento es el primero
    cout<<"El ultimo elemento de la cola es: "<<colita.back()<<endl;    //vemos que elemento esta al final
    cout<<"El tamaño de la cola es: " << colita.size()<<endl;         //imprimimos el tamaño de la cola
    cout << "Cola de enteros:";   
    while (!colita.empty()) {   // con un while preguntamos si la cola no esta vacia 
        cout << " " << colita.front();   //vemos el primer elemento y lo imprimimos
        colita.pop();                    //y luego lo eliminimamos
    }
    cout << endl;

    return 0;
}
