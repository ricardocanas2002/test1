#include <iostream>

using namespace std;

int main()
{
    float sumaNotas = 0;
    //En este punto solo están declarados los valores de notas[]
    const int NUM_NOTAS= 3; //Se declara const porque es la constante
    float notas[NUM_NOTAS]; //array de NUM_NOTAS casillas para guardar las notas
    //Usamos un for para pedir las notas
    for (int i = 0; i < NUM_NOTAS; i++) {
        cout << "nota: " << i + 1 << endl;
        cin >> notas[i];
    }
    //La variable i toma los valores de los índices de los array
    for (int i = 0; i < NUM_NOTAS; i++) {
        cout << "la nota " << i << " es: " << notas[i] << endl;
        sumaNotas += notas[i];
    }

    cout << "La sumatoria total de notas es de: " << sumaNotas << endl;
    cout << "---------------" << endl;
    cout << "El promedio de notas por este estudiante es de: " << sumaNotas/NUM_NOTAS << endl;

    return 0;
}