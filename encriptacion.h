#ifndef ENCRIPTACION_H
#define ENCRIPTACION_H

void encriptamiento(unsigned char *ptr, unsigned int l1, unsigned char *&ptr2, unsigned int &l2, unsigned char *clave, unsigned short int nRot);

void desencriptacion(unsigned char *ptr, unsigned int l1, unsigned char *&ptr2, unsigned int &l2, unsigned char *clave, unsigned short int nRot);

#endif
