#include <iostream>
#include <string>
#include "produto.h"
#include "roupa.h"
using namespace std;

Roupa::Roupa(int codigo_de_barras, string descricao, float preco, string marca, char sexo, int tamanho) : 
			Produto(codigo_de_barras, descricao, preco), marca_(marca), sexo_(sexo), tamanho_(tamanho){}

string Roupa::getMarca(){ return marca_; }
char Roupa::getSexo(){ return sexo_; }
int Roupa::getTamanho(){ return tamanho_; }

ostream& operator<<(ostream& o, const Roupa& r){
	o << "Código de barras: " << r.codigo_de_barras_ << "\nDescricao: " << r.descricao_ << "\nPreco: " << r.preco_ 
	  << "\nMarca: " << r.marca_ << "\nSexo: " << r.sexo_ << "\nTamanho: " << r.tamanho_ << endl;
	return o;
}
