/*
 * UsuarioController.h
 *
 *  Created on: Jun 25, 2024
 *      Author: dylan
 */

#ifndef CONTROLLERS_USUARIOCONTROLLER_H_
#define CONTROLLERS_USUARIOCONTROLLER_H_
#include "Sistema.h"
#include "IUsuario.h"
#include "../ICollections/interfaces/IIterator.h"
class UsuarioController : public IUsuario{
private:
	Sistema* sistema;
public:

	UsuarioController();
	virtual ~UsuarioController();

	set<string> listarIdiomas();
	bool verificarNickname(string nickname);
	DTOProfesor altaProfesor(DTOProfesor* dto);
	DTOEstudiante altaEstudiante(DTOEstudiante* dto);
};

#endif /* CONTROLLERS_USUARIOCONTROLLER_H_ */
