#include <iostream>
using namespace std;

int main() {
	char operacion;
	float num1, num2, resultado;
	
	// Mostrar opciones de operaciones
	cout << "Calculadora simple\n";
	cout << "Seleccione la operación:\n";
	cout << "'+' para suma\n";
	cout << "'-' para resta\n";
	cout << "'*' para multiplicación\n";
	cout << "'/' para división\n";
	cout << "Por favor solo seleccione una: ";
	cout << "Corrección del punto f) hecha ";
	cin >> operacion;
	
	// Solicitar al usuario los dos números
	cout << "Ingrese el primer número: ";
	cin >> num1;
	cout << "Ingrese el segundo número: ";
	cin >> num2;
	
	// Realizar la operación seleccionada
	switch (operacion) {
	case '+':
		resultado = num1 + num2;
		cout << "El resultado de la suma es: " << resultado << endl;
		break;
	case '-':
		resultado = num1 - num2;
		cout << "El resultado de la resta es: " << resultado << endl;
		break;
	case '*':
		resultado = num1 * num2;
		cout << "El resultado de la multiplicación es: " << resultado << endl;
		break;
	case '/':
		if (num2 != 0) {
			resultado = num1 / num2;
			cout << "El resultado de la división es: " << resultado << endl;
		} else {
			cout << "Error: No se puede dividir por 0." << endl;
		}
		break;
	default:
		cout << "Operación no válida." << endl;
		break;
	}
	
	return 0;
}
