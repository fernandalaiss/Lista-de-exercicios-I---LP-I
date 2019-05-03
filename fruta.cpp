#include <iostream>
#include <string>
#include "produto.h"
#include "fruta.h"
#include "data.h"

Fruta::Fruta(int codigo_de_barras, string descricao, float preco, Data data_lote, Data data_validade) : 
			Produto(codigo_de_barras, descricao, preco), data_lote_(data_lote), data_validade_(data_validade){}

Data Fruta::getDataLote(){ return data_lote_; }
Data Fruta::getDataValidade(){ return data_validade_; }

ostream& operator <<(ostream &o, const Fruta &f){
	o << "Código de barras: " << f.codigo_de_barras_ << "\nDescricao: " << f.descricao_ << "\nPreco: " << f.preco_ 
	  << "\nData do lote: " << f.data_lote_ << "Data de validade: " << f.data_validade_ << endl;
	  return o;
}