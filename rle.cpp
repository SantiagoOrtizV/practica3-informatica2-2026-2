#include "rle.h"
#include <string>

using namespace std;

void compresion_rle(unsigned char *ptr, unsigned int l1, unsigned char *&ptr2, unsigned int &l2){
    string comprimido;
    unsigned int i = 0;
    while(i<l1){
        unsigned char valor = ptr[i];
        unsigned int cantidad = 1;
        while(i+cantidad < l1 && ptr[i+cantidad] == valor) {
            cantidad++;
        }
        comprimido += to_string(cantidad);
        comprimido += valor;
        i += cantidad;
    }
    l2 = comprimido.size();
    ptr2 = new unsigned char[l2];
    for (unsigned int i=0; i<l2; i++){
        ptr2[i] = comprimido[i];
    }
}

void descompresion_rle(unsigned char *ptr, unsigned int l1, unsigned char *&ptr2, unsigned int &l2){
    string descomprimido;
    unsigned int i = 0;
    while(i < l1){
        string numero;
        while(i<l1 && ptr[i]>='0' && ptr[i]<='9'){
            numero += ptr[i];
            i++;
        }
        unsigned int cantidad = stoi(numero);
        unsigned char valor = ptr[i];
        i++;
        for(unsigned int j=0; j<cantidad; j++){
            descomprimido += valor;
        }
    }
    l2 = descomprimido.size();
    ptr2 = new unsigned char[l2];
    for (unsigned int i=0; i<l2; i++) {
        ptr2[i] = descomprimido[i];
    }
}
