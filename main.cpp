#include "Tipos.h"
#include "Alumno.h"
#include "Curso.h"
#include "Laboratorio.h"
#include "Profesor.h"
#include "Seccion.h"

int main()
{
  Alumno *pJorge =new Alumno();
  Alumno *pLuis = new Alumno();

  pJorge->setCodigo("A2017001");
  pJorge->setApellidoPaterno("Perez");
  pJorge->setApellidoMaterno("Perez");
  pJorge->setNombres("Jorge");
  pJorge->setEdad(17);
  pJorge->setCorreo("jorge@utec.edu.pe");
  pJorge->setCreditoAcumulado(30);

  pLuis->setCodigo("A2017002");
  pLuis->setApellidoPaterno("Costa");
  pLuis->setApellidoMaterno("Piñan");
  pLuis->setNombres("Luis");
  pLuis->setEdad(17);
  pLuis->setCorreo("luis@utec.edu.pe");
  pLuis->setCreditoAcumulado(15);

  pJorge->mostrarDatos();
  pLuis->mostrarDatos();

  Curso *pPoo = new Curso();

  //seteamos el curso poo
  pPoo->setCodigo("CS1002");
  pPoo->setNombres("Programacion orientada a objectos");
  pPoo->setPrerequisito("CS1001");
  pPoo->setCiclo(2);
  pPoo->setCredito(4);

  pPoo->mostrarDatos();

  Laboratorio * l604 = new Laboratorio();
  //seteamos lab
  l604->setCodigo("L604");
  l604->setNumeroComputadoras(25);
  l604->setNumeroPiso(6);
  l604->mostrarDatos();

  Profesor *pTeofilo= new Profesor();

  //seteamo al profesor
  pTeofilo->setCodigo("P2017001");
  pTeofilo->setNombres("Teofilo");
  pTeofilo->setCorreo("teofilo@utec.edu.pe");
  pTeofilo->setApellidoPaterno("CHambilla");
  pTeofilo->setApellidoMaterno("AQuino");

  pTeofilo->mostrarDatos();

  //--- se arma la seccion
  Seccion *pUnica = new Seccion();

  pUnica->setCurso(pPoo);
  pUnica->setProfesor(pTeofilo);
  pUnica->setLaboratorio(l604);
  pUnica->setDia(2);
  pUnica->setHoraInicio(18);
  pUnica->setHoraFin(22);

  pUnica->setNumeroMatriculados(2);
  pUnica->setALumno(pJorge);
  pUnica->setALumno(pLuis);
  pUnica->mostrarDatos();

  return 0;
}