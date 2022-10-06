//creado por Añapa Corozo Maroly Mayerli
#include<iostream>
using namespace std;

int main()
{
	int AM_i=0,AM_l;
	float AM_x,AM_s=0;
	cout<<"ingrese el limite AM_l="; cin>>AM_l;
	do{
		
	cout<<"ingrese el numero AM_x="; cin>>AM_x;
	AM_i=AM_i+1;
	AM_s=AM_s+AM_x;



	}while(AM_i<AM_l);
	cout<<"Se ingresaron "<<AM_l<<" numeros "<< "que sumaron "<<AM_s<<endl;
	return 0;



}
