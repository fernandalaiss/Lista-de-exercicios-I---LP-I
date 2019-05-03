#include <iostream>
#include <string>
#include "produto.h"
#include "bebida.h"
using namespace std;

Bebida::Bebida(int codigo_de_barras, string descricao, float preco, float teor_alcoolico) : 
				Produto(codigo_de_barras, descricao, preco), teor_alcoolico_(teor_alcoolico){}

float Bebida::getTeorAlcoolico(){ return teor_alcoolico_; }

ostream& operator <<(ostream &o, const Bebida &b){
	o << "Código de barras: " << b.codigo_de_barras_ << "\nDescricao: " << b.descricao_ << "\nPreco: " << b.preco_ 
	  << "\nTeor Alcoolico: " << b.teor_alcoolico_ << endl;
	  return o;
}