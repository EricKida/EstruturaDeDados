#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

//1. Criar uma matriz de ordem 4 e exibir a soma da diagonal principal.

/*
int main() { 

	int matriz[4][4];
	int i, j;
	int soma = 0;
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			
			cout << "Insira o numero " << (i+1) << " da " << (j+1) << " coluna: ";
			cin >> matriz[i][j]; 
			
			if(i==j){
				soma = soma+matriz[i][j];
			}
		}
	}
	
	cout << "\nMatriz: \n";
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
	
			cout << matriz[i][j] << "\t";
			
		}
		cout << "\n";
	}
		
	
	cout << "\nValor de soma da diagonal principal: " << soma << "\n";
	
} 
*/

//2. Ler valores inteiros para a matriz A[3][5]. Gerar e imprimir o vetor Soma_Linha, onde cada elemento é a soma dos 
//elementos de uma linha da matriz A. Faça o trecho que gera a matriz separadamente da entrada e saída. 

/*
int main() { 

	int a[3][5];
	int soma_linha[3];
	int i, j;
	
	for(i = 0; i < 3; i++){
		soma_linha[i] = 0;
		for(j = 0; j < 5; j++){
			
			cout << "Insira o numero " << (i+1) << " da " << (j+1) << " coluna: ";
			cin >> a[i][j];
			soma_linha[i] = soma_linha[i] + a[i][j];
			
		}
	}
	
	cout << "\nMatriz: \n";
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 5; j++){
	
			cout << a[i][j] << "\t";
			
		}
		cout << "\n";
	}
	
	cout << "\n";
	
	for (i = 0; i < 3; i++){
		cout << "Soma da linha " << (i+1) << ": " << soma_linha[i] << "\n";
	}
}
*/

//3. Criar uma matriz 2x3. Gerar e imprimir a transposta dessa matriz. A matriz transposta é gerada trocando linha por coluna. 

/*
int main() { 

	int matriz[2][3];
	int transposta[3][2];
	int i, j;
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			
			cout << "Insira o numero " << (i+1) << " da " << (j+1) << " coluna: ";
			cin >> matriz[i][j]; 
			transposta[j][i] = matriz[i][j];
		
		}
	}
	
	cout << "\nMatriz: \n";
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
	
			cout << matriz[i][j] << "\t";
			
		}
		cout << "\n";
	}
	
	cout << "\nTransposta: \n";
	
	for(j = 0; j < 3; j++){
		for(i = 0; i < 2; i++){
	
			cout << transposta[j][i] << "\t";
			
		}
		cout << "\n";
	}
} 
*/

//4. Criar uma matriz de ordem 5 e imprima: toda a matriz e depois os números que se encontram em posições cuja a linha mais a coluna 
//formam um número ímpar.

/*
int main() { 

	int matriz[5][5];
	int i, j;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			
			cout << "Insira o numero " << (i+1) << " da " << (j+1) << " coluna: ";
			cin >> matriz[i][j]; 
		
		}
	}
	
	cout << "\nMatriz: \n";
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
	
			cout << matriz[i][j] << "\t";
			
		}
		cout << "\n";
	}
	
	cout << "\nLinha + Coluna = Impar: \n";
	
	for (i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			
			if((j+i) % 2 != 0){
				cout << matriz[i][j] << "\t";
			}
			
		}
		cout << "\n";
	}
	
}
*/

//5. Ler os elementos de uma matriz de ordem 6 e imprima o produto dos elementos que estão abaixo da diagonal principal.

/*
int main() { 

	int matriz[3][3];
	int prod;
	int i, j;
	
	prod = 1;
	for(i = 0; i < 6; i++){
		for(j = 0; j < 6; j++){
			
			cout << "Insira o numero " << (i+1) << " da " << (j+1) << " coluna: ";
			cin >> matriz[i][j]; 
			
			if(i > j){
				prod = matriz[i][j] * prod;
			}
		}
	}
	
	cout << "\nMatriz: \n";
	
	for(i = 0; i < 6; i++){
		for(j = 0; j < 6; j++){
	
			cout << matriz[i][j] << "\t";
			
		}
		cout << "\n";
	}
		
	
	cout << "\nValor do produto abaixo da diagonal principal: " << prod << "\n";
	
}
*/

