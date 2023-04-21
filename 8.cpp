#include <iostream>
#include <string>
using namespace std;
int contarletraA (string f);

int main(){
	string f;
	cout<<"ingrese frase"<<endl;
	cin>>f;
	cout<<"El valor total de las letras es: "<<contarletraA(f);
	return 0;
}
int contarletraA(string f){
	int i;
	int cont = 0;
	
	for(i=0; i<f.size(); i++){
		if(f[i]=='a' || f[i]=='e'){
			cont++;
		}
		if(f[i]=='o' || f[i]=='s'){
			cont=cont+2;
		}
		if(f[i]=='d' || f[i]=='i'){
			cont=cont+3;
		}
		if(f[i]=='n' || f[i]=='r'){
			cont=cont+3;
		}
		if(f[i]=='c' || f[i]=='l'){
			cont=cont+4;
		}
		if(f[i]=='t' || f[i]=='u'){
			cont=cont+4;
		}
		if(f[i]=='m' || f[i]=='p'){
			cont=cont+5;
		}
		if(f[i]=='b' || f[i]=='f'){
			cont=cont+6;
		}
		if(f[i]=='g' || f[i]=='h'){
			cont=cont+6;
		}
		if(f[i]=='j' || f[i]=='q'){
			cont=cont+6;
		}
		if(f[i]=='v' || f[i]=='x'){
			cont=cont+6;
		}
		if(f[i]=='y' || f[i]=='z'){
			cont=cont+6;
		}
		if(f[i]=='k' || f[i]=='w'){
			cont=cont+7;
		}
	}
	
	return cont;
}