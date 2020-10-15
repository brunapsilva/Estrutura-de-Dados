/* Insertion Sort*/


#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
   int array[8] = {26,49,38,13,58,87,34,93};
   int i, j, tmp;
   
   cout << "VETOR ORIGINAL:" << endl;
   
   for (i = 0; i < 8; i++) {
    	j = i +1;
    	
          cout << array[i] << endl;  
      }
   
   
      for (i = 0; i < 8; i++) {
            j = i;
            while (j > 0 && array[j - 1] > array[j]) {
                  tmp = array[j];
                  array[j] = array[j - 1];
                  array[j - 1] = tmp;
                  j--;
            }
      }
      
    cout << "VETOR ORDENADO:" << endl;
	    
    for (i = 0; i < 8; i++) {
    	j = i +1;
    	
          cout << array[i] << endl;  
      }
  
   return 0;
}