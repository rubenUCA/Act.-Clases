#include <iostream>
using namespace std;

int main()
{
    double salario, seguro, AFP, renta, Total, salarioNeto;
    int opcion;

    cout << " Welcome to the Discount Calculation Program" << endl;
    cout << "For starting the program, please enter your salary: " << endl;
    cin >> salario;

    cout << "Select the type of discount you want to calculate" << endl;
    cout << "________________________________________________" << endl;
    cout << "|             DISCOUNT CALCULATION             |" << endl;
    cout << "| 1. Social Security                           |" << endl;
    cout << "| 2. AFP                                       |" << endl;
    cout << "| 3. Income Tax                                |" << endl;
    cout << "| 4. All Discounts                             |" << endl;
    cout << "| 5. Exit                                      |" << endl;
    cout << "|______________________________________________|" << endl;

    cout<<"Opction: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        if (salario <= 1000)
        {
            seguro = salario * 0.03;
            cout << "The amount of the social security discount is: $" << seguro << endl;
        }
        else if (salario > 1000)
        {
            seguro = 1000 * 0.03;
            cout << "The amount of the social security discount is: $" << seguro << endl;
        }
        break;
    case 2:
        AFP = salario * 0.0725;
        cout << "The amount of the AFP discount is: $" << AFP << endl;
        break;
    case 3:
        // Calcular seguro y AFP primero
        if (salario <= 1000)
        {
            seguro = salario * 0.03;
        }
        else
        {
            seguro = 1000 * 0.03;
        }
        AFP = salario * 0.0725;

        // Calcular salario neto antes de reta
        salarioNeto = salario - seguro - AFP;

        // Calcular renta sobre el salario neto
        if (salarioNeto <= 472.99)
        {
            renta = 0;
        }
        else if (salarioNeto >= 473 && salarioNeto <= 895.24)
        {
            renta = (salarioNeto) * 0.1;
        }
        else if (salarioNeto >= 895.25 && salarioNeto <= 2038.10)
        {
            renta = (salarioNeto) * 0.2;
        }
        else if (salarioNeto >= 2038.11)
        {
            renta = (salarioNeto) * 0.3;
        }

        cout << "The amount of the income tax discount is: $" << renta << endl;
        break;
    case 4:
        if (salario <= 1000)
        {
            seguro = salario * 0.03;
        }
        else
        {
            seguro = 1000 * 0.03;
        }
        cout << "The amount of the social security discount is: $" << seguro << endl;

        AFP = salario * 0.0725;
        cout << "The amount of the AFP discount is: $" << AFP << endl;

        salarioNeto = salario - seguro - AFP;

        if (salarioNeto <= 472.99)
        {
            renta = 0;
        }
        else if (salarioNeto >= 473 && salarioNeto <= 895.24)
        {
            renta = (salarioNeto - 472) * 0.1;
        }
        else if (salarioNeto >= 895.25 && salarioNeto <= 2038.10)
        {
            renta = (salarioNeto) * 0.2;
        }
        else if (salarioNeto >= 2038.11)
        {
            renta = (salarioNeto) * 0.3;
        }
        cout << "The amount of the income tax discount is: $" << renta << endl;

        Total = seguro + AFP + renta;
        cout << "The total amount of the discounts is: $" << Total << endl;

        salarioNeto = salario - Total;
        cout << "The net salary after all discounts is: $" << salarioNeto << endl;
        break;
    case 5:
        cout << "Exiting the program. Goodbye!" << endl;
        break;
    default:
        cout << "Invalid option. Please try again." << endl;
    }

    cout << "Thank you for using the program!" << endl;

    return 0;
}
