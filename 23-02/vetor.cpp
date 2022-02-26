#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

//1. Fazer um programa que leia v�rios n�meros inteiros e positivos. A leitura se encerra quando encontrar um 
//n�mero negativo ou quando o vetor ficar completo. Sabe-se que o vetor possui, no m�ximo, 10 elementos. 
//Gerar e imprimir um vetor onde cada elemento � o inverso do correspondente do vetor original. 

/*
int main() { 

    int vet[10],vet2[10], i, n; 
    i=0; n=1; 
    
    while(n>0 && i<10){ 
    	cout << "Digite o numero " << (i+1) << ": ";
    	cin>>n; 
   		vet[i]=n; 
    	i++;   
	} 
	
    for(int j=0; j<i-1; j++){ 
    	vet2[j]=vet[j] * -1;
    	cout<<vet2[j]<<"\n"; 
	} 
	
} 
*/

//2. Fazer um programa que digite v�rios n�meros no vetor de tamanho m�ximo de 100 elementos, at� digitar o n�mero �0�. 
//Imprimir quantos n�meros iguais ao �ltimo n�mero foram lidos. O limite de n�meros � 100.  Sem considerar o �0� como �ltimo n�mero. 

/*
int main() { 

	int i = 0; 
    int x; 
    int vet[100]; 
    int cont = 0; 

    do{ 
       cout <<"Digite o numero " << (i+1) << ": "; 
       cin >> x; 
       if(x != 0){ 
            vet[i] = x; 
            i++; 
        } 
    }while(i < 99 && x != 0); 
    
    for(int y = 0; y < 10; y++){ 
    	if(vet[i-1] == vet[y]){ 
        cont++; 
		} 
	} 
	cout <<"Numeros iguais ao ultimo (" << vet[i-1] << "): " << cont-1 <<"\n"; 	
} 
*/

//3. Criar um programa para ler 10 n�meros DIFERENTES a serem armazenados em um vetor. Os dados dever�o ser armazenados no vetor 
//na ordem que forem sendo lidos, sendo que caso o usu�rio digite um n�mero que j� foi digitado anteriormente, 
//o programa dever� pedir para ele digitar outro n�mero. Note que cada valor digitado pelo usu�rio deve ser pesquisado no vetor, 
//verificando se ele existe entre os n�meros que j� foram fornecidos. Exibir na tela o vetor final que foi digitado.  

//4. Ler um vetor V de 10 elementos e obter um vetor W cujos componentes s�o os fatoriais dos respectivos componentes de V. 

//5. Criar um programa que leia dados de um vetor de 12 elementos inteiros. 
//Imprima o maior e menor sem ordenar, o percentual de n�meros pares e a m�dia dos elementos do vetor. 

//6. Criar um vetor com a 8 elementos e orden�-los. 

/*
int main() {
	
	int vet[8];
	int aux;
	int i;
	int j;
	
	for (i = 0; i <= 7; i++){
		cout << "Digite o numero " << (i+1) << ": ";
		cin >> vet[i];
	}
	cout << "\nEm ordem: ";
	for (i = 0; i <= 7; i++){
    	for (j = 0; j <=7 ; j++){
        	if (vet[i] < vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    for (int k = 0; k <= 7; k++){
        if (k < 7){
			cout << (vet[k]) << ", ";
		}else{
			cout << (vet[k]) << ".";
		}
    }
}
*/

//7. Fazer um programa que, dados dois vetores de 7 posi��es cada, efetue as opera��es aritm�ticas b�sicas, 
//indicadas por um terceiro vetor cujos dados tamb�m s�o fornecidos pelo usu�rio, gerando e imprimindo um quarto vetor. 

/*
int main() {
	
	int vet1[7];
	int vet2[7];
	char vet3[7];
	int vet4[7];
	int i;

	
	for(i = 0; i <= 6; i++){
		cout << "Digite o primeiro valor da " << (i+1) << " operacao: ";
		cin >> vet1[i];
		cout << "Digite a operacao aritmetica da " << (i+1) << " operacao (+, -, *, /): ";
		cin >> vet3[i];
		cout << "Digite o segundo valor da " << (i+1) << " operacao: ";
		cin >> vet2[i];
		cout << "\n";
	}
	
	for(i = 0; i <= 6; i++){
		if (vet3[i] == '+'){
			vet4[i] = vet1[i] + vet2[i];
			cout << "Operacao N" << (i+1) << ": " << vet1[i] << " + " << vet2[i] << " = " << vet4[i];
		}
		else if(vet3[i] == '-'){
			vet4[i] = vet1[i] - vet2[i];
			cout << "Operacao N" << (i+1) << ": " << vet1[i] << " - " << vet2[i] << " = " << vet4[i];
		}
		else if(vet3[i] == '*'){
			vet4[i] = vet1[i] * vet2[i];
			cout << "Operacao N" << (i+1) << ": " << vet1[i] << " * " << vet2[i] << " = " << vet4[i];
		}
		else if(vet3[i] == '/'){
			vet4[i] = vet1[i] / vet2[i];
			cout << "Operacao N" << (i+1) << ": " << vet1[i] << " / " << vet2[i] << " = " << vet4[i];
		}
		else{
			cout << "Operacao N" << (i+1) << ": Simbolo aritmetico nao lido: " << vet3[i] ;
		}
		cout << "\n";
	}
}
*/



