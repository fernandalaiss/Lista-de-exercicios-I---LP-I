#include <iostream>
#include <vector>
#include <string>
#include "conta.h"
#include "movimentacao.h"
using namespace std;

Conta::Conta(int conta_id, char especial, float limite_total) : conta_id_(conta_id), saldo_(0.0), especial_(especial), limite_total_(limite_total){}
Conta::~Conta(){}

int Conta::getContaId(){ return conta_id_; }
float Conta::getSaldo(){ return saldo_; }
char Conta::getEspecial(){ return especial_; }
float Conta::getLimiteTotal(){ return limite_total_; }
float Conta::getLimiteDisponivel(){ return (limite_total_ - saldo_); }

string Conta::getMovimentacao(){
	string movimentacao;
	for(auto& elemento : vector_movimentacao_){
		movimentacao.append(elemento.getMovimentacao());
	}
	return movimentacao;
}

void Conta::setSaldo(float valor){
	saldo_ += valor;
}
void Conta::novaMovimentacao(string operacao, float valor, string tipo){
	Movimentacao m(string operacao, float valor, string tipo);
	vector_movimentacao_.push_back(m);
}

ostream& operator<<(ostream& o, Conta& c){
	o << "Conta " << c.conta_id_ << "\nSaldo: " << c.saldo_ << "\nEspecial: " << c.especial_ << "\nLimite total: " << c.limite_total_ << "\n" << endl;
	return o;
}