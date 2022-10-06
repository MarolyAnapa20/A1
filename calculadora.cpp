//Programa que presenta las operaciones básicas
//Creado por Añapa Corozo Maroly Mayerli 
//Fecha: 14-09-2022

#include<iostream>
using namespace std;

int main()
{
	float AM_x,AM_y,AM_s,AM_m,AM_d,AM_r;
	//Ingreso de datos
	cout<<"Ingrese en valor de AM_x=:";
	cin>>AM_x;
	cout<<"Ingrese en valor de AM_y=:";
	//Operaciones 
	cin>>AM_y;
	AM_s=AM_x+AM_y;
	AM_m=AM_x*AM_y;
	AM_d=AM_x/AM_y;
	AM_r=AM_x-AM_y;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<AM_x<<" + "<<AM_y<<" = "<<AM_s<<endl;
	cout<<"Las multiplicacion de "<<AM_x<<" * "<<AM_y<<" = "<<AM_m<<endl;
	cout<<"Las division de "<<AM_x<<" / "<<AM_y<<" = "<<AM_d<<endl;
	cout<<"Las resta de "<<AM_x<<" - "<<AM_y<<" = "<<AM_r<<endl;
	return 0 ;

}

