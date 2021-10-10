#include "CLientes.cpp"
#include "Empleado.cpp"
#include<iostream>
using namespace std;
main(){
	string c_nit, c_nombres, c_apellidos, c_direccion, c_fn;
	int c_telefono;
	cout<<"Ingrese Nit:";
	cin>>c_nit;
	cout<<"Ingrese Nombres:";
	cin>>c_nombres;
	cout<<"Ingrese Apellidos:";
	cin>>c_apellidos;
	cout<<"Ingrese Direccion:";
	cin>>c_direccion;
	cout<<"Ingrese Telefono:";
	cin>>c_telefono;
	cout<<"Ingrese Fecha Nacimiento:";
	cin>>c_fn;
	//instacia de un objeto
	Clientes obj_c = Clientes(c_nombres, c_apellidos, c_direccion, c_fn, c_telefono, c_nit);
	obj_c.agregar();
	
	cout<<"Ingrese Nit:";
	cin>>c_nit;
	obj_c.setNit(c_nit);
	obj_c.agregar();
	cout<<obj_c.getNit()<<endl;
	cout<<"Ingrese Nombres:";
	cin>>c_nombres;
	obj_c.setNombres(c_nombres);
	obj_c.agregar();
	cout<<obj_c.getNombres()<<endl;
	cout<<"Ingrese Apellidos:";
	cin>>c_apellidos;
	obj_c.setApellidos(c_apellidos);
	obj_c.agregar();
	cout<<obj_c.getApellidos()<<endl;
	cout<<"Ingrese Direccion:";
	cin>>c_direccion;
	obj_c.setDireccion(c_direccion);
	obj_c.agregar();
	cout<<obj_c.getDireccion()<<endl;
	cout<<"Ingrese Telefono:";
	cin>>c_telefono;
	obj_c.setTelefono(c_telefono);
	obj_c.agregar();
	cout<<obj_c.getTelefono()<<endl;
	cout<<"Ingrese Fecha Nacimiento:";
	cin>>c_fn;
	obj_c.setFn(c_fn);
	obj_c.agregar();
	cout<<obj_c.getFn()<<endl;
	
	
	string , e_nombres, e_apellidos, e_direccion, e_fn, e_puesto;
	int e_telefono, e_codigo;
	cout<<"Ingrese Codigo:";
	cin>>e_codigo;
	cout<<"Ingrese Nombres:";
	cin>>c_nombres;
	cout<<"Ingrese Apellidos:";
	cin>>c_apellidos;
	cout<<"Ingrese Puesto:";
	cin>>e_puesto;
	cout<<"Ingrese Direccion:";
	cin>>c_direccion;
	cout<<"Ingrese Telefono:";
	cin>>c_telefono;
	cout<<"Ingrese Fecha Nacimiento:";
	cin>>c_fn;
	//instanacia de un objeto
	Empleado obj_e = Empleado(e_nombres, e_apellidos, e_direccion, e_fn, e_telefono, e_puesto, e_codigo);
	obj_e.agregar();
	
	cout<<"Ingrese Codigo:";
	cin>>e_codigo;
	obj_e.setCodigo(e_cod);
	obj_e.agregar();
	cout<<obj_e.getCodigo()<<endl;
	cout<<"Ingrese Nombres:";
	cin>>e_nombres;
	obj_e.setNombres(e_nombres);
	obj_e.agregar();
	cout<<obj_e.getNombres()<<endl;
	cout<<"Ingrese Apellidos:";
	cin>>e_apellidos;
	obj_e.setApellidos(e_apellidos);
	obj_e.agregar();
	cout<<obj_e.getApellidos()<<endl;
	cout<<"Ingrese Puesto:";
	cin>>e_puesto;
	obj_e.setPuesto(e_puesto);
	obj_e.agregar();
	cout<<obj_e.getApellidos()<<endl;
	cout<<"Ingrese Direccion:";
	cin>>e_direccion;
	obj_e.setDireccion(e_direccion);
	obj_e.agregar();
	cout<<obj_e.getDireccion()<<endl;
	cout<<"Ingrese Telefono:";
	cin>>e_telefono;
	obj_e.setTelefono(e_telefono);
	obj_e.agregar();
	cout<<obj_e.getTelefono()<<endl;
	cout<<"Ingrese Fecha Nacimiento:";
	cin>>e_fn;
	obj_e.setFn(e_fn);
	obj_e.agregar();
	cout<<obj_e.getFn()<<endl;
}
