# softveicular
Este código en C++ implementa un simple sistema de gestión de vehículos que permite agregar vehículos y mostrar la lista de vehículos registrados. A continuación, se describe qué hace cada función y la funcionalidad general del programa:

struct Vehicle: Define una estructura llamada Vehicle, que tiene campos para almacenar la marca, modelo, año y color de un vehículo.

const int MAX_VEHICLES = 10;: Define una constante MAX_VEHICLES que representa el número máximo de vehículos que se pueden almacenar en el sistema.

Vehicle vehicles[MAX_VEHICLES];: Declara un arreglo de estructuras Vehicle llamado vehicles con capacidad para almacenar MAX_VEHICLES vehículos.

int vehicleCount = 0;: Inicializa una variable vehicleCount con el número actual de vehículos registrados en el sistema.

void AddVehicle(): Esta función permite al usuario agregar un nuevo vehículo al sistema. Solicita al usuario ingresar la marca, modelo, año y color del vehículo y lo agrega al arreglo vehicles.

void DisplayVehicles(): Esta función muestra la lista de vehículos registrados en el sistema en forma de una tabla. Imprime en la consola la marca, modelo, año y color de cada vehículo almacenado en el arreglo vehicles.

La función main(): Contiene el menú principal del sistema de gestión de vehículos. Permite al usuario elegir entre tres opciones: agregar un vehículo, mostrar todos los vehículos registrados y salir del programa. El bucle do-while se repite hasta que el usuario elija la opción para salir del programa.

El programa permite la interacción con el usuario para registrar y mostrar vehículos. El usuario puede agregar hasta un máximo de 10 vehículos al sistema. Cada vez que se agrega un vehículo, se almacena en el arreglo vehicles y se incrementa el contador vehicleCount. El menú principal del sistema muestra las opciones disponibles y el usuario puede ingresar el número correspondiente para ejecutar la acción deseada. Si el usuario intenta agregar más vehículos después de alcanzar el límite máximo, se mostrará un mensaje indicando que la capacidad máxima ha sido alcanzada.

En resumen, este programa ofrece una forma básica de administrar información de vehículos, permitiendo agregar nuevos vehículos y ver la lista de vehículos registrados en forma de tabla. Es un ejemplo simple de cómo implementar un sistema de gestión de datos utilizando estructuras y arreglos en C++.
