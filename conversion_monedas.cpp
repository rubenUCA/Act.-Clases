/*Conversión de Monedas
Pide una opción (1 = USD a EUR, 2 = USD a JPY, 3 = USD a GBP) y realiza la conversión.*/
#include <iostream>
using namespace std;

int main()
{
    int opcion;
    float cantidad, resultado;//In this case we declare the variables cantidad and resultado as float because they will be used to store decimal numbers
    float USD_EU = 0.88;    // Conversion rate from USD to EUR
    float USD_JPY = 142.08; // Conversion rate from USD to JPY
    float USD_GBP = 0.75;   // Conversion rate from USD to GBP

    cout << "Seleccione la opción de conversión:" << endl;
    cout << "1. USD a EUR" << endl;
    cout << "2. USD a JPY" << endl;
    cout << "3. USD a GBP" << endl;
    cout << "Opción: ";
    cin >> opcion;
    cout << "Ingrese la cantidad a convertir: ";
    cin >> cantidad;

    switch(opcion){//We use a switch to check the option selected by the user
        case 1:
            resultado = cantidad * USD_EU; //Here we multiply the amount by the conversion rate to get the result
            cout << cantidad<< " USD son " << resultado << " EUR" << endl;
            break;
        case 2:
            resultado = cantidad * USD_JPY;//Here we convert the amount to JPY
            cout << cantidad<< " USD son " << resultado << " JPY" << endl;
            break;
        case 3:
            resultado = cantidad * USD_GBP;//Here we convert the amount to GBP
            cout << cantidad<< " USD son " << resultado << " GBP" << endl;
            break;
        default://If the user enters an invalid option, we print an error message
            cout << "Opción no válida" << endl;
            break;
    }
    return 0;
}