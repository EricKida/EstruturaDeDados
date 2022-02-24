/*Variaveis:
bool - V ou F;
char - caractere;
int - numero inteiro;
float - numero com uma casa decimal;
double - numero com duas casas de decimais;
void - absencia de tipo;
wchar_t - armazena caracteres mais amplos ;
*/

#include <iostream>
using namespace std;

/* Básico 
int main() {
	
	char nome[50];
	
	cout << "Por favor, insira seu nome: ";
	cin >> nome;
	cout << "Seu nome e: " << nome << "\n";
}
*/

/* If/ElseIf/Else 
int main() {
	
	int n;
	cout << "Insira um valor: ";
	cin >> n;
	
	if (n <= 10){
		cout << n << " e menor ou igual que 10";
	}else if(n < 20){
		cout << n << " e maior que 10 e menor que 20";
	}else{
		cout << n << " e igual ou maior que 20";
	}
}
*/

/* SwitchCase
int main() {
	
	int n;
	float n1;
	float n2;
	cout << "Escolha um menu: \n1 (+)\n2 (-) \n3 (*) \n4 (/) \n\nSua escolha: ";
	cin >> n;
	
	switch (n){
		case 1:
			cout << "\nDigite o valor de n1: ";
			cin >> n1;
			cout << "Digite o valor de n2: ";
			cin >> n2;
			cout << n1 << " + " << n2 << " = " << (n1+n2);
			break;
			
		case 2:
			cout << "\nDigite o valor de n1: ";
			cin >> n1;
			cout << "Digite o valor de n2: ";
			cin >> n2;
			cout << n1 << " - " << n2 << " = " << (n1-n2);
			break;
			
		case 3:
			cout << "\nDigite o valor de n1: ";
			cin >> n1;
			cout << "Digite o valor de n2: ";
			cin >> n2;
			cout << n1 << " * " << n2 << " = " << (n1*n2);
			break;
			
		case 4:
			cout << "\nDigite o valor de n1: ";
			cin >> n1;
			cout << "Digite o valor de n2: ";
			cin >> n2;
			cout << n1 << " / " << n2 << " = " << (n1/n2);
			break;
	}
}
*/

/* While
int main() {
	
	int n;
	int i = 1;
	cout << "Insira um valor: ";
	cin >> n;
	cout << "\nTabuada do " << n << "\n";
	
	while(i <= 10){
		cout << i << " * " << n << " = " << (i*n) << "\n";
		i++;
	}
}
*/

/* For
int main() {
	
	int n;
	cout << "Insira um valor: ";
	cin >> n;
	cout << "\nTabuada do " << n << "\n";
	
	for(int i = 0; i <= 10; i++){
		cout << i << " * " << n << " = " << (i*n) << "\n";
	}
	
}
*/

/* doWhile
int main() {

	int i;
	int n;
	cout << "Insira um valor: ";
	cin >> n;
	cout << "\nTabuada do " << n << "\n";
	
	do{
		cout << i << " * " << n << " = " << (i*n) << "\n";
		i++;
	}while (i <= 10);
}
*/
