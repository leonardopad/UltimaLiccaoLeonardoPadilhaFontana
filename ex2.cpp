#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	
	srand(time(NULL));
	int num = 0;
	int ra[50];
	int a = 0;
	
	for(num; num <= 50; num++){
		ra[num] = rand() % 100;
		if(num >= 2){
			cout << ra[num] << " " << num << ra[num] * ra[num-1] << " \n";
		}else{
			cout << ra[num] << " " << num << ra[num] * 1 << " \n";
		}
		
	}
	
	
}
