/*Ejercicio #15 Realice un programa que solicite al usuario ingresar un numero entero entre el 1 y el 100.
        El programa debe generar un numero aleatorio en ese mismo rango [1-100], e indicarle al usuario si el numero que digito es menor
        o mayor al numero aleatorio, asi hasta que lo adivine y por ultimo mostrarle el numero de intentos que le llevo.*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
//enum definicion [_Positivo = 1, _Negative = 0];


int main()
{

    int _tryouts = 0,get_number;
    int _rand_values;
    string _response;


        cout << "Piense un numero que se encuentra en el rango del 1 - 100" << endl;
        //getch();

    Startagain:
	srand(time(NULL)); //Generara numero aleatorio;
	_rand_values = 1 + rand()%((100+1)-1); //Operacion Para generar rand number.

	do{

		cout << "Ingrese un numero: "; cin >> get_number;

		if(get_number>_rand_values)
		{
			cout << "\nDigite un numero menor\n";
		}
		if(get_number<_rand_values)
		{
			cout << "\nDigite un numero mayor\n";
		}

		_tryouts++;
      }while(get_number != _rand_values);

	cout << "\nFelicidades has ingresado el numero generado " << get_number << endl;
	cout << "\nNumero de intentos hasta lograr exito: "<< _tryouts << endl;
	cout << "Test line " << endl;


    return 0;
}
