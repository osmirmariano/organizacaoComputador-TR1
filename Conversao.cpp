#include <iostream>

using namespace std;

class Conversao{
	public:
		int valor;
		int *decimal;
	public:
		Conversao();
		~Conversao();

	int decimalBinario(int valor){
		decimal = (int*)malloc(valor*sizeof(int));
		
	}
		
};