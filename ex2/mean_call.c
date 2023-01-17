#include <R.h>
#include <Rinternals.h>

SEXP mean(SEXP input){
    SEXP aux;
    PROTECT(aux = allocVector(REALSXP, 1));
    REAL(aux)[0] = 0.0;
    for(int i = 0; i < length(input); i++){
        REAL(aux)[0] += REAL(input)[i];
    }
    REAL(aux)[0] /= length(input); 
    UNPROTECT(1);
    return aux;
}
