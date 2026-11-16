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

int main()
{

    Libro miLibro;

    cout << "Ingrese el titulo del libro que desee registrar: " << endl;
    getline(cin, miLibro.titulo);
    cout << "Ingrese el nombre del autor que desea registrar: " << endl;
    getline(cin, miLibro.autor);
    cout << "Ingrese el anio en el que se sacó el libro: " << endl;
    cin >> miLibro.anio;

    mostrarLibro(miLibro);

    ofstream archivo("libros.txt", ios::app);

    archivo << miLibro.titulo << ";" << miLibro.autor << ";" << miLibro.anio << endl;

    archivo.close();

    return 0;
}