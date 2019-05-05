#include <ostream>
#include <string>
#include "produto.h"
using namespace std;

#ifndef _ROUPA_
#define _ROUPA_

class Roupa: public Produto{
	protected:
		string marca_;
		char sexo_;
		int tamanho_;
	public:
		Roupa(int codigo_de_barras, string descricao, float preco, string marca, char sexo, int tamanho);

		string getMarca();
		char getSexo();
		int getTamanho();

		friend ostream& operator <<(ostream& o, const Roupa& r);
};

#endif
