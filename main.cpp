#include <iostream>
#include "Conversao.cpp"

using namespace std;

int main(int argc, char const *argv[]){
	int op, valor;
	string valor1;
	Conversao *conversao = new Conversao();
    do{
        cout << endl << "----------------------------------------------------------------------------" << endl;
        cout << "                              MENU DE OPÇÕES" << endl;
        cout << "----------------------------------------------------------------------------" << endl;
        cout << "  1 -- DECIMAL PARA BINÁRIO      ok |   7  -- HEXADECIMAL PARA DECIMAL  ok |" << endl;
        cout << "  2 -- DECIMAL PARA HEXADECIMAL  ok |   8  -- HEXADECIMAL PARA BINÁRIO     |" << endl;
        cout << "  3 -- DECIMAL PARA OCTAL        ok |   9  -- HEXADECIMAL PARA OCTAL    ok |" << endl;
        cout << "  4 -- BINÁRIO PARA DECIMAL      ok |   10 -- OCTAL PARA DECIMAL        ok |" << endl;
        cout << "  5 -- BINÁRIO PARA HEXADECIMAL -ok |   11 -- OCTAL PARA HEXADECIMAL    ok |" << endl;
        cout << "  6 -- BINÁRIO PARA OCTAL        ok |   12 -- OCTAL PARA BINÁRIO       -ok |" << endl;
        cout << "  0 -- SAIR                                                                |" << endl;
        cout << "----------------------------------------------------------------------------" << endl;
        cout << "  OPÇÃO: ";
        cin >> op;
        cout << "----------------------------------------------------------------------------" << endl << endl;

        switch(op){
            case 1:
                cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE DECIMAL X BINÁRIO" << endl;
                cout << "-------------------------------------------------------" << endl;
                cout << "  INFORME UM VALOR EM DECIMAL: ";
                cin >> valor;
                cout << "-------------------------------------------------------" << endl;
                conversao->decimalBinario(valor);
                //conversao->imprimiDecimalBinario(valor);
                cout << endl << endl;
                break;
            case 2:
            	cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE DECIMAL X HEXADECIMAL" << endl;
                cout << "-------------------------------------------------------" << endl;
                cout << "  INFORME UM VALOR EM DECIMAL: ";
                cin >> valor;
                cout << "-------------------------------------------------------" << endl;
                conversao->decimalHexadecimal(valor);
                cout << endl << endl;
                break;
            case 3:
            	cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE DECIMAL X OCTAL" << endl;
                cout << "-------------------------------------------------------" << endl;
                cout << "  INFORME UM VALOR EM DECIMAL: ";
                cin >> valor;
                cout << "-------------------------------------------------------" << endl;
                conversao->decimalOctal(valor);
                cout << endl << endl;
                break;
            case 4:
            	cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE BINÁRIO X DECIMAL" << endl;
                cout << "-------------------------------------------------------" << endl;
                cout << "  INFORME UM VALOR EM BINÁRIO: ";
                cin >> valor1;
                cout << "-------------------------------------------------------" << endl;
                conversao->binarioDecimal(valor1);
                cout << endl << endl;
                break;
            
            case 5:
            	cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE BINÁRIO X HEXADECIMAL" << endl;
                cout << "-------------------------------------------------------" << endl;
                cout << "  INFORME UM VALOR EM BINÁRIO: ";
                cin >> valor1;
                cout << "-------------------------------------------------------" << endl;
                conversao->binarioHexadecimal(valor1);
                cout << endl << endl;
                break;
                
            case 6:
            	cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE BINÁRIO X OCTAL" << endl;
                cout << "-------------------------------------------------------" << endl;
                cout << "  INFORME UM VALOR EM BINÁRIO: ";
                cin >> valor1;
                cout << "-------------------------------------------------------" << endl;
                conversao->binarioOctal(valor1);
                cout << endl;
                break;
                
            case 7:
            	cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE HEXADECIMAL X DECIMAL" << endl;
                cout << "-------------------------------------------------------" << endl;
                cout << "  INFORME UM VALOR EM HEXADECIMAL: ";
                cin >> valor1;                
                cout << "-------------------------------------------------------" << endl;
                conversao->hexadecimalDecimal(valor1);
                cout << endl << endl;
                break;
            case 8:
            	cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE HEXADECIMAL X BINÁRIO" << endl;
                cout << "-------------------------------------------------------" << endl;
                //cout << " VALOR: " <<;  //conversao->hexadecimalBinario();
                cout << endl;
                break;
            case 9:
            	cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE HEXADECIMAL X OCTAL" << endl;
                cout << "-------------------------------------------------------" << endl;
                cout << "  INFORME UM VALOR EM HEXADECIMAL: ";
                cin >> valor1;                
                cout << "-------------------------------------------------------" << endl;
                conversao->hexadecimalOctal(valor1);
                cout << endl << endl;
                break;
            case 10:
            	cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE OCTAL X DECIMAL" << endl;
                cout << "-------------------------------------------------------" << endl;
                cout << "  INFORME UM VALOR EM OCTAL: ";
                cin >> valor1;                
                cout << "-------------------------------------------------------" << endl;
                conversao->octalDecimal(valor1);
                cout << endl << endl;
                break;

            case 11:
            	cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE OCTAL X HEXADECIMAL" << endl;
                cout << "-------------------------------------------------------" << endl;
                cout << "  INFORME UM VALOR EM OCTAL: ";
                cin >> valor1;                
                cout << "-------------------------------------------------------" << endl;
                conversao->octalHexadecimal(valor1);
                cout << endl << endl;

                break;
            case 12:
            	cout << "-------------------------------------------------------" << endl;
                cout << "\t CONVERSÃO DE OCTAL X BINÁRIO" << endl;
                cout << "-------------------------------------------------------" << endl;
                cout << "  INFORME UM VALOR EM OCTAL: ";
                cin >> valor1;                
                cout << "-------------------------------------------------------" << endl;
                conversao->octalBinario(valor1);
                cout << endl;
                break;
            case 0: 
            	cout << " PROGRAMA ENCERRADO COM SUCESSO! VOLTE SEMPRE!" << endl;
                break;
            default:
                cout << "OPÇÃO INVÁLIDA, DIGITE UMA VÁLIDA, POR FAVOR!" << endl;
        };
    }while(op != 0);
}