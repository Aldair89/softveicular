#include <iostream>
#include <iomanip>

using namespace std;

struct Vehicle {
    string make;
    string model;
    int year;
    string color;
};

const int MAX_VEHICLES = 10;
Vehicle vehicles[MAX_VEHICLES];
int vehicleCount = 0;

void AddVehicle() {
    if (vehicleCount >= MAX_VEHICLES) {
        cout << "No se pueden agregar más vehículos. Capacidad máxima alcanzada." << endl;
        return;
    }

    Vehicle newVehicle;

    cout << "Ingrese la marca del vehículo: ";
    cin >> newVehicle.make;

    cout << "Ingrese el modelo del vehículo: ";
    cin >> newVehicle.model;

    cout << "Ingrese el año del vehículo: ";
    cin >> newVehicle.year;

    cout << "Ingrese el color del vehículo: ";
    cin >> newVehicle.color;

    vehicles[vehicleCount] = newVehicle;
    vehicleCount++;

    cout << "Vehículo agregado correctamente." << endl;
}

void DisplayVehicles() {
    if (vehicleCount == 0) {
        cout << "No hay vehículos registrados." << endl;
        return;
    }

    // Imprimir la tabla de colores
    cout << setw(10) << "Marca" << setw(10) << "Modelo" << setw(10) << "Año" << setw(10) << "Color" << endl;
    cout << setfill('-') << setw(40) << "" << setfill(' ') << endl;

    for (int i = 0; i < vehicleCount; i++) {
        cout << setw(10) << vehicles[i].make << setw(10) << vehicles[i].model << setw(10) << vehicles[i].year << setw(10) << vehicles[i].color << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "Sistema de Gestión de Vehículos" << endl;
        cout << "1. Agregar un vehículo" << endl;
        cout << "2. Mostrar todos los vehículos" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese su elección: ";
        cin >> choice;

        switch (choice) {
            case 1:
                AddVehicle();
                break;
            case 2:
                DisplayVehicles();
                break;
            case 3:
                cout << "¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción inválida. Inténtelo nuevamente." << endl;
                break;
        }

        cout << endl;
    } while (choice != 3);

    return 0;
}
