#include <iostream>
#include "produto.h"
#include "data.h"

Data::Data(int dia, int mes, int ano) : dia_(dia), mes_(mes), ano_(ano) {}

ostream& operator << (ostream& o, const Data& d){
	o << d.dia_ << "/" << d.mes_ << "/" << d.ano_ << endl;
	return o;
}