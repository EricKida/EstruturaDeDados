#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//1- Desenvolva um programa que tenha dois m�todos fahrenheit e celsius, onde voc� entra com um valor em fahrenheit e transforma em celsius e vice e versa.
//F�rmula Celsius: (fahrenheit � 32) * 5/9;
//Fahrenheit = (Celsius * 9/5) + 32;
/*
float fahrenheit(float t){
	return (t*9/5)+32;
}

float celsius(float t){
	return (t-32)*5/9;
}

int main(){
	float x;
	int op;
	cout << "Informe qual operecao voce deseja: \n[1] Celsius -> Fahrenheit\n[2] Fahrenheit -> Celsius \nOpcao: ";
	cin >> op;
	
	switch(op){
		case 1:
			cout << "\nDigite a temperatura em Celsius: ";
			cin >> x;
			cout << "Temperatura em Fahrenheit: " << fahrenheit(x);
		break;
		case 2:
			cout << "\nDigite a temperatura em Fahrenheit: ";
			cin >> x;
			cout << "Temperatura em Celsius: " << celsius(x);
		break;
		default:
			cout << "Opcao invalida";
	}
}
*/

//2- Calcule a soma dos quadrados de dois n�meros fornecidos pelo usu�rio. Trabalhe com chamada de m�todos usadas como argumento de outros m�todos.
//Dica: voc� vai criar 3 m�todos onde duas delas estar�o dentro de uma.
/*
int soma(int a2, int b2){
    return a2+b2; 
}
int quad(int c){
    return c*c; 
}
int somaquad(int d, int e){ 
    return soma(quad(d), quad(e));
}

int main(int argc, char *argv[])
{
    int a, b;
    cout << "Digite o valor de A: ";
    cin >> a;
    cout << "Digite o valor de B: ";
    cin >> b;
    
    cout << "Soma dos quadrados de A e B: " <<somaquad(a, b) << "\n";
    
    
}
*/

//3- Um n�mero primo � qualquer inteiro divis�vel por si pr�prio e por 1. Escreva um m�todo que receba um inteiro positivo e, se este n�mero for primo retorne 1, 
//caso contr�rio retorne 0.
/*
int primo(int pr){
	int primo = 0;
	int cont = 0;
	for (int c = 1; c < pr+1; c++){
		if(pr % c == 0){
			cont++;
		}
	}
	if (cont == 2){
		primo++;
	}
	return primo;
}

int main(){
	
	int x;
	cout << "Informe o numero: ";
	cin >> x;
	cout << "Numero primo? " << primo(x);
}
*/

//4- Escreva um m�todo que receba o ano e retorne 1 se for bissexto e 0 se n�o for. Um ano � bissexto quando divis�vel por 4, mas n�o por 100. Um ano tamb�m � 
//bissexto quando divis�vel por 400.

/*
int bissexto(int ano_b){
	int r = 0;
	if(((ano_b % 4 == 0) && (ano_b % 100 != 0)) || ((ano_b % 400 == 0))){
		r++;
	}
	return r;
}

int main(int argc, char *argv[])
{
	int ano;
	cout << "Digite um ano: ";
	cin >> ano;  
	cout << "\n" << ano << " e um ano bissexto? " << bissexto(ano);
    
}
*/

//5- Desenvolver um programa onde voc� entre via teclado com dois valores e ap�s a digita��o o usu�rio escolha um seletor de op��o (menu) com as seguintes op��es:
//- Multiplica��o;
//- Adi��o;
////- Divis�o;
//- Subtra��o;
//- Fim do processo;
//Obs. Criar um m�todo para cada op��o e dentro do case chamar as fun��es respectivamente.

/*
float mult(float x1, float x2){
	return x1*x2;
}
float add(float x1, float x2){
	return x1+x2;
}
float div(float x1, float x2){
	return x1/x2;
}
float sub(float x1, float x2){
	return x1-x2;
}

int main(){

	int n1, n2, op;
	cout << "Informe o primeiro valor: ";
	cin >> n1;
	cout << "Informe o segundo valor: ";
	cin >> n2;
	cout << "\nInforme a operacao:\n[1] Multiplicacao \n[2] Adicao \n[3] Divisao \n[4] Subtracao \n[5] Cancelar \n\nOperacao: ";
	cin >> op;
	switch(op){
		case 1:
			cout << n1 << " * " << n2 << " = " << mult(n1, n2);
		break;
		case 2:
			cout << n1 << " + " << n2 << " = " << add(n1, n2);
		break;
		case 3:
			cout << n1 << " / " << n2 << " = " << div(n1, n2);
		break;
		case 4:
			cout << n1 << " - " << n2 << " = " << sub(n1, n2);
		break;
		default:
			cout << "\n";
	}
}
*/


//6- Gere um m�todo que trabalhe com fatorial, lembrando o fatorial � ele vezes a quantidade dele mesmo. Ex. fat 5 = 5*4*3*2*1.

/*
int fat(int f1){
	int fat = 1;
	for(int c = 1; c <= f1; c++){
		fat = fat * c;
	}
	return fat;
}

int main(){
	
	int n1;
	cout << "Digite um valor: ";
	cin >> n1;
	cout << "\nFatorial de " << n1 << ": " << fat(n1);
}
*/
