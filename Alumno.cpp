//
// Created by Maria Hilda Bermejo on 10/30/19.
//

#include "Alumno.h"

void Alumno::mostrarDatos()
{ cout << "\n";
  cout<<" Datos del Alumno "<< "\n";
  cout<<" Codigo              : "<<m_Codigo<<"\n";
  cout<<" Nombres             : "<<m_Nombres<<"\n";
  cout<<" Apellido Paterno    : "<<m_ApePaterno<<"\n";
  cout<<" Apellido Materno    : "<<m_ApeMaterno<<"\n";
  cout<<" Edad                : "<<m_Edad<<"\n";
  cout<<" Correo              : "<<m_CuentaCorreo<<"\n";
  cout<<" Creditos Acumulados : "<< m_CreditosAcumulados<<"\n";
}
