#include <iostream>
#include <cstdlib>
#include <fstream>
#include <windows.h>
#include "ArbolB.h"
using namespace std;
//-------------------------------------------------------
int menu();
void animarReinicio();
//-------------------------------------------------------
int main(){
	int eleccion;//para usar en el menu
	int orden;
	int numero;//para agregar
	ArbolB A;
	do{
		do{
			system("cls");
			cout<<"\tARBOL B"<<endl<<endl;
			cout<<"ORDEN DEL ARBOL: "; cin>>orden;
			system("cls");
		}while(orden<3 || orden>10);
		A.ponerOrden(orden);
		do{
			eleccion=menu();
			system("cls");
			switch(eleccion){
				case 1:
					cout<<"\tAGREGAR POR TECLADO"<<endl<<endl;
					cout<<"Numero: "; cin>>numero;
					A.agregar(numero);
					cout<<endl<<endl;
					system("pause");
					break;
				case 2:
					cout<<"\tAGREGAR POR ARCHIVO"<<endl<<endl;
					A.agregarArchivo();
					cout<<endl<<endl;
					system("pause");
					break;
				case 3:
					cout<<"\tPINTAR LISTA"<<endl<<endl;
					A.pintar();
					cout<<endl<<endl;
					system("pause");
					break;
				case 4:
					cout<<"\tPINTAR LISTA PRUEBA"<<endl<<endl;
					A.pintarArbol();
					cout<<endl<<endl;
					system("pause");
					break;
				case 5:
					cout<<"\tBORRAR NUMERO"<<endl<<endl;
					cout<<"Numero a borrar: "; cin>>numero;
					//ponerle a la de borrar que sea bool para poder usar esto
					if( A.borrar(numero) ) cout<<"Numero "<<numero<<" borrado!";
					else cout<<"Numero no encontrado...";
					cout<<endl<<endl;
					system("pause");
					break;
				case 6:
					cout<<"\tBORRAR POR ARCHIVO"<<endl<<endl;
					A.borrarArchivo();
					cout<<endl<<endl;
					system("pause");
					break;
				case 7:
					cout<<"\tGUARDAR POR ARCHIVO"<<endl<<endl;
					A.guardarArchivo();
					cout<<endl<<endl;
					system("pause");
					break;
				case 8:
					cout<<"\tREINICIAR PROGRAMA"<<endl<<endl;
					A.destructorCopia();
					animarReinicio();
					cout<<endl<<endl;
					system("pause");
					break;
				case 9:
					cout<<"\tESTADISTICAS"<<endl<<endl;
					A.pintarEstadisticas();
					cout<<endl<<endl;
					system("pause");
					break;
				case 10:
					cout<<"\tBUSCAR NUMERO"<<endl<<endl;
					cout<<"Numero a buscar: "; cin>>numero;
					//ponerle a la de buscar que sea bool para poder usar esto
					if( A.buscarPintar(numero) ) cout<<"Numero "<<numero<<" encontrado!";
					else cout<<"Numero no encontrado...";
					cout<<endl<<endl;
					system("pause");
					break;
				case 11:
					cout<<endl<<endl;
					cout<<endl<<endl<<endl;
					cout<<"\t\t-CREADO POR: Carlos y Raul"<<endl<<endl;
					
					//cout<<"Presiona una tecla para continuar...";
					system("pause");
			}
		}while(eleccion!=11 && eleccion!=8);
	}while(eleccion!=11);

	return 0;
}
//*****************************************
int menu(){
	int eleccion;
	do{
		system("cls");
	    cout<<"\t>> ARBOL B <<"<<endl<<endl;
	    cout<<" 1. AGREGAR NUMERO POR TECLADO."<<endl;
	    cout<<" 2. AGREGAR NUMEROS POR ARCHIVOS."<<endl;
	    cout<<" 3. MOSTRAR 'LISTA DE NUMEROS'."<<endl;
	    cout<<" 4. MOSTRAR 'LISTA PRUEBA DE ARBOL'."<<endl;
		cout<<" 5. BORRAR NUMERO DEL ARBOL."<<endl;
	    cout<<" 6. BORRAR NUMEROS POR ARCHIVO."<<endl;
	    cout<<" 7. GUARDAR NUMEROS ORDENADOS EN ARCHIVO."<<endl;
	    cout<<" 8. REINICIAR PROGRAMA."<<endl;
	    cout<<" 9. ESTADISTICAS."<<endl;
	    cout<<" 10. BUSCAR NUMERO."<<endl;
		cout<<" 11. SALIR."<<endl<<endl;
		cout<<"\t>>Ingrese su eleccion: ";
	    cin>>eleccion;
	}while(eleccion<1 || eleccion>11);
	return eleccion;
}
//animacion de reinicio
void animarReinicio(){
	cout<<"Reiniciando..."<<endl<<endl;
	cout<<"\t";
	for(int i=0;i<=100;i+=2){
		cout<<char(178);
		if(i<10)cout<<i<<" %"<<"\b\b\b";
		else cout<<i<<" %"<<"\b\b\b\b";
		Sleep(20);
		/*cout<<"\t"<<i<<" %";
		system("cls");*/	
	}
}
