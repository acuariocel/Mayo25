#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int x, y, aux;
    cin >> x>>y;
    aux = x;
    x = y;
    y = aux;
    cout << x << y;
    getch();
    return 0;
}
