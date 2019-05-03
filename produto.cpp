#include <iostream>
#include <string>
#include "produto.h"
using namespace std;

Produto::Produto(int codigo_de_barras, string descricao, float preco) : codigo_de_barras_(codigo_de_barras), descricao_(descricao), preco_(preco){}

int Produto::getCodigoDeBarras(){ return codigo_de_barras_; }
string Produto::getDescricao(){ return descricao_; }
float Produto::getPreco(){ return preco_; }

float Produto::operator+ (Produto &p){
	float aux = this->preco_ + p.preco_;
	return aux;
}

float Produto::operator- (Produto &p){
	float aux = this->preco_ - p.preco_;
	return aux;
}

bool Produto::operator== (Produto &p){
	if(this->codigo_de_barras_ == p.codigo_de_barras_)
		return true;
	return false;
}