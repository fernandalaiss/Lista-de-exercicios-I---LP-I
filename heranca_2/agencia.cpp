#include <iostream>
#include <vector>
#include <utility>
#include "agencia.h"
#include "conta.h"
using namespace std;

Agencia::Agencia(int agencia_id): quantidade_contas_(0), agencia_id_(agencia_id){}
Agencia::~Agencia(){}

void Agencia::criarConta(){
	int conta_id; char especial; float limite_total;
	
	cout << "\n----------Criando nova conta----------" << endl;
	cout << "Número: " << endl;
	cin >> conta_id;
	cout << "Especial(S) ou normal(N): " << endl;
	cin >> especial;
	cout << "Limite total: " << endl;
	cin >> limite_total;

	Conta c(conta_id, especial, limite_total);
	vector_contas_.push_back(c);
	quantidade_contas_++;
}

pair<bool, int> Agencia::buscarConta(int conta_id){
	pair <bool, int> retorno;
	retorno.first = false;
	retorno.second = -1;
	if(quantidade_contas_ > 0){
		for(auto& elemento : vector_contas_){
			retorno.second++;
			if(elemento.getContaId() == conta_id)
				retorno.first = true;
		}
	}else{
		cout << "Não há contas criadas.\n";
	}
	return retorno;
}

void Agencia::excluirConta(int conta_id){
	pair <bool, int> busca = buscarConta(conta_id);

	if(busca.first == true){
		vector_contas_.erase(vector_contas_.begin() + busca.second);
		quantidade_contas_--;	
		cout << "Conta " << conta_id << " excluída.\n";
	}else{
		cout << "Conta " << conta_id << " não existe.\n";
	}
}

void Agencia::sacar(int conta_id, float valor){
	pair <bool, int> busca = buscarConta(conta_id);

	if(busca.first == true){
		int saldo = (vector_contas_.begin() + busca.second)->getSaldo();
		if(saldo <= 0){
			cout << "Erro. Você não tem dinheiro na conta. Realize um depósito.\n";
		}else if(valor > saldo){
			cout << "Erro. Você pode sacar até R$ " << saldo << " reais.\n";
		}else{
			(vector_contas_.begin() + busca.second)->setSaldo(-valor);
			cout << "Você acaba de sacar R$ " << valor << " reais.\n Seu saldo atual é de R$ " << saldo - valor << endl;
		}

		(vector_contas_.begin() + busca.second)->novaMovimentacao("saque", valor, "débito");
	}else{
		cout << "Conta " << conta_id << " não existe.\n";	
	}	
}
void Agencia::depositar(int conta_id, float valor){
	pair <bool, int> busca = buscarConta(conta_id);

	if(busca.first == true){
		int saldo = (vector_contas_.begin() + busca.second)->getSaldo();
		int limite_total = (vector_contas_.begin() + busca.second)->getLimiteTotal();
		if( (saldo + valor) > limite_total){
			cout << "Erro. Você pode depositar até seu limite de R$ " << limite_total << " reais.\n";
		}else{
			(vector_contas_.begin() + busca.second)->setSaldo(valor);
			cout << "Você acaba de depositar R$ " << valor << " reais.\nSeu saldo atual é de R$ " << saldo + valor << endl;
		}

		(vector_contas_.begin() + busca.second)->novaMovimentacao("depósito", valor, "débito");
	}else{
		cout << "Conta " << conta_id << " não existe.\n";	
	}	
}
void Agencia::transferir(int conta_id, float valor){
	//(vector_contas_.begin() + busca.second)->novaMovimentacao("transferência", valor, "débito");
}

void Agencia::emitirSaldo(int conta_id){
pair <bool, int> busca = buscarConta(conta_id);

	if(busca.first == true){
		int saldo = (vector_contas_.begin() + busca.second)->getSaldo();
		int limite = (vector_contas_.begin() + busca.second)->getLimiteDisponivel();
		cout << "Seu saldo é de R$ " << saldo << " reais.\nSeu limite disponível é de R$ " << limite << "reais.\n";
	}else{
		cout << "Conta " << conta_id << " não existe.\n";	
	}
}

void Agencia::emitirExtrato(int conta_id){
	pair <bool, int> busca = buscarConta(conta_id);

	if(busca.first == true){
		cout << (vector_contas_.begin() + busca.second)->getMovimentacao() << "\n";
	}else{
		cout << "Conta " << conta_id << " não existe.\n";	
	}
}