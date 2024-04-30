#include<bits/stdc++.h>

using namespace std;

int main() {
// Una pila es una estructura de datos de entradas ordenadas tales que solo se introduce y elimina datos por un solo extremo.
// Las pilas son LIFO: Last In First Out
// Lo cual hace que el primero en haber entrado sea el mas dificil de acceder
// Los métodos de las pilas son:
// .push()  añade datos a la pila
// .pop()   elimina el elemento mas recientemente añadido
// .empty() verifica si la pila esta vacia
// .size()  devuelve el tamaño de la pila
// .top()   junto a un cout nos dara una el dato que esta en tope de la pila
	stack<int> pilita;   // Creamos una lista
	pilita.push(8);      // agregamos dos elementos a la pila
	pilita.push(1);
	cout <<"El tamaño de la pila es de: "<< pilita.size()<<endl;   // Imprimimos el tamaño de la pila 
	cout << "La pila contiene a:";
	while (!pilita.empty()) {   // con la ayuda de un while y si la pila no esta vacia 
      cout << " " << pilita.top();  // vemos cual esta primero y lo imprimimos
      pilita.pop();                 // y lo sacamos de la pila 
    }
    return 0;
}
