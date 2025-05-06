#include <iostream>
using namespace std;

int main(){
    float temperatura = 0;
    string nombre ="";

    cout<<"Introduce tu nombre: "<<endl;//Pide al usuario que introduzca su nombre
    cin>>nombre;//Guarda el nombre en la variable nombre
   
    cout<<"Introduce la temperatura: "<<endl;//Pide al usuario que introduzca la temperatura
    cin>>temperatura;//Guarda la temperatura en la variable temperatura

    //Temperatura a comparar
    if (temperatura<15 || nombre=="Ruben"){
        //Si la temperatura es menor a 15 muestra el siguiente mensaje
        cout << "Hola Ruben, hace frio, utiliza sueter" << endl;
    }
    else if(temperatura>=15 && temperatura<25){
        //Si la temperatura es mayor o igual a 15 y menor a 25 muestra el siguiente mensaje
        cout << "El clima esta calido" << endl;
    }
    else {
        //Si la temperatura es mayor o igual a 15 muestra el siguiente mensaje
        cout << "Hace calor" << endl;
    }

    return 0;
}