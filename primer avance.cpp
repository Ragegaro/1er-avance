#include<iostream>
#include<string>
using namespace std;
int op, lista=0, i=0,j=0;
bool retro= true;
char nombr[20];
// string nombre, Descripcion, genero;
void main() {
	system("color 0b");
	cout << "\t Bienvenidos a Ragegame store los mejores juegos a los mejores precios\n\n";
	while (retro) {
		system("cls");
		system("color 0b");
		cout << "\n \t Introduzca el numero de accion que desea hacer en este momento \n";
		cout << "\t 1. Para agregar un  nuevo articulo." << endl;
		cout << "\t 2. Para modificar los datos de un articulo." << endl;
		cout << "\t 3. Para eliminar su articulo." << endl;
		cout << "\t 4. Para ver los  articulos vigentes.\n\t 5. Para limpiar pantalla." << endl;
		cout << "\t 6. Para abandonar el sitio." << endl;
		cin >> op;

		switch (op) {
		case 1: {
			system("cls");
			for (i; i < 3; i++) {
				cout << "Ingrese el nombre del juego "<<i+1<<": ";
				cin >> nombr;
				cout << "\t"<<i+1<< ". "<< nombr<<endl;
			}	
			break;
		}
		case 2: {
			system("cls");
			system("color 1f");
			cout << "\n\n Funcion no disponible por elmomento  X_x\n";
			break;
		}
		case 3: {
			system("cls");
			system("color 1f");
			cout << "\n\n Funcion no disponible por elmomento  X_x\n";
			break;
		}
		case 4: {
			system("cls");
			system("color 1f");
			cout << "\n\n Funcion no disponible por elmomento  X_x\n";
			break;

		}
		case 5: {
			system("cls");
			break;
		}
		case 6: {
			system("cls");
			system("color 8e");
			cout << "Presione una tecla para cerrar por completo el sitio y \n vuelva pronto :)\n\n";
			retro = false;
			break;
		}
		default: {
			system("cls");
			system("color 1f");
			cout << "\n\n\t\t XXXXXXX       Opcion no valida es necesario riniciar el programa por completo       XXXXXXX\n\n";
			cout << "\n\n\t\t XXXXXXX       Presione una tecla para finalizar por completo       XXXXXXX\n\n";
			retro = false;
			break;
			/*checar default ya que se vuelve loco con los valores que no sean numeros, es decir
			al entrar el default no uestra nuevamente el menu, se soluciono temporalment añadiendo d=false para
			que salga del ciclo y tenga que reiniciarce el programa :( .  */
		}
		}
			  system("pause");
		}
		
	}
