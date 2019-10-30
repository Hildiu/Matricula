//
// Created by Maria Hilda Bermejo on 10/30/19.
//

#ifndef MATRICULA_CURSO_H
#define MATRICULA_CURSO_H

#include "Tipos.h"

class Curso {
private:
    TipoString m_Codigo;
    TipoString m_Nombre;
    TipoString m_PreRequisito;
    TipoEntero m_Ciclo;
    TipoEntero m_Creditos;
public:
    Curso(){};
    virtual ~Curso(){};
    void setCodigo(TipoString _codigo) {m_Codigo=_codigo;}
    void setNombres(TipoString _nombre){ m_Nombre = _nombre;}
    void setPrerequisito(TipoString _preRequisito){m_PreRequisito = _preRequisito;}
    void setCiclo(TipoEntero _ciclo){m_Ciclo = _ciclo;}
    void setCredito(TipoEntero _creditos){m_Creditos = _creditos;}

    TipoString getCodigo(){return  m_Codigo;}
    TipoString getNombre(){return  m_Nombre;}
    TipoString getPrerequisitos(){return  m_PreRequisito;}
    TipoEntero getCiclo(){return  m_Ciclo;}
    TipoEntero getCreditos(){return  m_Creditos;}
    void mostrarDatos();
};

#endif //MATRICULA_CURSO_H
