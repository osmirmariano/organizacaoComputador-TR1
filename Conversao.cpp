#include <iostream>

using namespace std;

class Conversao{
	public:
		int valor;
		int *decimal;
	public:
		Conversao(){
			this->decimal = decimal;
			this->valor = valor;
		};

		~Conversao();

	//Função para Conversão de Decimal para Binário
	int decimalBinario(int valor){
		int *decimalBin = new int[valor];
		int x, cont = 0;
		while(valor != 0){
			decimalBin[x] = valor%2;
			valor = valor/2;
			x++;
			cont++;
		}

		for(int x = cont-1; x >= 0; x--){
			cout << " " << decimalBin[x];
		}
	};

	//Função para Conversão de Decimal para Hexadecimal
	int decimalHexadecimal(int valor){
		int *decimalHex = new int[valor];
		int x, cont = 0;

		while(valor != 0){
			decimalHex[x] = valor%16;
			valor = valor/16;
			x++;
			cont++;
		}

		/*for(int x = 0; x < cont; x++){
			if(decimalHex[x] == 10)
				decimalHex[x] = "a";
			else{
				if(decimalHex[x] == 11)
					decimalHex[x] = "b";
				else{
					if(decimalHex[x] == 12)
						decimalHex[x] == "c";
					else{
						if(decimalHex[x] == 13)
							decimalHex[x] = "d";
						else{
							if(decimalHex[x] == 14)
								decimalHex[x] = "e";
							else{
								if(decimalHex[x] == 15)
									decimalHex[x] = "f";
							}
						}
					}
				}
			}
		}*/

		for(int x = cont-1; x >= 0; x--){
			cout << " " << decimalHex[x];
		}
	};
		
};