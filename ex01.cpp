#include <iostream>
using namespace std;

int vet[10];

void incluirVetor(){
	for  (int i = 0; i < 10; i++) {
	   cout << "Entre com o valor " << i+1 <<" do vetor: ";
	   cin >> vet[i];		
	}	
}

double mediaVetor(){
	double total;
	
	for  (int i = 0; i < 10; i++) {
	   total += vet[i];		
	}
	
	return total/10;
}

int qtdMedia(double total) {
	int qtd = 0;
	
	for  (int i = 0; i < 10; i++) {
	   if (vet[i] > total){
		   qtd++;
	   }		
	}
	
	return qtd;
}

int main(int argc, char** argv) {
	
	double total;
	
	incluirVetor();
	
	total = mediaVetor();
	
	cout << "Quantidade de valores acima da média dos vetores: " << qtdMedia(total) <<endl;
}