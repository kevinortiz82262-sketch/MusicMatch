#include <iostream>
#include <iomanip>
#include "headers.h"

void submenuservicio(double& totalcompra) {
    using namespace std;

    string servicio;
    int mantenimiento;
    int precioLimpieza = 30000;
    int precioCuerdas = 25000;
    int precioCalibracion = 50000;

    cout << "\nIII SERVICIO DE MANTENIMIENTO III" << endl;
    cout << "1. Limpieza general - $" << precioLimpieza << endl;
    cout << "2. Cambio de cuerdas - $" << precioCuerdas << endl;
    cout << "3. Calibracion de guitarra - $" << precioCalibracion << endl;
    cout << "Elige el servicio: ";
    cin >> mantenimiento;

    switch (mantenimiento) {
    case 1:
        servicio = "Limpiar la guitarra en general";
        totalcompra += precioLimpieza;
        cout << "Has seleccionado: " << servicio << endl;
        break;

    case 2:
        servicio = "Cambiar de cuerdas";
        totalcompra += precioCuerdas;
        cout << "Has seleccionado: " << servicio << endl;
        break;

    case 3:
        servicio = "Calibracion de guitarra";
        totalcompra += precioCalibracion;
        cout << "Has seleccionado: " << servicio << endl;
        break;

    default:
        cout << "Servicio no valido." << endl;
        return; // Sale del submenú sin registrar nada y vuelve al menú principal
    }

    cout << fixed << setprecision(2);
    cout << "\n^^^SOLICITUD REGISTRADA^^^" << endl;
    cout << "Servicio: " << servicio << endl;
    cout << "Total estimado acumulado: $" << totalcompra << endl;
    cout << "Gracias por confiar en MusicMatch" << endl;
}