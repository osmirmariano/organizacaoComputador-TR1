#include <iostream>
#include "Conversao.cpp"

using namespace std;

int main(int argc, char const *argv[]){
	int op, valor;

	Conversao *conversao = new Conversao();
    do{
        cout << endl << "-------------------------------------------------------" << endl;
        cout << "\t MENU DE OPÇÕES" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "  1 -- INSERÇÃO DE VALOR PARA CONVERSÃO " << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "  2 -- DECIMAL PARA BINÁRIO " << endl;
        cout << "  3 -- DECIMAL PARA HEXADECIMAL" << endl;
        cout << "  4 -- DECIMAL PARA OCTAL" << endl;
        cout << "  5 -- BINÁRIO PARA DECIMAL " << endl;
        cout << "  6 -- BINÁRIO PARA HEXADECIMAL " << endl;
        cout << "  7 -- BINÁRIO PARA OCTAL" << endl;
        cout << "  8 -- HEXADECIMAL PARA DECIMAL" << endl;
        cout << "  9 -- HEXADECIMAL PARA BINÁRIO" << endl;
        cout << " 10 -- HEXADECIMAL PARA OCTAL" << endl;
        cout << " 11 -- OCTAL PARA DECIMAL" << endl;
        cout << " 12 -- OCTAL PARA HEXADECIMAL" << endl;
        cout << " 13 -- OCTAL PARA BINÁRIO" << endl;
        cout << "  0 -- SAIR " << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "OPÇÃO: ";
        cin >> op;
        cout << "-------------------------------------------------------" << endl;

        switch(op){
        	case 1:
        		cout << "-------------------------------------------------------" << endl;
        		cout << "\t Informe um valor para conversão" << endl;
        		cout << "-------------------------------------------------------" << endl;
                cout << " VALOR: ";
                cin >> valor;
                cout << "-------------------------------------------------------" << endl;
                break;
            case 2:
                cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE DECIMAL X BINÁRIO" << endl;
                cout << "-------------------------------------------------------" << endl;
                conversao->decimalBinario(valor);
                break;
            case 3:
            	cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE DECIMAL X HEXADECIMAL" << endl;
                cout << "-------------------------------------------------------" << endl;
                conversao->decimalHexadecimal(valor);
                break;
            case 4:
            	cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE DECIMAL X OCTAL" << endl;
                cout << "-------------------------------------------------------" << endl;
                //cout << " VALOR: " <<;  //conversao->decimalOctal();
                break;
            case 5:
            	cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE BINÁRIO X DECIMAL" << endl;
                cout << "-------------------------------------------------------" << endl;
                //cout << " VALOR: " <<;  //conversao->binarioDecimal();
                break;
            case 6:
            	cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE BINÁRIO X HEXADECIMAL" << endl;
                cout << "-------------------------------------------------------" << endl;
                //cout << " VALOR: " <<;  //conversao->binarioHexadecimal();
                break;
            case 7:
            	cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE BINÁRIO X OCTAL" << endl;
                cout << "-------------------------------------------------------" << endl;
                //cout << " VALOR: " <<;  //conversao->binarioOctal();
                break;
            case 8:
            	cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE HEXADECIMAL X DECIMAL" << endl;
                cout << "-------------------------------------------------------" << endl;
                //cout << " VALOR: " <<;  //conversao->hexadecimalDecimal();
                break;
            case 9:
            	cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE HEXADECIMAL X BINÁRIO" << endl;
                cout << "-------------------------------------------------------" << endl;
                //cout << " VALOR: " <<;  //conversao->hexadecimalBinario();
                break;
            case 10:
            	cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE HEXADECIMAL X OCTAL" << endl;
                cout << "-------------------------------------------------------" << endl;
                //cout << " VALOR: " <<;  //conversao->hexadecimalOctal();
                break;
            case 11:
            	cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE OCTAL X DECIMAL" << endl;
                cout << "-------------------------------------------------------" << endl;
                //cout << " VALOR: " <<;  //conversao->octalDecimal();
                break;
            case 12:
            	cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE OCTAL X HEXADECIMAL" << endl;
                cout << "-------------------------------------------------------" << endl;
                //cout << " VALOR: " <<;  //conversao->octalHexadecimal();
                break;
            case 13:
            	cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE OCTAL X BINÁRIO" << endl;
                cout << "-------------------------------------------------------" << endl;
                //cout << " VALOR: " <<;  //conversao->octalBinario();
                break;
            case 0: 
            	cout << "\t PROGRAMA ENCERRADO COM SUCESSO!\n \t VOLTE SEMPRE!" << endl;
                break;
            default:
                cout << "OPÇÃO INVÁLIDA, DIGITE UMA VÁLIDA, POR FAVOR!" << endl;
        };
    }while(op != 0);
}