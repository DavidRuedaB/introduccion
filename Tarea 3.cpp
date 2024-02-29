#include <iostream>
using namespace std;
class ejemplo
{   //ATRIBUTOS DEL OBJETO PRIVADO
	int iprivado, isegundo;
public:
	ejemplo(int valor, int valor2)//CONSTRUCTOR DE LA CLASE
	{
		this->iprivado = valor;
		this->isegundo = valor2;
	}
	int get_iprivado()//METODO PARA RETORNAR EL VALOR DEL ATRIBUTO IPRIVADO
	{
		return iprivado;
	}
	int get_isegundo()
	{
		return isegundo;//METODO PARA RETORNAR EL VALOR DEL ATRIBUTO ISEGUNDO
	}
	void set_iprivado(int valor)//METODO PARA ASIGNAR EL VALOR DEL ATRIBUTO IPRIVADO
	{
		if(valor >0)
		iprivado=valor;
	}
	void set_isegundo(int valor)//METODO PARA ASIGNAR EL VALOR DEL ATRIBUTO ISEGUNDO
	{
		if(valor>0)
			isegundo=valor;
	}
	void set_ejemplo(int valor, int valor2)//METODO PARA ASIGNAR VALORES A TODOS LOS ATRIBUTOS
	{
		if(valor >0&&valor2>0)
		{
			iprivado=valor;
			isegundo=valor2;
		}
	}
	//Generar el destructor
	ejemplo(){
		iprivado=-1;
		isegundo=-1;
		cout<<"Se esta ejecutando el DESTRUCTOR"<<endl;
	}
};

int main(int argc, char *argv[]) {
	ejemplo objeto1(0,0);
	cout<<"Objeto1 atributo iprivado:"<<objeto1.get_iprivado()<<endl;
	cout<<"ingresar un numero";
	int num;
	cint>>num
	objeto1.set_iprivado(num);
	cout<<"Objeto1 atributo iprivado:"<<objeto1.get_iprivado()<<endl;
	//delete objeto2;
	objeto1.set_iprivado(-20);
	cout<<"Objeto1 atributo iprivado:"<<objeto1.get_iprivado()<<endl;
	
	return 0;
}

