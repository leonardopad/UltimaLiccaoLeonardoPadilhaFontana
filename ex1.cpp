#include<iostream>
using namespace std;

	float soma(float num1, float num2){
		return num1 + num2;
	}
	float sub(float num1, float num2){
		return num1 - num2;
	}
	float mult(float num1, float num2){
		return num1 * num2;
	}
	float div(float num1, float num2){
		return num1 / num2;
	}
	
	int main(){
		float num1 = 0;
		float num2= 0;
		cout << "digite um numero: \n";
		cin >> num1;
		cout << "digite outro numero: \n";
		cin >> num2;
		
		cout << "A soma e " << soma(num1,num2) << "\n";
		cout << "A subtracao e " << sub(num1,num2) << "\n";
		cout << "A multiplicacao e " << mult(num1,num2) << "\n";
		cout << "A divisao e " << div(num1,num2) << "\n";		

	
	//comando em tecla
	system ("pause");
}