#include <iostream>
#include <string>
using namespace std;

#ifndef _MOVIMENTACAO_H_
#define _MOVIMENTACAO_H_

class Movimentacao{
	private:
		string operacao_;
		float valor_;
		string tipo_;
	public:	
		Movimentacao(string operacao, float valor, string tipo);
		~Movimentacao();
		string getMovimentacao();
};

#endif
