#include <iostream>
#include <vector>
#include <string>
#include "movimentacao.h"
using namespace std;

#ifndef _CONTA_H_
#define _CONTA_H_

class Conta{
	private:
		vector<Movimentacao> vector_movimentacao_;
		int conta_id_;
		float saldo_;
		char especial_; // especial ou não
		float limite_total_; // tem tbm o método que contabiliza o limite disponível

	public:	
		Conta(int conta_id, char especial, float limite_total); //saldo 0.00 atribuído inicialmente
		~Conta();

		int getContaId();
		float getSaldo();
		char getEspecial();
		float getLimiteTotal();
		float getLimiteDisponivel();
		string getMovimentacao();
		void setSaldo(float const valor);
		void novaMovimentacao(string operacao, float valor, string tipo);
		friend ostream& operator<<(ostream& o, Conta& c);
};

#endif
