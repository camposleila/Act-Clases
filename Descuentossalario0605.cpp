#include <iostream>
using namespace std;

int main()
{
    float Salariobruto, Salarioneto;
    float Isss, Afp, Renta, Totaldiscount;
    char Option;

    cout << "Hello. Please insert your gross income." << endl;
    cin >> Salariobruto;

    cout << " ___________________________________" << endl;
    cout << "|Select what you want to calculate. |" << endl;
    cout << "|a. ISSS                            |" << endl;
    cout << "|b. AFP                             |" << endl;
    cout << "|c. Renta                           |" << endl;
    cout << "|d. Total discount                  |" << endl;
    cout << " ___________________________________" << endl;

    cin >> Option;

    switch (Option)
    {
    case 'a':
        if (Salariobruto < 1000)
        {
            Isss = Salariobruto * 0.03;
            cout << "Your ISSS discount is $" << Isss << endl;
        }
        else
        {
            cout << "Your ISSS discount is $30" << endl;
        }

        /* this is to known what is the Isss outcome. If it is higher than 1000 it has to be calculated with 1000 only*/
        break;

    case 'b':
        Afp = Salariobruto * 0.0725;
        cout << "Your AFP discount is $" << Afp << endl;

        /* calculates the AFP discount, which is the 7.25% of the gross income*/
        break;

    case 'c':
        if (Salariobruto < 1000)
        {
            Isss = Salariobruto * 0.03;
        }
        else
        {
            Isss = 30; /*it changes in here because I dont want to show ths part to the user*/
        }
       
        Afp = Salariobruto * 0.0725;

        /* this is in order this case recognizes isss and afp*/

        Salarioneto = Salariobruto - Isss - Afp;

        if (Salarioneto <= 472.99)
        {
            cout << "Exento" << endl;
        }
        else if (Salarioneto > 472.99 && Salarioneto <= 895.24)
        {
            Renta = Salarioneto * 0.10;
            cout << "Se aplica el 10%. Su renta es de $" << Renta << endl;
        }
        else if (Salarioneto > 895.24 && Salarioneto <= 2038.10)
        {
            Renta = Salarioneto * 0.20;
            cout << "Se aplica el 20%. Su renta es de $" << Renta << endl;
        }
        else if (Salarioneto > 2038.10)
        {
            cout << "Se aplica el 30%. Su renta es de $" << Renta << endl;
        }

        /*Calculates the Renta depending on the net income (this is after ISSS and AFP discounts)*/
        break;

    case 'd':
        Totaldiscount = Isss + Afp + Renta;
        cout << "ISSS discount is " << Isss << endl;
        cout << "AFP discount is " << Afp << endl;
        cout << "Rent discount is " << Renta << endl;
        cout << "The total of all discounts is  " << Totaldiscount << endl;
        
        /* Calculate the total of all discounts and display the remaining amount after applying ISSS, AFP, and rent, along with details of each discount.*/

    default:
        cout << "That option it is not valid." << endl;

        break;
    }

    return 0;

    /*Derechos de autor: Leila Saraí Campos Peraza. 2025*/
}
