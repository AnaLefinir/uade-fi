#include <std.h>

/*
    Dado un vector A de 10 posiciones, invertirlo sobre el vector B (tambien de 10 posiciones)
*/
int main(){

    int A[10];
    int B[10];
    int i = 0;

    for(i = 0; i<10; i= i+1)
    {
        B[i] = A[9-i];
    }
}