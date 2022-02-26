#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

//1. Fazer um programa que leia vários números inteiros e positivos. A leitura se encerra quando encontrar um 
//número negativo ou quando o vetor ficar completo. Sabe-se que o vetor possui, no máximo, 10 elementos. 
//Gerar e imprimir um vetor onde cada elemento é o inverso do correspondente do vetor original. 

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

//2. Fazer um programa que digite vários números no vetor de tamanho máximo de 100 elementos, até digitar o número “0”. 
//Imprimir quantos números iguais ao último número foram lidos. O limite de números é 100.  Sem considerar o “0” como último número. 

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

//3. Criar um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. Os dados deverão ser armazenados no vetor 
//na ordem que forem sendo lidos, sendo que caso o usuário digite um número que já foi digitado anteriormente, 
//o programa deverá pedir para ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, 
//verificando se ele existe entre os números que já foram fornecidos. Exibir na tela o vetor final que foi digitado.  

//4. Ler um vetor V de 10 elementos e obter um vetor W cujos componentes são os fatoriais dos respectivos componentes de V. 

//5. Criar um programa que leia dados de um vetor de 12 elementos inteiros. 
//Imprima o maior e menor sem ordenar, o percentual de números pares e a média dos elementos do vetor.

/*
int main(){
	
	int vet[12];
	int maior;
	int menor;
	double par = 0;
	double perc;
	int media;
	double media_r;
	int i;
	
	for (i = 0; i <= 11; i++){
		cout << "Digite o " << (i+1) <<" numero: ";
		cin >> vet[i];
		if (vet[i]%2 == 0){
			par++;
		}
		media += vet[i];
	}
	
	menor = vet[0];
	maior = vet[0];
	perc = (par*100)/12;
	media_r = media/11;
	
	for (i = 0; i <=11 ; i++){
		if(vet[i] > maior){
			maior = vet[i];
		}
		if(vet[i] < menor){
			menor = vet[i];
		}
	}
	
	cout << "\nResultados:\nMaior: " << maior << "\nMenor: " << menor << "\n% de Numeros pares: " << perc << "%\nMedia: " << media_r;
}

*/

//6. Criar um vetor com a 8 elementos e ordená-los. 

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

//7. Fazer um programa que, dados dois vetores de 7 posições cada, efetue as operações aritméticas básicas, 
//indicadas por um terceiro vetor cujos dados também são fornecidos pelo usuário, gerando e imprimindo um quarto vetor. 

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


