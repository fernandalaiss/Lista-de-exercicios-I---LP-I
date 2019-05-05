#include <iostream>
#include <vector>
#include <string>
#include "agencia.h"
using namespace std;

int main(){
	Agencia caixa(001);
	caixa.criarConta();
	caixa.sacar(123, 1.0);
	caixa.depositar(123, 200.0);
	caixa.sacar(123, 30.00);
	caixa.emitirSaldo(123);
	caixa.emitirExtrato(123);
	return 0;
}