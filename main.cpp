//Incluimos las librerias necesarias para el funcionamiento del programa//

#include <iostream>
#include <iomanip>
#include "headers.h"


 //Incluimos la libreria iostream para poder usar cout y cin//
using namespace std;

//Declaramos la funcion main que es la que se ejecuta al iniciar el programa//
int main() {

    // aqui defino todas las variables nombreCliente, el apellido el nombre completo para usar el nombre completo para recibir al cliente//
    string nombreCliente;
    string apellidoCliente;
    string nombreCompleto;

	//Estamos declarando las variables que vamos a usar para el menu principal y para el total de la compra//
    int opcionprincipal;
	double totalcompra = 0.0;
    bool comprando = true;

	//int para guardar el precio del servicio y de la musica//

    int precioServicio = 0;
    int precioMusicaP = 50000;
    int precioMusicaU = 40000;
    int precioMusicaA = 30000;

    //estructura basica para colocar textos con el using namespace std//
    cout << "========================================" << endl;
    cout << "       BIENVENIDOS A MusicMatch         " << endl;
    cout << "   Tienda Virtual de Instrumentos       " << endl;
    cout << "========================================" << endl;

	//recibimiento del cliente y solicitud de su nombre y apellido para procesar pedido//

	cout << "Ingrese su nombre: ";
	cin >> nombreCliente;
    cout << "Ingrese su apellido: ";
    cin >> apellidoCliente;
    nombreCompleto = nombreCliente + " " + apellidoCliente;

	//menu principal con opciones para el cliente//

    while (comprando) {
        cout << "\nHola " << nombreCompleto << "!" << endl;
        cout << "Que deseas hacer?" << endl;
        cout << "1. Comprar un instrumento" << endl;
        cout << "2. Mantenimiento a un instrumento" << endl;
        cout << "3. Comprar Musica" << endl;
		cout << "4. Finalizar compra y pagar" << endl;
        cout << "Elige una opcion: ";
        cin >> opcionprincipal;

        switch (opcionprincipal) {
        case 1:
            submenuguitarra(totalcompra);
            break;
        case 2:
            submenuservicio(totalcompra);
            break;
        case 3:
            submenumusica(totalcompra);
            break;
        case 4:
            comprando = false;
            break;
        default:
            cout << "Opcion invalida. Por favor, elige una opcion valida." << endl;
            break;
        }
    }
    cout << fixed << setprecision(2);
	cout << "\nTotal de la compra: $" << totalcompra << endl;
	cout << "Gracias por visitar MusicMatch, " << nombreCompleto << "! Esperamos verte pronto." << endl;
    return 0;
}