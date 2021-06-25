#include<iostream>
#include<stdlib>
#include<ctime>

using namespace std;
 int main(){
 	int quantosAlunos;
 	int num = 0;
 	string nome[50];
 	int nt1[50];
 	int nt2[50];
 	int med = 0;
 	
 		cout << "digite quantos alunos serao cadastrados: \n";
 		cin >> quantosAlunos;
 		
 		for(num; num <= quantosAlunos; num++){
 			cout << "digite o nome do aluno: \n";
 			cin >> nome[num];
		 }
		 for(num = 1; num <= quantosAlunos; num++){
		 	cout << "digite a primeira nota 1 do " << nome[num] << " aluno \n";
		 	cin >> nt1[num];
		 }
 		  for(num = 1; num <= quantosAlunos; num++){
		 	cout << "digite a primeira nota 2 " < nome[num] << " do aluno \n";
		 	cin >> nt2[num];
		 }
		 for(num = 1; num <= quantosAlunos; num++){
		 	med = nt1[num] + nt2[num] / 2;
		 	if(med < 60){
		 		cout << "reprovado \n";
			 }else{
			 	cout << "aprovado \n";
			 }
		 }
 }