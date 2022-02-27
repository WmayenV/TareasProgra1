#include <iostream>

using namespace std;

int main()
{
    float Nota1, Nota2, Nota3, Nota4, Nota5;
    string curso1, curso2, curso3, curso4, curso5;
    cout <<"Cursos Asignados"<< endl;
    cout<<endl;
    cout <<"9959 011 Fisica I"<< endl;
    cout <<"9959 012 Programacion I"<< endl;
    cout <<"9959 013 Calculo I"<< endl;
    cout <<"9959 014 Proceso Administrativo"<< endl;
    cout <<"9959 015 Derecho Informatico"<< endl;
    cout<<endl;
    cout<<endl;
    cout << "Ingrese el nombre del primer curso: ";
    cin >> curso1;
    cout << "Ingrese el nombre del segundo curso: ";
    cin >> curso2;
    cout << "Ingrese el nombre del tercer curso: ";
    cin >> curso3;
    cout << "Ingrese el nombre del cuarto curso: ";
    cin >> curso4;
    cout << "Ingrese el nombre del quinto curso: ";
    cin >> curso5;
    cout << endl;
    cout << "ingrese la nota de " << curso1 << ": ";
    cin >> Nota1;
    cout << "ingrese la nota de " << curso2 << ": ";
    cin >> Nota2;
    cout << "ingrese la nota de " << curso3 << ": ";
    cin >> Nota3;
    cout << "ingrese la nota de " << curso4 << ": ";
    cin >> Nota4;
    cout << "ingrese la nota de " << curso5 << ": ";
    cin >> Nota5;
    cout << endl;
    cout << "Nota de" << curso1 << endl;
    if (Nota1>=80)
    {
        cout << "Excelente, gano el curso  " << Nota1 << " puntos" << endl;
    }
    else if (Nota1>=61)
    {
        cout << "Buen promedio, gano el curso" << Nota1 << " puntos" << endl;
    }
    else if (Nota1==60)
    {
        cout << "Necesita mejorar, gano el curso" << Nota1 << " puntos" << endl;
    }
    else
    {
        cout << "Perdio el curso " << Nota1 << " puntos" << endl;
    }
    cout << endl;
    cout << "Nota de" << curso2 << endl;
    if (Nota2>=80)
    {
        cout << "Excelente, gano el curso  " << Nota2 << " puntos" << endl;
    }
    else if (Nota2>=61)
    {
        cout << "Buen promedio, gano el curso" << Nota2 << " puntos" << endl;
    }
    else if (Nota2==60)
    {
        cout << "Necesita mejorar, gano el curso" << Nota2 << " puntos" << endl;
    }
    else
    {
        cout << " Perdio el curso " << Nota2 << " puntos" << endl;
    }
    cout << endl;
    cout <<"Nota de" << curso3 << endl;
    if (Nota3>=80)
    {
        cout << "Excelente, gano el curso  " <<Nota3 << " puntos" << endl;
    }
    else if (Nota3>=61)
    {
        cout << "Buen promedio, gano el curso" << Nota3 << " puntos" << endl;
    }
    else if (Nota3==60)
    {
        cout << "Necesita mejorar, gano el curso" << Nota3 << " puntos" << endl;
    }
    else
    {
        cout << " Perdio el curso " << Nota3 << " puntos" << endl;
    }
    cout << endl;
    cout << "Nota de" << curso4 << endl;
    if (Nota4>=80)
    {
        cout << "Excelente, gano el curso  " << Nota4 << " puntos" << endl;
    }
    else if (Nota4>=61)
    {
        cout << "Buen promedio, gano el curso" << Nota4 << " puntos" << endl;
    }
    else if (Nota4==60)
    {
        cout << "Necesita mejorar, gano el curso" << Nota4 << " puntos" << endl;
    }
    else
    {
        cout << "Perdio el curso " << Nota4 << " puntos" << endl;
    }
    cout << endl;
    cout << "Nota de" << curso5<<  endl;
    if (Nota5>=80)
    {
        cout << "Excelente, gano el curso  " << Nota5 << " puntos" << endl;
    }
    else if (Nota5>=61)
    {
        cout << "Buen promedio, gano el curso" << Nota5 << " puntos" << endl;
    }
    else if (Nota5==60)
    {
        cout << "Necesita mejorar, gano el curso" << Nota5 << " puntos" << endl;
    }
    else
    {
        cout << "Perdio el curso " << Nota5 << " puntos" << endl;
    }

    return 0;
}
