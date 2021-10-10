#include<iostream>
#include<string>
using namespace std;
class Persona{
	//atributos 
	protected : string nombres, apellidos, direccion, fn;
	int telefono; 
	//constructor
	protected : 
	Persona(){
	}
	Persona(string nom, string ape, string dir, string f, int tel){
	nombres = nom;
	apellidos = ape;
	direccion = dir;
	fn = f;
	telefono = tel;
	}
	
	//metodo
	void agregar();
};
