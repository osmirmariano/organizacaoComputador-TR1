#include <iostream>
#include <string>
#include <malloc.h>

using namespace std;

class Conversao{
	public:
		int valor, *decimalBin, *decimalHex, cont;
	public:
		Conversao(){
			this->valor = valor;
			cont = 0;
		}

		~Conversao();

	//Função para Conversão de Decimal para Binário
	void decimalBinario(int valor){
		int *decimalBin = new int[valor];
		int x, cont = 0;
		while(valor != 0){
			decimalBin[x] = valor%2;
			valor = valor/2;
			x++;
			cont++;
		}
		cout << " VALOR: ";
		for(int x = cont-1; x >= 0; x--){
			cout << "" << decimalBin[x];
		}
	};

	
	//Função para Conversão de Decimal para Hexadecimal
	void decimalHexadecimal(int valor){
		int *decimalHex = new int[valor];
		string vetor = "";
		int x, cont = 0;
		while(valor != 0){
			decimalHex[x] = valor%16;
			valor = valor/16;
			x++;
			cont++;
		}

		
		/*for(int x = cont-1; x >= 0; x--){
			cout << "OI" << endl;
			vetor = 48+decimalHex[x];
			cout << "NOW " << vetor[x] << endl;
		}*/

		for(int x = 0; x < cont; x++){
			if(decimalHex[x] == 10)
				decimalHex[x] = 'a';
			else{
				if(decimalHex[x] == 11)
					decimalHex[x] = 'b';
				else{
					if(decimalHex[x] == 12)
						decimalHex[x] = 'c';
					else{
						if(decimalHex[x] == 13)
							(string)decimalHex[x] = (string)'d';
						else{
							if(decimalHex[x] == 14)
								decimalHex[x] = 'e';
							else{
								if(decimalHex[x] == 15)
									decimalHex[x] = 'f';
							}
						}
					}
				}
			}
		}

		for(int x = cont-1; x >= 0; x--){
			cout << " " << decimalHex[x];
		}
	};

	//Função para Conversão de Decimal para Octal
	void decimalOctal(int valor){
		int *decimalOct = new int[valor];
		int x, cont = 0;
		while(valor != 0){
			decimalOct[x] = valor%8;
			valor = valor/8;
			x++;
			cont++;
		}
		cout << " VALOR: ";
		for(int x = cont-1; x >= 0; x--){
			cout << "" << decimalOct[x];
		}
	}
		
};