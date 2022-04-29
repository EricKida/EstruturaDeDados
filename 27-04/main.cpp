#include <iostream>
#include <cstdlib>

using namespace std;

/*
//1 - Criar uma classe matemática que contenham dois atributos da classe A, B inteiros e os seguintes métodos:
//Entrada de dados; soma, multiplicação, subtração e divisão (fazer o tratamento da divisão, não dividir por zero)

class Matematica{

	public:
	float a, b;
	
	void entrada(){
		cout << "Digite dois numeros: \n";
		cin >> a >> b;
		cout << "\n";
	}
	
	int soma(){
		return a+b;
	}
	
	int multiplicacao(){
		return a*b;
	}
	
	int subtracao(){
		return a-b;
	}
	
	float divisao(){
		while (b == 0){
			cout << "\nDigite outro valor para b (nao pode ser 0 na divisao): ";
			cin >> b;
		}
		return a/b;
	}
	
};

int main(int argc, char** argv) {
	
	Matematica obj;
	obj.entrada();
	
	cout << "(+) Valor da soma: " << obj.soma() << "\n";
	cout << "(*) Valor da multiplicacao: " << obj.multiplicacao() << "\n";
	cout << "(-) Valor da subtracao: " << obj.subtracao() << "\n";
	cout << "(/) Valor da divisao: " << obj.divisao() << "\n";
	
}
*/

/*

//2- Crie uma classe chamada Triangulo onde crie variáveis da classe, os métodos que são 2, o primeiro é para ver se é triangulo e o segundo é para ver que tipo de triangulo é, os três abaixo:
//Escaleno – os 3 lados diferentes
//Isósceles – 2 lados iguais
//Eqüilátero – os 3 lados iguais
//Obs. Não esquecer de verificar primeiramente se é triangulo

class Triangulo{
	
	public:
	int a, b, c;
	
	void entrada(){
		cout << "Digite os tres lados de um triangulo: \n";
		cin >> a >> b >> c;
	}
	
	bool verificarTriangulo(){
		if(a+b>c && a+c>b && b+c>a){
			return 1;
		}else{
			return 0;
		}
	}
	
	int tipoTriangulo(){
		if(verificarTriangulo() == 1){
			if (a == b && b == c){
				return 1;
			}else if(a == b || a == c || b == c){
				return 2;
			}else{
				return 3;
			}
		}else{
			return 4;
		}
	}
};

int main(int argc, char** argv){
	
	Triangulo obj;
	obj.entrada();
	
	cout << "(V) Verificacao do Triangulo: " << obj.verificarTriangulo() << "\n";
	cout << "(T) Tipo de Triangulo: ";
	
	if(obj.tipoTriangulo() == 1){
		cout << "Equilatero \n";
	}
	
	else if(obj.tipoTriangulo() == 2){
		cout << "Escaleno \n";
 	}
 	
	else if(obj.tipoTriangulo() == 3){
		cout << "Isosceles \n";
 	}
 	else{
 		cout << "Medidas nao correspondem a um triangulo.\n";
	 }
 		
}
*/

//3 - Crie uma classe Estacionamento que tenha como atributos da classe dia, horaEntrada, horaSaida, e dois métodos o primeiro 
//Solicita os dados para o usuário e o outro método calcule o valor a ser pago sendo que cada hora equivale a 5 reais.

class Estacionamento{
	public:
	int dia, horaEntrada, horaSaida;
	
	void entrada(){
		cout << "- - - - - ESTACIONAMENTO DO SEU ZE - - - - -\n";
		cout << "Digite o dia: ";
		cin >> dia;
		cout << "Digite a Hora de entrada: ";
		cin >> horaEntrada;
		cout << "Digite a Hora de saida: ";
		cin >> horaSaida;
		while(horaSaida > horaEntrada){
			cout << "As hora de saída tem de ser maior do que a de entrada.\nDigite novamente: ";
		}
		cin >> horaSaida;
	}
	
	int calcularPagamento(){
		return (horaSaida - horaEntrada) * 5;
	}
};

int main(int argc, char** argv){
	Estacionamento obj;
	obj.entrada();
	
	cout << "\n($) Pagamento do Estacionamento: R$:" << obj.calcularPagamento() << ",00\n";
	
}

