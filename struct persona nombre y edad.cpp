/*
Escribir un programa en C/C++ que pida el nombre de 3 personas y la edad que tienen, luego
por pantalla mostrar el nombre y año de nacimiento
*/

#include<iostream>
using namespace std;

struct persona{

 char nombre[20];
 int anio;

} person[3];//declarando un struct persona del tipo array

int main(){

    const int anio_actual = 2023;
    int anio, edad;

    for(int i = 0; i<3; i++){

        cout<<"Ingresa nombre persona: ";
        cin.getline(person[i].nombre, 20, '\n');
        cout<<"Ingresa edad: ";
        cin>>edad;
        anio = anio_actual - edad;
        person[i].anio = anio;
        cin.ignore();//limpiando buffer
    }

    //imprimiendo
    for(int i = 0; i<3; i++){

		cout<<"\t"<<person[i].nombre;
		cout<<"\t"<<person[i].anio<<endl;
		cout<<"---------------------"<<endl;
	}
}
