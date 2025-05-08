#include <iostream>

using namespace std;

int main(){
	
		int sle=0;
	


	cout<<"Tu computadora se apago instantaneamente revisa que puede ser:"<<endl;
	cout<<"1. Reviso mi fuente de poder  "<<endl;
	cout<<"2. Reviso si es por sobrecalentamiento  "<<endl;
	cout<<"3. Reviso si mi interruptor no esta descompuesto  "<<endl;
	cout<<"4. La pongo a cargar "<<endl;
	cout<<"5.Corroboro si vuelve a enceder "<<endl;
	cout<<"Seleacciona con numero cual opcion decides 1-5:"<<endl;
	cin>>sle;
	
	if(sle==1){cout<<"Reviso que el fuente de cableado este bien, y si no ajusto todo y vuelvo a intentar"<<endl;}
	else if(sle==2){cout<<"Toco la base y sentir si esta caliente, si  esta caliente espero a que se enfrie y reviso ventilador "<<endl;	}
	else if(sle==3){cout<<"Corrboro mi interruptor de pared con un multimetro y vuelvo a intentar "<<endl;	}
	else if(sle==4){cout<<"Conecto el cargador y espero para ver si agarra carga "<<endl;}
	else if(sle==5){cout<<"Vuelvo a apachaer el boton de encendido para verificar si vuelve a encender  "<<endl;}

	else{cout<<"no seguiste instrucciones"<<endl;}


	
	
	
}
