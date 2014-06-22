#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
using namespace std;
int main() {
    int eda;
    char ced[11],nom[16],ape[16],ext[5]=".txt",nomArc[11]="";
    cout << "INGRSE SU NUMERO DE CEDULA: ";
    cin >> ced;
    cout << "INGRSE SU NOMBRE: ";
    cin >> nom;
    cout << "INGRSE SU APELLIDO: ";
    cin >> ape;
    cout << "INGRSE SU EDAD: ";
    cin >> eda;
    strcat(nomArc,ced);
    strcat(nomArc,ext);
    ofstream fs(nomArc);
    fs <<ced<<endl<<nom<<endl<<ape<<endl<<eda;
    fs.close();
    getch();
    return 0;
}
