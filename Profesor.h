//
// Created by Maria Hilda Bermejo on 10/30/19.
//

#ifndef MATRICULA_PROFESOR_H
#define MATRICULA_PROFESOR_H

#include "Tipos.h"

class Profesor {
private:
    TipoString m_Codigo;
    TipoString m_Nombres;
    TipoString m_ApePaterno;
    TipoString m_ApeMaterno;
    TipoString m_CuentaCorreo;
public:
    Profesor(){};
    virtual ~Profesor(){};
    void setCodigo(TipoString pCodigo){m_Codigo=pCodigo;}
    void setNombres(TipoString pNombres){m_Nombres = pNombres;}
    void setApellidoPaterno(TipoString pApePaterno){m_ApePaterno = pApePaterno;}
    void setApellidoMaterno(TipoString pApeMaterno){m_ApeMaterno =pApeMaterno;}
    void setCorreo(TipoString pCorreo){m_CuentaCorreo = pCorreo;}

    TipoString getCodigo(){return m_Codigo;}
    TipoString getNombres(){return m_Nombres;}
    TipoString getApellidoPaterno(){return  m_ApePaterno;}
    TipoString getApellidoMaterno(){return m_ApeMaterno;}
    TipoString getCorreo(){return m_CuentaCorreo;}
    void mostrarDatos();
};



#endif //MATRICULA_PROFESOR_H
