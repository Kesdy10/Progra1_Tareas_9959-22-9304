Algoritmo Calculadora_basica
	//Definir las variables
	definir num1, num2, opc, respuesta Como Entero
	
	//Pedir datos para realizar la operacion
	Escribir "Ingrese el primer numero ";
	Leer num1;
	Escribir "Ingrese el segundo numero ";
	Leer num2;
	
	//Operaciones
	Escribir "Ingrese una operacion ";
	Escribir "1) Suma.";
	Escribir "2) Resta.";
	Escribir "3) Multiplicacion.";
	Escribir "4) Division.";
	Leer opc;
	
	//Desarrollo
	Segun opc Hacer
		1:
			Respuesta= num1 + num2;
			Escribir "El resultado es: " Respuesta;
		2:
			Respuesta= num1 - num2;
			Escribir "El resultado es: " Respuesta;
		3:
			Respuesta= num1 * num2;
			Escribir "El resultado es: " Respuesta;
		4:
			Respuesta= num1 / num2;
			Escribir "El resultado es: " Respuesta;
		De Otro Modo:
			Escribir "Error";
	Fin Segun
FinAlgoritmo