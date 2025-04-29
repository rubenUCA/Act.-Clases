#include <iostream>
using namespace std;

int main()
{

    int res, n; //We declare the variables res and n
    cout << "Hola, podrías ingresar un número entero?" << endl;//We ask the user to enter a number
    cin >> n;//We read the number entered by the user

    res = n % 2;//We calculate the remainder of the division of n by 2

    switch (res)//We use a switch to check if the number is even or odd
    {
    case 1://If the remainder is 1, it means that the number is odd
        cout << n << " es un numero impar" << endl;
        break;
    case 0://If the remainder is 0, it means that the number is even
        cout << n << " es un numero par" << endl;
        break;
    default://If the number is not an integer, we print an error message
        cout << "datos incorrectos" << endl;
        break;
    }
    return 0;
}