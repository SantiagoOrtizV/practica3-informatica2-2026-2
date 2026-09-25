#include <iostream>
#include <string>
#include "lz78.h"
#include "rle.h"
#include "funciones.h"

using namespace std;

int main(){

    // Manejo de texto a traves de punteros.

    // - Archivo a texto. Ingresar nombre del archivo.

    // - Comprimir
    // 1) RLA -> compresion_rla(ptr, l1, &ptr2, &l2);
    // 2) LZ78 -> compresion_lz78(ptr, l1, &ptr2, &l2);

    // - Descomprimir
    // 1) RLA -> descompresion_rla(ptr, l1, &ptr2, &l2);
    // 2) LZ78 -> descompresion_lz78(ptr, l1, &ptr2, &l2);

    // - Encriptar -> encriptamiento(ptr, l1, &ptr2, &l2, clave, nRot);

    // - Desencriptar -> desencriptamiento(ptr, l1, &ptr2, &l2, clave, nRot);

    // - Texto a archivo. Ingresar nombre salida.

    unsigned char ejemplo1[12] = "Hola Mundo!";
    unsigned char *ptr1, *ptr11;
    unsigned int l1, l11;
    cout << ejemplo1 << endl;
    compresion_rle(ejemplo1, 12, ptr1, l1);
    cout << ptr1 << " " << l1 << endl;
    descompresion_rle(ptr1, l1, ptr11, l11);
    cout << ptr11 << " " << l11 << endl;

    cout << endl;

    unsigned char ejemplo2[17] = "AAABBBBBAACCCDDD";
    unsigned char *ptr2, *ptr22;
    unsigned int l2, l22;
    cout << ejemplo2 << endl;
    compresion_rle(ejemplo2, 17, ptr2, l2);
    cout << ptr2 << " " << l2 << endl;
    descompresion_rle(ptr2, l2, ptr22, l22);
    cout << ptr22 << " " << l22 << endl;

    cout << endl;
}