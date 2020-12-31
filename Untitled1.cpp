#include <iostream>

using namespace std;

int main(){
	
	//TIPO NOME;
	//TIPO NOME = VALOR;
	
	int vidas=0; //10, 25
	char letra= 'I'; //"I"
	double decimal=5.2; //2,49999999
	float decimal2=5.2; //2.5
	bool vivo=true; //true or false
	string nome="Itatelino"; //"Itatelino"
	
	/* bloco de comentário grande */ 
	// (comentario de uma linha)
	
	
	cout << "Digite o número de vidas: ";
	cin >> vidas;
	cout << "Digite uma letra: ";
	cin >> letra;
	cout << "Dinheiro: ";
	cin >> decimal;
	cout << "Digite seu nome: ";
	cin >> nome;
	
	//vidas=100
	
	cout <<"\nVidas: " << vidas << "\nLetra: " << letra << "\nDinheiro: " << decimal << "\nVivo" << vivo << "\nNome: " << nome << "\n";
	
	
	
	return 0;
}
