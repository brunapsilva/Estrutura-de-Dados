#include <stack>
#include <iostream>

using namespace std;

int main(){
    stack<int> pilha;
    stack<int> par;
    stack<int> impar;
    
    int x, y = 0;
    
    for(int i=0;i<5;i++){
    	
    	cout << "Entre com o valor desejado: " << endl;
		
		cin >> x;
		
		do {
			
			if (x < y){
				cout << "O valor precisa ser maior que "<< y << endl;
				cin >> x;
			}			
		}while (x < y);
				
		y = x;
		
        pilha.push(x);
    }
    
    for(int i=0;i<5;i++){
    	
    	x = pilha.top() % 2;
    	
    	if (x > 0) {
    		impar.push(pilha.top()) ;
    		pilha.pop();			
		} else {
			par.push(pilha.top());
    		pilha.pop();
		}
    }
    
	x = par.size();
	
	y = impar.size();
	
	cout << "Pilha de Pares" << endl;
	
	for(int i=0;i<x;i++){
    	
    	cout<<par.top()<<endl;
    	par.pop();
    	
    }
	
	cout << "Pilha de Impares" << endl;
	
	for(int i=0;i<y;i++){
    	
    	cout<<impar.top()<<endl;
    	impar.pop();
    	
    }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	 
}