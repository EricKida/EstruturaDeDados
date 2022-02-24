#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

//Exerc�cio 1: Crie um programa que solicite ao usu�rio os tr�s coeficientes de uma equa��o do segundo grau e informe os valores de x' e x''.
/*
int main() {
	int a;
	int b;
	int c;
	
	cout << "Insira o valor de A: ";
	cin >> a;
	cout << "Insira o valor de B: ";
	cin >> b;
	cout << "Insira o valor de C: ";
	cin >> c;
	
	int delta = (b*b)-4*a*c;
	double r = sqrt (delta);
	int x1 = (-(b) + r) / (2 * a);
	int x2 = (-(b) - r) / (2 * a);
	
	cout << "x1 = " << x1 << "\nx2 = " << x2;
}
*/

//Exerc�cio 2: Crie um programa que solicite ao usu�rio os lados de um ret�ngulo e informe a sua �rea. 
/*
int main() {
	int b;
	int h;
	
	cout << "Insira a base do retangulo: ";
	cin >> b;
	cout << "Insira a altura do retangulo: ";
	cin >> h;
	
	int a = (b*h);
	
	cout << "\nArea do Retangulo: " << a;
}
*/

//Exerc�cio 3: Crie um programa que solicite ao usu�rio os lados de um tri�ngulo e informe a sua �rea.
/*
int main() {
	int b;
	int h;
	
	cout << "Insira a base do triangulo: ";
	cin >> b;
	cout << "Insira a altura do triangulo: ";
	cin >> h;
	
	int a = (b*h)/2;
	
	cout << "\nArea do Triangulo: " << a;
}
*/

//Exerc�cio 4: Crie um programa que solicite ao usu�rio os lados de um trap�zio e informe a sua �rea.
/*
int main() {
	int b1;
	int b2;
	int h;
	
	cout << "Insira a base maior do trapezio: ";
	cin >> b1;
	cout << "Insira a base menor do trapezio: ";
	cin >> b2;
	cout << "Insira a altura do trapezio: ";
	cin >> h;
	
	double a = ((b1+b2)*h)/2;
	
	cout << "\nArea do Trapezio: " << a;
}
*/

//Exerc�cio 5: Escreva um programa que solicite ao usu�rio um valor inteiro e informe se esse n�mero � par ou �mpar. 
/*
int main() {
	int n;
	
	cout << "Insira um valor: ";
	cin >> n;

	if (n % 2 == 0){
		cout << "\nO valor " << n << "e par";
	}else{
		cout << "\nO valor " << n << " e impar";
	}
}
*/

//Exerc�cio 6: Escreva um programa que solicite ao usu�rio a idade de uma pessoa e informe se essa pessoa � crian�a (0 a 11 anos), adolescente (12 a 17 anos), adulta (18 a 49 anos) ou idosa (a partir de 50 anos). 
/*
int main() {
	int n;
	
	cout << "Insira uma idade: ";
	cin >> n;

	if (n <= 11){
		cout << n << " ano(s) = Crianca";
	}else if(n <= 17){
		cout << n << " anos = Adolescente";
	}else if(n <= 49){
		cout << n << " anos = Adulto/a";
	}else{
		cout << n << " anos = Idoso/a";
	}
}
*/

//Exerc�cio 7: Escreva um programa que solicite ao usu�rio um ano qualquer e informe se esse ano � bissexto. Um ano � considerado bissexto se ele for divis�vel por quatro, mas n�o por 100. Ou ent�o se ele for divis�vel por 400. 
/*
int main() {
	int n;
	
	cout << "Insira uma ano (AAAA): ";
	cin >> n;

	if(n%4==0 && n%100!=0){
		cout << n << " foi um ano bixesto!";
	}else{
		cout << n << " nao foi um ano bixesto :(";
	}
}
*/

//Exerc�cio 8: Crie um programa que solicite ao usu�rio os tr�s �ngulos de um tri�ngulo e informe se este � um tri�ngulo equil�tero, is�sceles ou escaleno.
/*
int main() {
	int a1;
	int a2;
	int a3;
	
	cout << "Insira o primeiro angulo do triangulo: ";
	cin >> a1;
	cout << "Insira o segundo angulo do triangulo: ";
	cin >> a2;
	cout << "Insira o terceiro angulo do triangulo: ";
	cin >> a3;

	if (a1 == a2 && a2 == a3 && a3 == 60){
		cout << "\nTipo de Triangulo > Equilatero\n - Possui todos os angulos iguais a 60 graus";
	}else if (a1 == a2 || a1 == a3 || a2 == a3){
		cout << "\nTipo de Triangulo > Isosceles \n - Possui dois angulos iguais";
	}else{
		cout << "\nTipo de Triangulo > Escaleno\n - Possui todos os angulos diferentes";
	}
}
*/

//Exerc�cio 9: Escreva um programa que solicite ao usu�rio quatro n�meros e mostre na tela o maior, o menor e a m�dia aritm�tica dos n�meros digitados.
/*
int main() {
	
	int i;
	int maior;
	int menor;
	double media;
	int n[4];
	
	for (i = 0;  i<=3; i++){
		cout << "Digite o " << (i+1) << " numero: ";
		cin >> n[i];
		media += n[i];
	}
	maior = n[0];
	menor = n[0];
	
	for (i = 0; i <=3 ; i++){
		if(n[i] > maior){
			maior = n[i];
		}
		if(n[i] < menor){
			menor = n[i];
		}
	}
	cout << "\nMaior numero: " << maior << "\n";
	cout << "Menor numero: " << menor << "\n";
	cout << "Media aritmetica: " << (media/4);

}
*/
