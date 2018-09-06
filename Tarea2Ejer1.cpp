#include <iostream>
using namespace std;
int main ()
{

    int num, facto=1;                                               // Variables del primer problema
    int base, potencia, result=1;                                   //variables del segundo problema
    int paisA=100, paisB=200, i=1, poblaA=0, poblaB=0;              //variables del tercer problema

    //Ejercicio 1
    cout << "********Ejercicio 1********" <<endl;
    cout <<endl;
    cout << " Numero para sacar su factorial: ";
    cin >> num;
    for (int i=num; i>0; i--)

    {
        facto = facto * i;
    }
    cout << " Factorial de " << num << "! es igual a " << facto <<endl;
    cout <<endl;

    //Ejercicio 2
    cout << " ******** Ejercicio 2 ********* " <<endl;
    cout <<endl;
    cout << " Numero base: ";
    cin >> base;
    cout << " Potencia a elevar: ";
    cin >> potencia;

    for (int i = 0; i < potencia ; i++)
    {
        result = result * base;
    }
    cout << " Resultado de " << base << "^" << potencia << " es igual a " <<result << endl;
    cout <<endl;

    //Ejercicio 3
    cout << "********Ejercicio 3********" << endl;
    cout << endl;

    while (paisA < paisB)
    {

        cout << " Anio: " << i <<endl;
        poblaA = (paisA * 0.06) + paisA;
        paisA = poblaA;
        poblaB = (paisB * 0.03) + paisB;
        paisB = poblaB;
        i++;


        cout << " Poblacion A: " << poblaA <<endl;
        cout << " Poblacion B: " << poblaB <<endl;

    }
    cout << " Anios que transcurrieron: " << i << endl;
    cout << " Poblacion A " << poblaA <<endl;
    cout << " poblacion B " << poblaB <<endl;


    return 0;
}
