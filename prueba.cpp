#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Libro
{
    string titulo;
    string autor;
    int anio;
};

void mostrarLibro(Libro l)
{
    cout << "Titulo: " << l.titulo << endl;
    cout << "Autor: " << l.autor << endl;
    cout << "Anio: " << l.anio << endl;
}

int buscarLibro (){
    string buscado;
    cout << "Ingrese el titulo a buscar: " << endl;
    cin >> buscado;

    ifstream archivo ("libros.txt");

    Libro l;

    while (archivo >> l.titulo >> l.autor >> l.anio) {
        if (l.titulo == buscado) {
            mostrarLibro(l);
            return 1;
        }
    }
    return 0;
}

int main()
{

    Libro miLibro;

    cout << "Ingrese el titulo del libro que desee registrar: " << endl;
    cin >> miLibro.titulo;
    cout << "Ingrese el nombre del autor que desea registrar: " << endl;
    cin >> miLibro.autor;
    cout << "Ingrese el anio en el que se sacó el libro: " << endl;
    cin >> miLibro.anio;

    mostrarLibro(miLibro);

    ofstream archivo("libros.txt", ios::app);

    archivo << miLibro.titulo << " " << miLibro.autor << " " << miLibro.anio << endl;

    archivo.close();

    int resultado = buscarLibro();

    if (resultado == 0) {
        cout << "Error: no se encontro el libro";
    }

    return 0;
}