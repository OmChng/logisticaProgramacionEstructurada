#include <stdlib.h> 
#include <iostream> 
#include <string.h>

using namespace std;

// Método para convertir la oración a  mayúsculas.
void turnUpper(char string[])
{
  int i;
  cout << "\nSu oración en mayúsculas es: ";
  
  for (i = 0; i < strlen(string); i++)
  {
    putchar(toupper(string[i]));
  }

  cout << endl;
}

// Método para convertir la oración a minúsculas.
void turnLower(char string[])
{
  int i;
  cout << "\nSu oración en minúsculas es: ";

  for (i = 0; i < strlen(string); i++)
  {
    putchar(tolower(string[i]));
  }

  cout << endl;
}

// Main
int main()
{
  int opcion;
  char frase[100];
  
  /* Do-while para mantener el programa corriendo hasta que el usuario  de un input de 3*/
  do
  {
    cout << "\n ACTIVIDAD 7 FORO DE TRABAJO \n" << endl;
    cout << "Por favor, ingrese una oración " << endl;
    cin.getline(frase, 100, '\n');
    cout << "\n\nSeleccione la opción deseada: " << endl;
    cout << "1. Mostrar la oración en munísculas. " << endl;
    cout << "2. Mostrar la oración en mayúsculas. " << endl;
    cout << "3. Salir " << endl;
    cin >> opcion;
    
    // Switch para practicar en lugar de if - else.
    switch (opcion)
    {
    case 1:
      turnLower(frase);
      break;
    case 2:
      turnUpper(frase);
      break;
    default:
      break;
    }

  } while (opcion != 3);
  
  // Pausa para esperar 
  system("pause");
  
  return 0;
}
