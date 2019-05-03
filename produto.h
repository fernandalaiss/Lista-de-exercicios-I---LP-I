#include <iostream>
#include <string>

using namespace std;

#ifndef _PRODUTO_
#define _PRODUTO_

class Produto{
	protected:
		int codigo_de_barras_;
		string descricao_;
		float preco_;
	public:
		Produto(int codigo_de_barras, string descricao, float preco);

		int getCodigoDeBarras();
		string getDescricao();
		float getPreco();

		float operator+(Produto &p);
		float operator-(Produto &p);
		bool operator==(Produto &p);
};

#endif
