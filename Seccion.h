//
// Created by Maria Hilda Bermejo on 10/30/19.
//

#ifndef MATRICULA_SECCION_H
#define MATRICULA_SECCION_H

#include "Alumno.h"
#include "Curso.h"
#include "Profesor.h"
#include "Laboratorio.h"


class Seccion {
private:
    Curso           * m_Curso;
    Profesor        * m_Profesor;
    Laboratorio     * m_Laboratorio;
    vector<Alumno*> m_ListaAlumno;
    TipoEntero m_Dia;
    TipoEntero m_HoraInicio;
    TipoEntero m_HoraFin;
    TipoEntero m_NumeroMatriculados;
public:
    Seccion(){};
    virtual ~Seccion(){};
    void setCurso(Curso* pCurso){ this->m_Curso =pCurso;}
    void setProfesor(Profesor* pProfesor){this->m_Profesor = pProfesor;}
    void setLaboratorio(Laboratorio* pLaboratorio){this->m_Laboratorio =pLaboratorio;}

    void setALumno(Alumno* pAlumno) { m_ListaAlumno.push_back(pAlumno);}

    void setDia(TipoEntero pDia){m_Dia =pDia;}
    void setHoraInicio(TipoEntero pHoraInicio){m_HoraInicio = pHoraInicio;}
    void setHoraFin(TipoEntero pHoraFin){m_HoraFin= pHoraFin;}
    void setNumeroMatriculados(TipoEntero pNumeroMatriculados){m_NumeroMatriculados = pNumeroMatriculados;}

    Curso       *getCurso(){return m_Curso;}
    Profesor    * getProfesor(){return m_Profesor;}
    Laboratorio * getLaboratorio(){return m_Laboratorio;}
    TipoEntero  getDia(){return m_Dia;}
    TipoEntero  getHoraInicio(){return m_HoraInicio;}
    TipoEntero  getHoraFin(){return m_HoraFin;}

    TipoEntero  getNumeroMatriculados(){return m_NumeroMatriculados;}
    vector<Alumno*> getListaAlumnos(){return m_ListaAlumno;}
    void mostrarDatos();

};





#endif //MATRICULA_SECCION_H
