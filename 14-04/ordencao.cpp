#include <iostream>
#include <math.h>


using namespace std;

void ordenacao(int num[]){
	int aux;
	
	for(int i = 0; i < 5; i++){
		for (int j = i+1; j < 5; j++){
			if(num[i] > num[j]){
				aux = num[i];
				num[i] = num[j];
				num[j] = aux;
			}
		}
	}
	for (int i = 0; i < 5; i++){
		if(i == 0){
			cout <<"\nOrdenacao: ";
		}
		cout << num[i] << " ";
	}
}

int buscaBinaria(int n[], int inicio, int fim, int item){
	int i = (inicio+fim) / 2;
	
	if (inicio > fim){
		return -1;
	}
	
	if(n[i] == item){
		return i;
	}
	if(n[i] < item){
		return buscaBinaria(n, i+1, fim, item);
	}else{
		return buscaBinaria(n, inicio, i-1, item);
	}
}

int main(int argc, char** argv) {
	
	int n[5];
	for(int c; c < 5; c++){
		cout << "Digite o " << (c+1) << " numero: ";
		cin >> n[c];
	}
	ordenacao(n);
	
	int busca;
	cout << "\n\nBuscar qual numero: ";
	cin >> busca;
	cout << "\nIndice: " << buscaBinaria(n, 0 , 5, busca);

}
