
//FUNCION CALCULAR POTENCIA

int potencia(int base, int exp) {
    int pot = 1;
    for (int i = 0; i < exp; i++) {
        pot = pot*base;
    }
    return pot;
}