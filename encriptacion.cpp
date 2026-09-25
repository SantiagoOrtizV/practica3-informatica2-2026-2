#include "encriptacion.h"

void x_or(unsigned char *ptr, unsigned int l1, unsigned char *clave){
    for (unsigned int i=0; i<l1; i++) {
        ptr[i] = ptr[i]^clave[i];
    }
}

void rotacion(unsigned char *ptr, unsigned int l1, unsigned short int nRot){
    for(unsigned int i=0; i<l1; i++){
        ptr[i] = (ptr[i] >> nRot) | (ptr[i]<<(8-nRot));
    }
}

void encriptamiento(unsigned char *ptr, unsigned int l1, unsigned char *clave, unsigned short int nRot, bool opc){
    if(opc){
        rotacion(ptr, l1, nRot);
        x_or(ptr, l1, clave);
    }else{
        x_or(ptr, l1, clave);
        rotacion(ptr, l1, 8-nRot);
    }
}

