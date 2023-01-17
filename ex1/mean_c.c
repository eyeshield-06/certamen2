#include <R.h>

void mean(double* input, int* size, double* aux){
    int i = 0;
    while(i < *size){
        *aux += input[i];
        i++;
    }
    *aux /= (float)*size;
}
