#include"Persona.cpp"
#include<iostream>
using namespace std;
class Empleado : Persona{
	//atributos
	private : 	string puesto;
	int codigo_empleado;

	//constructor 
	public :
	Empleado(){
	}
	Empleado(string nom, string ape, string dir, string f, int tel, string ps, int cod) : Persona(nom,ape,dir,f,tel){
	codigo_empleado = cod;
	puesto = ps	
	}
	//set (modificar los atributos de una clase)
void setCodigo(int cod){codigo_empleado = cod;}
void setNombres(string nom){nombres = nom;}
void setApellidos(string ape){apellidos = ape;}
void setPuesto(string ps){puesto = ps;}
void setDireccion(string dir){direccion = dir;}
void setTelefono(int tel){telefono = tel;}
void setFn(string f){fn = f;}
//get (mostrar los atrtibutos de una clase)
int getCodigo(){return codigo;}
string getNombres(){return nombres;}
string getApellidos(){return apellidos;}
string getPuesto(){return puesto;}
string getDireccion(){return direccion;}
int getTelefono(){return telefono;}
string getFn(){return fn;}
void agregar(){
	cout<<"_____________________________"<<endl;
	  cout<<codigo<<";"<<puesto<<";"<<nombres<<","<<apellidos<<","<<direccion<<","<<fn<<","<<telefono<<endl;
}
};
