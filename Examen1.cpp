
#include <iostream>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
using std:: cout;
using std:: endl;
using std:: cin;
#define caracteres  ('z' - 'a' + 1)
void esPanagrama();

int main (int argc, char* argv[]){
	esPanagrama();
	int opcion=0;
	while(opcion != 4){
		cout << "2. Ejercicio 2" << endl;
		cout << "3. Ejercicio 3" << endl;
		cout << "4. Salir" << endl;
		cin >> opcion;	
		if(opcion == 1){
			//esPanagrama();
		}
		if (opcion == 2){
			
		}
	}	
	return 0;
}

void esPanagrama(){
	char frase[caracteres] = {0};
   	int ch;
   	int i;
	cout << "Ejercicio 1" << endl;
	cout << "Ingrese Una Frase: " << endl;
   	while ((ch = getchar()) != EOF && ch != '\n')
      		if (isalpha(ch))
         		frase[tolower(ch) - 'a'] = 1;
   	for (i = 0; i < caracteres && frase[i] == 1; i++)
      		;
   	if (i == caracteres)
      		printf("Es un panagrama\n");
		//cout << "Es un panagrama" << endl;
   	else
      		printf("No es un panagrama\n");
		//cout << "No es un panagrama" << endl;	
}

