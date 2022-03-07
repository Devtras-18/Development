/*Ejercicio #15 Realice un programa que solicite al usuario que piense un numero entero entre el 1 y el 100.
        El programa debe generar un numero aleatorio en ese mismo rango [1-100], e indicarle al usuario si el numero que digito es menor
#include<iostream>
        o mayor al numero aleatorio, asi hasta que lo adivine y por ultimo mostrarle el numero de intentos que le llevo.*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include <cstddef>

using namespace std;
//enum definicion [_Positivo = 1, _Negative = 0];


int main()
{

    int _tryouts = 0;
    int _rand_values;
    string _response;


        cout << "Piense un numero que se encuentra en el rango del 1 - 100" << endl;
        //getch();

    Startagain:
    _rand_values = 1 + rand() % (100-1);

        cout << "Did you get the correct number?\n\r"<< _rand_values << " \n\rPlease enter Yes [Y] or No [N]: " << endl;
        getline(std::cin,_response);


        if(_response.find_first_not_of("Y"))
        {
            _tryouts+=1;

        }
        else
        {
           goto Startagain;
        }



    return 0;
}
