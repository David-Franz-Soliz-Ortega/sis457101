// principal.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

 using namespace std;
 int main()
 {
    
     string palabra = "si";
     while (palabra == "si") {
         cout << "----Biografia personal----" << endl;
         cout << "David Franz Soliz Ortega" << endl;
         cout << "Mi nombre es David Franz Soliz Ortega y tengo 20 años" << endl;
         cout << "nací en Sucre, Bolivia el 16 de junio del 2002" << endl;
         cout << "estudié en el colegio Don Bosco en Sucre y terminé el colegio en 2020" << endl;
         cout << "actualmente estoy estudiando la carrera de ingeniería de sistemas en la USFX" << endl;
         cout << "desearía programar videojuegos y otros programas para tener una empresa de aplicaciones" << endl;

         cout << "  ---------------------------- " << endl;
         palabra = "a";
         while (palabra!="si" && palabra !="no") {
             cout << "¿Quiere volver a imprimir biografia personal (escriba si) o terminar programa (escriba no)?" << endl;
             cin >> palabra;
             if(palabra != "si" && palabra != "no"){
                 cout << "--------------------------------------------------------------" << endl;
                 cout << "Introdujo otra palabra, por favor, vuelva a introducir si o no"<<endl;
                 cout << " " << endl;
             }
         }
     }
     cout << "--------------------" << endl;
     cout << "fin del programa"<<endl;
     cout << "--------------------" << endl;
     return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
