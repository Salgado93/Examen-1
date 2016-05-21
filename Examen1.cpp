
#include <iostream>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
using std:: cout;
using std:: endl;
using std:: cin;
using namespace std;
#define caracteres  ('z' - 'a' + 1)
void esPanagrama();
int contarPalabras(char*);
int cuentaCaracteres(char*);
int main (int argc, char* argv[]){
	//esPanagrama();
	//int opcion=0;
	//while(opcion != 4){
		//cout << "2. Ejercicio 2" << endl;
		//cout << "3. Ejercicio 3" << endl;
		//cout << "4. Salir" << endl;
		//cin >> opcion;	
		//if(opcion == 1){
			//esPanagrama();
		//}
		//if (opcion == 2){
			int contp = 1;
			int contl = 0;
			int spc;
			char frase[256];
			char *frases = new char[256];
			cout << "Ingrese Una Frase" << endl;
			cin.getline(frase,256);
			strcpy(frases,frase);
			contp = contarPalabras(frase);
			cout << "Cantidad de Palabras: " << contp  << endl;
			cout << "Cantidad de Letras: " << strlen(frases)-1 << endl;
			for (int i =0; i < strlen(frase); i++){
				cout << frases[i];
			}
			cout << endl;
			delete[] frases;		
		//}
		//if(opcion == 3){

		//}
				
	//}	
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

int contarPalabras(char cad[]){
	int palabras = 0;
	for (int i =1 ; cad[i] != '\0'; i++){
		if (cad[i-1] == ' ' && isalpha(cad[i])){
			++palabras;
		}
	}
	return palabras;

}

int my_strlen(const char* str)
{
    int n = 1;
    for(const char* p = str; p != 0; ++p, ++n);
    return n;
}
int cuentaCaracteres(char cadena[])
{
  int i;
  for (i = 0; cadena[i] != '\0';i++)
    {/*for vacio*/}
  return i;
}

