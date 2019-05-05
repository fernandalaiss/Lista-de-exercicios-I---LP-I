#include <iostream>
#include <string>
#include "produto.h"
#include "roupa.h"
#include "bebida.h"
#include "fruta.h"
#include "data.h"
using namespace std;

int main(){
	
	// int codigo_de_barras, string descricao, float preco
	
	Produto p1(123, "mata a sede", 1.50);
	Produto p2(124, "limpa o chao", 2.70);

	cout << "Teste de operators:\nSoma: " << p1 + p2 << "\nSub: " << p2 - p1 << "\nCódigo de barras: ";
	if(p1 == p2){
		cout << "iguais\n";
	}else{
		cout << "diferentes\n";
	}

	cout << "\n\n";
	
	/******************************/

	cout << "Produtos especificos\n";
	
	// int codigo_de_barras, string descricao, float preco, string marca, char sexo, int tamanho
	Roupa r1(125, "verão fresquinho", 23.45, "Julie", 'F', 38);
	cout << r1 << "\n";

	// int codigo_de_barras, string descricao, float preco, float teor_alcoolico
	Bebida b1(126, "mata a sede", 3.40, 45.5);
	cout << b1 << "\n";

	// int codigo_de_barras, string descricao, float preco, Data data_lote, Data data_validade
	Fruta f1(127, "nutritiva", 5.67, Data(2,1,2019), Data(5,11,2025));
	cout << f1 << "\n";

	cout << "Teste de operators:\nSoma: " << r1 + b1 << "\nSub: " << r1 - b1 << "\nCódigo de barras: ";
	if(r1 == b1){
		cout << "iguais\n";
	}else{
		cout << "diferentes\n";
	}

	cout << "\n";

	return 0;
}