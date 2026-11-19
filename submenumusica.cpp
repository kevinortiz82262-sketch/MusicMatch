#include <iostream>
#include <iomanip>
#include "headers.h"

void submenumusica(double& totalcompra) {
    using namespace std;

    int genero;
    int cantante;
    string generoSeleccionado;
    string artistaSeleccionado;

    // Puedes ajustar el precio de cada género aquí
    int precioMusicaPopular = 40000;
    int precioMusicaUrbana = 45000;
    int precioMusicaAlternativa = 35000;

    cout << "\nIII CATALOGO DE MUSICA III" << endl;
    cout << "1. Popular ($" << precioMusicaPopular << ")" << endl;
    cout << "2. Urbana ($" << precioMusicaUrbana << ")" << endl;
    cout << "3. Alternativa ($" << precioMusicaAlternativa << ")" << endl;
    cout << "Elige el genero: ";
    cin >> genero;

    switch (genero) {
    case 1:
        generoSeleccionado = "Popular";
        cout << "\nIII ARTISTAS DE MUSICA POPULAR III" << endl;
        cout << "1. Francisco 'Pacho' Bedoya" << endl;
        cout << "2. Manuel J. Bernal" << endl;
        cout << "3. Antonio David" << endl;
        cout << "Elige el artista: ";
        cin >> cantante;

        switch (cantante) {
        case 1:
            artistaSeleccionado = "Francisco 'Pacho' Bedoya";
            totalcompra += precioMusicaPopular + 10000;
            break;
        case 2:
            artistaSeleccionado = "Manuel J. Bernal";
            totalcompra += precioMusicaPopular + 15000;
            break;
        case 3:
            artistaSeleccionado = "Antonio David";
            totalcompra += precioMusicaPopular + 5000;
            break;
        default:
            cout << "Cantante no ofrecido." << endl;
            return; // Regresa al menú principal sin registrar compra
        }
        break;

    case 2:
        generoSeleccionado = "Urbana";
        cout << "\nIII ARTISTAS DE MUSICA URBANA III" << endl;
        cout << "1. Juan Duque" << endl;
        cout << "2. Noiseferatu" << endl;
        cout << "3. Bhietxa" << endl;
        cout << "Elige el artista: ";
        cin >> cantante;

        switch (cantante) {
        case 1:
            artistaSeleccionado = "Juan Duque";
            totalcompra += precioMusicaUrbana + 20000;
            break;
        case 2:
            artistaSeleccionado = "Noiseferatu";
            totalcompra += precioMusicaUrbana + 30000;
            break;
        case 3:
            artistaSeleccionado = "Bhietxa";
            totalcompra += precioMusicaUrbana + 15000;
            break;
        default:
            cout << "Cantante no ofrecido." << endl;
            return;
        }
        break;

    case 3:
        generoSeleccionado = "Alternativa";
        cout << "\nIII ARTISTAS DE MUSICA ALTERNATIVA III" << endl;
        cout << "1. Lignina" << endl;
        cout << "2. Kukos Band" << endl;
        cout << "3. Bhietxa" << endl;
        cout << "Elige el artista: ";
        cin >> cantante;

        switch (cantante) {
        case 1:
            artistaSeleccionado = "Lignina";
            totalcompra += precioMusicaAlternativa + 10000;
            break;
        case 2:
            artistaSeleccionado = "Kukos Band";
            totalcompra += precioMusicaAlternativa + 20000;
            break;
        case 3:
            artistaSeleccionado = "Influjos";
            totalcompra += precioMusicaAlternativa + 15000;
            break;
        default:
            cout << "Cantante no ofrecido." << endl;
            return;
        }
        break;

    default:
        cout << "Genero no ofrecido." << endl;
        return;
    }

    cout << fixed << setprecision(2);
    cout << "\n^^^SOLICITUD REGISTRADA^^^" << endl;
    cout << "Producto: Compra de Album (" << generoSeleccionado << ")" << endl;
    cout << "Artista: " << artistaSeleccionado << endl;
    cout << "Total estimado acumulado: $" << totalcompra << endl;
    cout << "Gracias por confiar en MusicMatch" << endl;
}