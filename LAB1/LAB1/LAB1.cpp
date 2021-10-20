
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");  //ustawia język w konsoli na polski
    
    //wypisuje nr albumu
    cout << "Nr Albumu: 66657\n";   
    
    cout << "\n";
    //funkcja na sprawdzanie czy liczba jest parzysta czy nie
    cout << "Sprawdzanie czy liczba jest parzysta\n";
    int a;
    cout << "Wprowadź liczbę: ";    
    cin >> a;

    if (a % 2 == 0) 
    {
        cout << "Wpisana liczba jest parzysta\n";
    }
    else
    {
        cout << "Wpisana liczba jest nieparzysta\n";
    }
    
    cout << "\n";
    //funkcja sprawdza która liczba zmiennoprzecinkowa jest większa
    float b, c;
    cout << "Sprawdzanie która liczba jest większa\n";
    cout << "Wprowadź pierwszą liczbę: ";
    cin >> b;
    cout << "Wprowadź drugą liczbę: ";
    cin >> c;
    if (b > c)
    {
        cout << "Pierwsza liczba jest większa\n";
    }
    else
    {
        cout << "Druga liczba jest większa\n";
    }
    
    cout << "\n";
    //funkcja liczy średnią arytmetyczną z 4 liczb zmiennoprzecinkowych
    float d, e, f, g, h;
    cout << "Średnia arytmetyczna 4 liczb zmiennoprzecinkowych\n";
    cout << "Wprowadz cztery liczby zmiennoprzecinkowe: \n";
    cin >> d;
    cin >> e;
    cin >> f;
    cin >> g;
    h = (d + e + f + g) / 4;
    cout << "Średnia arytmetyczna to " << h << "\n";

    cout << "\n";
    //prosty kalkulator na instrukcji switch
    int i, j, wybor;
    cout << "Kalkulator\n";
    cout << "Wprowadź pierwszą liczbę: \n";
    cin >> i;
    cout << "Wprowadź drugą liczbę: \n";
    cin >> j;
    cout << "Dodawanie (1), odejmowanie (2), mnożenie (3), dzielenie (4)\n";
    cin >> wybor;
        
    switch ( wybor )
    {
    case 1:
        cout << "Wynik wynosi: " << i + j << endl;
        break;
    
    case 2:
        cout << "Wynik wynosi: " << i - j << endl;
        break;

    case 3:
        cout << "Wynik wynosi " << i * j << endl;
        break;

    case 4:
        cout << "Wynik wynosi " << i / j << endl;
        break;
       
    default:
        cout << "Można wybrać tylko od 1 do 4" << endl;
    }   

}

