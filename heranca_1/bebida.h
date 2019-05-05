#include <iostream>
#include <string>
#include "produto.h"
using namespace std;

#ifndef _BEBIDA_
#define _BEBIDA_

class Bebida: public Produto{
	protected:
		float teor_alcoolico_;
	public:
		Bebida(int codigo_de_barras, string descricao, float preco, float teor_alcoolico);

		float getTeorAlcoolico();

		friend ostream& operator <<(ostream &o, const Bebida &b);
};

#endif

