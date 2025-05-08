#include <iostream>

using namespace std;




int main(){
	int op=0;
	


	cout<<"Ya es tarde y tienes que llegar a la U"<<endl;
	cout<<"1. Me voy a pie "<<endl;
	cout<<"2. pido uber  "<<endl;
	cout<<"3. no voy  "<<endl;
	cout<<"4. Voy en bicicleta "<<endl;
	cout<<"5.Tomo el bus   "<<endl;
	cout<<"Seleacciona con numero cual opcion decides 1-5:"<<endl;
	cin>>op;
	
	if(op==1){cout<<"Te iras a pie, llegaras 2 horas despues "<<endl;}
	else if(op==2){cout<<"Pediste uber excelente, llegaras a tiempo"<<endl;	}
	else if(op==3){cout<<"No iras, perderas asistencia y punteo"<<endl;	}
	else if(op==4){cout<<"vas en bici llegaras 1 hora despues :´<"<<endl;}
	else if(op==5){cout<<"Tomaste el bus. llegaras 25 minutos tarde "<<endl;}

	else{cout<<"no seguiste instrucciones"<<endl;}




}



