#include <iostream>
using namespace std ;

int main() {
	cout<<"konversi suhu"<<endl;
	
	int pilihan ;
	cout<<"pilih konversi suhu :"<<endl ;
	cout<<"1. konversi suhu celcius  ke kelvin, fahrenheit, reamur"<<endl;
	cout<<"2. konversi suhu reamur ke celcius, fahrenheit, kelvin"<<endl;
	cout<<"3. konversi suhu fahrenheit ke celcius, kelvin, reamur"<<endl;
	cout<<"4. konversi suhu kelvin ke celcius, reamur, fahrenheit"<<endl;
	cout<<"5. keluar"<<endl;
	cout<<"masukkan pilihan 1-5 :" ;
	cin>>pilihan;
	
	if (pilihan == 1) {
		float celcius, reamur, fahrenheit, kelvin;
		cout<<"masukkan suhu celcius :" ;
		cin>>celcius;
		
		kelvin=celcius+273 ;
		fahrenheit=(celcius*9/5)+32 ;
		reamur=celcius*4/5 ;
		cout<<endl;
		cout<<"hasil konversi suhu dari celcius :"<<endl ;
		
		cout<<"kelvin :"<<kelvin<<endl ;
		cout<<"fahrenheit :"<<fahrenheit<<endl ;
		cout<<"reamur :"<<reamur<<endl ;
	}
	
	else if (pilihan == 2) {
		float celcius, reamur, fahrenheit, kelvin ;
		cout<<"masukkan suhu reamur :" ;
		cin>>reamur;
		
		celcius=reamur*(5/4) ;
		kelvin=reamur*(5/4)+273 ;
		fahrenheit=reamur*(9/4)+32 ;
		cout<<endl;
		cout<<"hasil konversi suhu dari reamur :"<<endl;
		
		cout<<"celcius :"<<celcius<<endl ;
		cout<<"kelvin :"<<kelvin<<endl ;
		cout<<"fahrenheit :"<<fahrenheit<<endl ;	
	}
	
	else if (pilihan == 3) {
		float celcius, reamur, fahrenheit, kelvin ;
		cout<<"masukkan suhu fahrenheit :" ;
		cin>>fahrenheit ;
		
		celcius=5/9*(fahrenheit-32) ;
		reamur=4/9*(fahrenheit-32) ;
		kelvin=5/9*(fahrenheit-32)+32 ;
		cout<<endl;
		cout<<"hasil konversi suhu dari fahrenheit :"<<endl ;
		
		cout<<"celcius :"<<celcius<<endl;
		cout<<"reamur :"<<reamur<<endl;
		cout<<"kelvin :"<<kelvin<<endl;
	}
	
	else if (pilihan == 4) {
		float celcius,reamur,fahrenheit,kelvin;
		cout<<"masukkan suhu kelvin : ";
		cin>>kelvin ;
		
		celcius=kelvin-273;
		reamur=4/5*(kelvin-273);
		fahrenheit=9/5*(kelvin-273)+32;
		cout<<endl;
		cout<<"hasil konversi suhu dari kelvin :"<<endl;
		
		cout<<"celcius :"<<celcius<<endl;
		cout<<"reamur :"<<reamur<<endl;
		cout<<"fahrenheit :"<<fahrenheit<<endl;
	}
	
	else if (pilihan == 5 ){
		cout<<"keluar"<<endl;
	}
	
	else {
		cout<<"pilihan tidak valid"<<endl;
	}
	
	return 0 ;
}





