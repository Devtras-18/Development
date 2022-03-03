#include<iostream>
using namespace std;

void vars_swapper(int &x, int &y)
{
    int a,v;
    //Check vars are real number's.
        if(x <= 0 || y <= 0)
        {
            x = 0;
            y = 0;

        }
        else
        {
            a = x;
            v = y;

            //Variable swap
            y = a;
            x = v;
        }
    //return x,y;
}

int main()
{
    int first_number, second_number;
    //Defining the inputs of the variables.
    cout << "Welcome to your  variables swapper program.\n\rPlease input the digits to test." << endl;
    cout << "Digit first number: " << endl;
    cin >> first_number;
    cout << "Digit second number: " << endl;
    cin >> second_number;

    //Function calling and begining of same.
    cout << "Status swap function [SWAP FUNCTION BEGIN: ]" << endl;
    vars_swapper(first_number, second_number);
    if(first_number != 0 && second_number != 0)
    {
    cout << "Status swap function [SWAP FUNCTION END:] [OK]" << endl;
    }
    else{cout << "Status swap function [SWAP FUNCTION END:] [FAIL]" << endl;}

    cout << "First result> " << first_number << endl;
    cout << "Second result> " << second_number << endl;

    return 0;
}
