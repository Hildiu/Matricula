//
// Created by Maria Hilda Bermejo on 10/30/19.
//

#include "Seccion.h"

void Seccion::mostrarDatos()
{
  cout << "\n";
  cout<<"\nDatos de la seccion"<<"\n";
  cout <<"---------------------\n";
  m_Curso->mostrarDatos();
  m_Profesor->mostrarDatos();
  m_Laboratorio->mostrarDatos();
  cout <<"\n";
  cout<<" Dia          :"<< m_Dia<<"\n";
  cout<<" Hora inicio  :" << m_HoraInicio<<"\n";
  cout<<" Hora fin     :" << m_HoraFin <<"\n";

  for (auto& item: m_ListaAlumno)
    item->mostrarDatos();
}