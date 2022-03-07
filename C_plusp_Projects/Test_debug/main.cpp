// 13 .-Hacer un programa que realice la serie de fibonacci -> 1 1 2 3 5 8 13.. N.
#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()
{
    int n_0 = 0, n_1=1;
    int _serie_interacion, _suma_Act, val_act, val_ant;
    int n_series;
cout << "Bienvenido a tu programa generador de series fibonacci,"
    << "para iniciar por favor, ingresa un valor para 'n'.\n"
    <<"Nota: Los valores para 'n' deben ser numeros natural."<<endl;
cin >> n_series;
cout << "Para 'n', con valor de " << n_series << " la serie se muestra de la siguiente forma." << endl;

for(_serie_interacion = 0;_serie_interacion <=n_series ;_serie_interacion++)
{
    if(_serie_interacion == 0)
    {
        /*Sumatoria total inicio de serie*/
        _suma_Act = n_0 + n_1;
        val_ant = n_1;  /*Asignacion de valor anterior de sumatoria*/
        val_act = _suma_Act; /*Asignacion de valor inmediato actual de sumatoria*/
	int Val_set_new = val_act;


    cout << "Sumatoria de serie " << _suma_Act << " En posicion: " << _serie_interacion << endl;

    }
    else
    {
        /*Valor actual de sumatoria*/
        _suma_Act = val_act + val_ant;
        val_ant = val_act; /*Asignacion de valor anterior de sumatoria*/
        val_act = _suma_Act; /*Asignacion de valor inmediato actual de sumatoria*/

    cout << "Sumatoria de serie " << _suma_Act << " En posicion: " << _serie_interacion << endl;
    }

}
    return 0;
}
