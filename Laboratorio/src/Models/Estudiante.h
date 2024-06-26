/*
 * Estudiante.h
 *
 *  Created on: Jun 26, 2024
 *      Author: dylan
 */

#ifndef MODELS_ESTUDIANTE_H_
#define MODELS_ESTUDIANTE_H_

#include "Usuario.h"

class Estudiante: public Usuario {
private:
	string paisResidencia;
public:
	Estudiante(string nick, string pass, string nom,	string descrip, string pais);
	virtual ~Estudiante();
	set<string> mostrarInfo();

};
#endif /* MODELS_ESTUDIANTE_H_ */