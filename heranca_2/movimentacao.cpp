#include <iostream>
#include <string>
#include "movimentacao.h"
using namespace std;

Movimentacao::Movimentacao(string operacao, float valor, string tipo) : operacao_(operacao), valor_(valor), tipo_(tipo){}
Movimentacao::~Movimentacao(){}

string Movimentacao::getMovimentacao(){
	string m;
	m.append("\nOperação de "); 
	m.append(operacao_);
	m.append(" realizada no valor de R$ "); 
	m.append(to_string(valor_));
	m.append(" no tipo ");
	m.append(tipo_);
	m.append(".\n");

	return m;
}