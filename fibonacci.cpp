#include  <stdio.h>
#include <iostream>

using namespace std;

int main(){
	while(1){
		int uno,dos,parcial;
		
		// 0 1 1 2 3 5 8 13 . . . n
		
		uno = 0; dos = 1;
		
		cout << "\nCuantos numeros de fibonacci desea conocer?";
		int cantidad;
		cin >> cantidad;
		
		cout << "0, 1";
		
		for(int i = 1; i <= cantidad; i++){
			parcial = uno + dos;
			uno = dos;
			dos = parcial;
			cout << "," << parcial;	
		}
		
		cout << "\n";
	}
	
	return 0;
}
