#include <iostream>
#include <iomanip>
#include "headers.h"

void submenuguitarra(double& totalcompra) {
	using namespace std;

	string COLORGUITARRA;
	string INSTRUMENTO;
    int opcioninstrumento;
    int precioGuitarraElectrica = 1000000;
	int precioGuitarraAcustica = 800000;
    int precioBajo = 1500000;
    int colorguitarra;

    cout << "\nIII CATALOGO DE INSTRUMENTOS III" << endl;
    cout << "1. Guitarra electrica MusicMatch" << endl;
    cout << "2. Guitarra acustica MusicMatch" << endl;
    cout << "3. Bajo Electrico" << endl;

    cin >> opcioninstrumento;

    switch (opcioninstrumento) {
        case 1:
        cout << "\nIII CATALOGO DE GUITARRAS III" << endl;
        cout << "Guitarra electrica MusicMatch" << endl;
        cout << "Precio base: $" << precioGuitarraElectrica << endl;
        cout << "1. Negro" << endl;
        cout << "2. Rojo" << endl;
        cout << "3. Blanco" << endl;
        cout << "Elige el color: ";
        INSTRUMENTO = "Guitarra electrica MusicMatch";
        cin >> colorguitarra;

        switch (colorguitarra) {
            case 1:
            COLORGUITARRA = "Negro";
            totalcompra += precioGuitarraElectrica + 500000;
            cout << "Has seleccionado el color: " << COLORGUITARRA << endl;
            break;
            case 2:
            COLORGUITARRA = "Rojo";
            totalcompra += precioGuitarraElectrica + 200000;  
            cout << "Has seleccionado el color: " << COLORGUITARRA << endl;
            break;
            case 3:
            COLORGUITARRA = "Blanco";
            totalcompra += precioGuitarraElectrica + 100000; 
            cout << "Has seleccionado el color: " << COLORGUITARRA << endl;
            break;
            default:
            cout << "Color no valido" << endl;
            break;
            }
        break;
        
        case 2:
            cout << "\nIII CATALOGO DE GUITARRAS III" << endl;
            cout << "Guitarra acustica MusicMatch" << endl;
            cout << "Precio base: $" << precioGuitarraAcustica << endl;
            cout << "1. Cafe claro" << endl;
            cout << "2. Cafe oscuro" << endl;
            cout << "3. Negro" << endl;
            cout << "Elige el color: ";
            INSTRUMENTO = "Guitarra acustica MusicMatch";
            cin >> colorguitarra;

            switch (colorguitarra) {
                case 1:
                COLORGUITARRA = "Cafe claro";
                totalcompra += precioGuitarraAcustica + 500000;
                cout << "Has seleccionado el color: " << COLORGUITARRA << endl;
                break;
                case 2:
                COLORGUITARRA = "Cafe oscuro";
                totalcompra += precioGuitarraAcustica + 200000;  
                cout << "Has seleccionado el color: " << COLORGUITARRA << endl;
                break;
                case 3:
                COLORGUITARRA = "Negro";
                totalcompra += precioGuitarraAcustica + 100000; 
                cout << "Has seleccionado el color: " << COLORGUITARRA << endl;
                break;
                default:
                cout << "Color no valido" << endl;
                break;
            }
        break;

        case 3:
            cout << "\nIII CATALOGO DE BAJOS III" << endl;
            cout << "Bajo Electrico MusicMatch" << endl;
            cout << "Precio base: $" << precioBajo << endl;
            cout << "1. Negro" << endl;
            cout << "2. Rojo" << endl;
            cout << "3. Azul" << endl;
            cout << "Elige el color: ";
            INSTRUMENTO = "Bajo Electrico MusicMatch";
            cin >> colorguitarra;

            switch (colorguitarra) {
                case 1:
                COLORGUITARRA = "Negro";
                totalcompra += precioBajo + 500000;
                cout << "Has seleccionado el color: " << COLORGUITARRA << endl;
                break;
                case 2:
                COLORGUITARRA = "Rojo";
                totalcompra += precioBajo + 200000;  
                cout << "Has seleccionado el color: " << COLORGUITARRA << endl;
                break;
                case 3:
                COLORGUITARRA = "Azul";
                totalcompra += precioBajo + 100000; 
                cout << "Has seleccionado el color: " << COLORGUITARRA << endl;
                break;
                default:
                cout << "Color no valido" << endl;
                break;
            }
        break;

        default:
            cout << "Opcion no valida" << endl;
            break;

    }

    cout << fixed << setprecision(2);
    cout << "\n^^^SOLICITUD REGISTRADA^^^" << endl;
    cout << "Instrumento: " << INSTRUMENTO << endl;
    cout << "Total estimado: $" << totalcompra << endl;
    cout << "Gracias por confiar en MusicMatch" << endl;

 }