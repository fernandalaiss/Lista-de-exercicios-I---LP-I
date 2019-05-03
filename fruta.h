#include <iostream>
#include <string>
#include "produto.h"
#include "data.h"

using namespace std;

#ifndef _FRUTA_
#define _FRUTA_

class Fruta: public Produto{
	protected:
		Data data_lote_;
		Data data_validade_;
	public:
		Fruta(int codigo_de_barras, string descricao, float preco, Data data_lote, Data data_validade);

		Data getDataLote();
		Data getDataValidade();

		friend ostream& operator <<(ostream &o, const Fruta &f);
};

#endif
