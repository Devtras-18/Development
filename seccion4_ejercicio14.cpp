/*Ejercicio 14.- En una clase de 5 alumnos se han realizado tres examenes y se requiere determinar el numero de:
        a)Alumnos que aprobaron todos los examenes.
        b)Alumnos que aprobaron al menos un examen.
        c)Alumnos que aprobaron unicamente el ultimo examen.
    Realice un programa que permita la lectura de los datos y el calculo de las estadisticas.*/

#include<iostream>
#include<fstream>
#include<math.h>

using namespace std;


int main()
{
    float examen1, examen2, examen3;
    int aprobadosTodos=0,aprobadosUno=0,aprobadoUltimo=0;

            for(int i=1;i<=5;i++)
            {
                cout << i << ". Digite nota de primer examen: " ; cin>>examen1;
                cout << i << ". Digite nota del segundo examen: " ; cin>>examen2;
                cout << i << ". Digite nota del tercer examen: " ; cin>>examen3;
                cout << endl;

                if((examen1>10.5)&&(examen2>10.5)&&(examen3>10.5))
                {aprobadosTodos++;}

                if((examen1>10.5)||(examen2>10.5)||(examen3>10.5))
                {aprobadosUno++;             }

                if((examen1<10.5)&&(examen2<10.5)&&(examen3>10.5))
                {aprobadoUltimo++;             }
            }

            cout << "\nAlumnos que aprobaron todos lo examenes: " << aprobadosTodos << endl;
            cout << "Alumnos que aprobaron almenos un examen: " << aprobadosUno << endl;
            cout << "Alumnos que aprobaron unicamente el ultimo examen: " << aprobadoUltimo << endl;



    getch();
    return 0;

}

/*
    string _entervar = "Texto de prueba",_testread;
    ifstream _read_data;
    ofstream _write_data;


       _read_data.open("C:/DatosAlumnos.txt");

    //Abrir archivo del cual se tomaran los datos.
    if(_read_data.good())
    {
        cout << "File is good" << endl;
        _read_data.close();
    }

    else
    {
        _read_data.close();
        cout << "File not  Found"<<endl;
        cout << "Creating file..."<<endl;
            _write_data.open("C:/DatosAlumnos.txt");
        cout << "File created..." <<endl;
            //Ingresar datos al archivo.
        cout << "Writing on file" << endl;
            _write_data << _entervar << endl;
            _write_data.close();
        cout << "Test on file successful"<<endl;
    }
        //Abrir datos del archivo.
        _read_data.open("C:/DatosAlumnos.txt");

//1er bucle, opcion de lectura.

//        while(!_read_data.eof())
//        {
//                getline(_read_data,_testread);
//            //_read_data >> _testread;
//        cout << _testread << endl;
//
//        getline(_read_data,_testread);
//        cout << _testread << endl;
//        }
//2do, bucle y opcion de lectura.


        while(getline(_read_data,_testread))
        {
            cout << "Lineas: " ;
            cout << _testread << endl;
        }

        _read_data.close();

        getch();
    system("pause");
    return 0;
}
*/



/*
Coordinate NPI, maintained detailed and comprehensive records on improvements of products and testing.
Analyze failures and provide feedback to the proper department involve.
Provide feedback to customer regarding product issues and help analyze the root cause of fails.
Validate and release testing software for new and existing models.
Support on production floor when related to SW troubleshooting.*/


