#include <iostream>
using namespace std;

int mat1[3][3], mat2[3][3]; 

void incluirMatriz() {
	for  (int h = 0; h < 3; h++) {
	   for  (int l = 0; l < 3; l++) {
	   cout << "Entre com o valor [" << h+1<< "] ["<< l+1<< "] da primeira matriz ";
	   cin >> mat1[h][l];		
	   }		
	}
	
	cout << " " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << " " << endl;
	
	for  (int h = 0; h < 3; h++) {
	   for  (int l = 0; l < 3; l++) {
	   cout << "Entre com o valor [" << h+1<< "] ["<< l+1<< "] da segunda matriz ";
	   cin >> mat2[h][l];		
	   }		
	}
}

void exibirValores() {
	
	cout << " " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << " " << endl;
	
	cout << "PRIMEIRA MATRIZ"<< endl;
	for  (int h = 0; h < 3; h++) {
	   for  (int l = 0; l < 3; l++) {
	   cout << mat1[h][l] << "   ";
	   }
	   cout << endl;	   		
	}
	
	cout << " " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << " " << endl;
	
	cout << "SEGUNDA MATRIZ"<< endl;
	for  (int h = 0; h < 3; h++) {
	   for  (int l = 0; l < 3; l++) {
	   cout << mat2[h][l] << "   ";
	   }
	   cout << endl;	   		
	}
}

bool comparaMatrizes() {
	int x = 0;
	
	for  (int h = 0; h < 3; h++) {
	   for  (int l = 0; l < 3; l++) {
	   	if (mat1[h][l] == mat2[h][l]){
			   x++;
		   } 	   	
		}	   	   		
	}
	
	if (x == 9) {
		return true;
	} else {
		return false;
	}
	
}



int main(int argc, char** argv)
{
	incluirMatriz();
	exibirValores();
	
	if (comparaMatrizes() == true) {
		cout << "As duas matrizes são iguais!";		
	} else {
		cout << "As duas matrizes são diferentes!";
	}
	
	return 0;
}