#include <iostream>
using namespace std;

int main() {
	char operacion;
	float num1, num2, resultado;
	
	// Mostrar opciones de operaciones
	cout << "Calculadora simple\n";
	cout << "Seleccione la operaci�n:\n";
	cout << "'+' para suma\n";
	cout << "'-' para resta\n";
	cout << "'*' para multiplicaci�n\n";
	cout << "'/' para divisi�n\n";
	cout << "Por favor solo seleccione una: ";
	cout << "Correcci�n del punto f) hecha ";
	cin >> operacion;
	
	// Solicitar al usuario los dos n�meros
	cout << "Ingrese el primer n�mero: ";
	cin >> num1;
	cout << "Ingrese el segundo n�mero: ";
	cin >> num2;
	
	// Realizar la operaci�n seleccionada
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
		cout << "El resultado de la multiplicaci�n es: " << resultado << endl;
		break;
	case '/':
		if (num2 != 0) {
			resultado = num1 / num2;
			cout << "El resultado de la divisi�n es: " << resultado << endl;
		} else {
			cout << "Error: No se puede dividir por 0." << endl;
		}
		break;
	default:
		cout << "Operaci�n no v�lida." << endl;
		break;
	}
	
	return 0;
}
