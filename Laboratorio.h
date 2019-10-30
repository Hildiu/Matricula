//
// Created by Maria Hilda Bermejo on 10/30/19.
//

#ifndef MATRICULA_LABORATORIO_H
#define MATRICULA_LABORATORIO_H

#include "Tipos.h"

class Laboratorio {
private:
    TipoString codigo;
    TipoEntero numeroPiso;
    TipoEntero numeroComputadoras;
public:
    Laboratorio(){};
    virtual ~Laboratorio(){};
    void setCodigo(TipoString _codigo){codigo = _codigo;}
    void setNumeroPiso(TipoEntero _numeroPiso){numeroPiso = _numeroPiso;}
    void setNumeroComputadoras(TipoEntero _numeroComputadoras){numeroComputadoras =_numeroComputadoras;}
    TipoString getCodigo(){return codigo;}
    TipoEntero getNumeroPiso(){return numeroPiso;}
    TipoEntero getNumeroComputadoras(){return numeroComputadoras;}
    void mostrarDatos();
};

#endif //MATRICULA_LABORATORIO_H
