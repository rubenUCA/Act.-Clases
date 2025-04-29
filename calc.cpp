#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float num1, num2, resultado;//Here we declare the variables num1, num2 and resultado
    char opcion;//We declare the variable opcion in char because it will be used to store the option selected by the user

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout<< "a. Suma"<<endl;//We print the options for the user to choose from
    cout<< "b. Resta"<<endl;
    cout<< "c. Multiplicacion"<<endl;
    cout<< "d. Division"<<endl;
    cout<< "e. Potencia"<<endl;
    cout<< "Opcion: "<<endl;
    cin >> opcion;

    switch(opcion){//We use a switch to check the option selected by the user
        case 'a':
            resultado = num1 + num2;
            cout << "La suma es: " << resultado << endl;
            break;
        case 'b':
            resultado = num1 - num2;
            cout << "La resta es: " << resultado << endl;
            break;
        case 'c':
            resultado = num1 * num2;
            cout << "La multiplicacion es: " << resultado << endl;
            break;
        case 'd'://in this case we check if the second number is different from 0 to avoid division by zero
            if(num2 != 0){
                resultado = num1 / num2;
                cout << "La division es: " << resultado << endl;
            } else {
                cout << "Error: Division por cero no permitida" << endl;
            }
            break;
        case 'e':
            resultado = pow(num1, num2);//We use the pow function to calculate the power of num1 raised to num2
            cout << "La potencia es: " << resultado << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
    }

    return 0;
}