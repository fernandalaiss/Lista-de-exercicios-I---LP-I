#include <iostream>

#ifndef _DATA_
#define _DATA_

class Data{
	private:
		int dia_;
		int mes_;
		int ano_; 
	public:
		Data(int dia, int mes, int ano);
		friend ostream& operator << (ostream& o, const Data &d);
};

#endif

