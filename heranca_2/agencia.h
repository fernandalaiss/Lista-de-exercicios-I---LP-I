#include <iostream>
#include <vector>
#include "conta.h"
using namespace std;

#ifndef _AGENCIA_H_
#define _AGENCIA_H_

class Agencia{
	private:
		vector<Conta> vector_contas_;
		int quantidade_contas_;
	protected:
		int agencia_id_;
	public:	
		Agencia(int agencia_id);
		~Agencia();

		void criarConta();
		void excluirConta(int conta_id);

		pair<bool, int> buscarConta(int conta_id);
		void sacar(int conta_id, float valor);
		void depositar(int conta_id, float valor);
		void transferir(int conta_id, float valor);
		void emitirSaldo(int conta_id);
		void emitirExtrato(int conta_id);
};

#endif