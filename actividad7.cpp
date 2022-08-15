#include <stdlib.h> 
#include <iostream> 
#include <string.h>

using namespace std;
void a_mayus(char oracion[])
{
  int i;
  cout << "\nTU ORACION EN MAYUSCULAS: ";
  for (i = 0; i < strlen(oracion); i++)
  {
    putchar(toupper(oracion[i]));
  }
  cout << endl;
}
void a_minus(char oracion[])
{
  int i;
  cout << "\ntu oracion en minusculas: ";
  for (i = 0; i < strlen(oracion); i++)
  {
    putchar(tolower(oracion[i]));
  }
  cout << endl;
}
int main()
{
  int opcion;
  char frase[100];
  do
  {
    cout << "\n ACTIVIDAD 7 FORO DE TRABAJO \n" << endl;
    cout << "Ingrese una oracion " << endl;
    cin.getline(frase, 100, '\n');
    cout << "Seleccione la opción deseada: " << endl;
    cout << "\n1. tu oración en minusculas " << endl;
    cout << "2. TU ORACIÓN EN MAYUSCULAS " << endl;
    cout << "3. Salir " << endl;
    cin >> opcion;
    switch (opcion)
    {
    case 1:
      a_minus(frase);
      break;
    case 2:
      a_mayus(frase);
      break;
    default:
      break;
    }
  } while (opcion != 3);
  system("pause");
  return 0;
}
