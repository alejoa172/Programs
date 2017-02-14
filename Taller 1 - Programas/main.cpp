#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
//1 Hacer un programa la multiplicación de dos enteros sin signo usando solo sumas. 
	
	/*int x, y, producto; 
	cout<< "ingrese numeros enteros a multiplicar : " <<endl;
	cin>>x;
	cin>>y;
	
	producto=0;
	
	for (int i=1; i<=y; i++)
	{
		producto=producto+x ;
	
	}
	cout<<"el producto de la multiplicacion es "<<producto << endl;*/
	
	
//2-Realice un programa que calcule la potencia de dos números enteros sin signo
	
	/* int base; 
        int exponente; 
        int contador = 0; 
        float acumulador = 1; 
     
        do { 
            cout<<"Introduzca base"<<endl; 
            cin>>base; 
            cout<<"Introduzca exponente"<<endl; 
            cin>>exponente; 
            
        } while ((base == 0) && (exponente == 0)); 
        
        if ((base > 0) && (exponente == 0)) { 
 
        } 
                if (exponente < 0) { 
                     
                    while (contador > exponente) { 
                        acumulador = acumulador / base; 
                        contador = contador - 1; 
                    } 
 
                } else { 
                    while (contador < exponente) { 
                        acumulador = acumulador * base; 
                        contador = contador + 1; 
                    } 
                } 
             
       
        if ((base==0) && (exponente < 0 )) 
        { 
            cout<<"ERROR"<<endl; 
        } 
        else{ 
        cout<<"El resutado final es: "<<acumulador<<endl; 
        } 
     
	
//3-Realice un programa que calcule un polinomio de grado n, en donde los coeficientes del polinomio se encuentran almacenados en un vector k de n+1 posiciones, de la siguientes forma:
pol(x,k,n)=i=0nkixi. En donde el ki se encuentra en la posición k[i] del vector k.

 /*int n; 
 cout<<"ingrese el # de coeficientes" ;
 cin>>n;
 float a [n]; //arreglo de coe
 float x;

 for (int i=0; i<n; i++) {
	
	cout<<"coeficiente a ["<< i <<"] = ";
	cin>> a [i];
	}
	cout<<"ingrese valor de x =";
	cin>>x;
	
	//calcular valor numerico P(x)
	float p=0.0;
	
	for (int i=0; i<n; i++) {
	p=p+a[i] * pow (x, i);
	}
 cout<<"\n valor numerico p ("<<x<<") = " <<p<<endl;*/


	
//5-Realice un programa  calcule la división entera entre dos números enteros.

    /*int dividendo,divisor,cociente=0,residuo; 
    cout<<"introduzca el dividendo\n"; 
    cin>>dividendo; 
    cout<<"introduzca el divisor\n"; 
    cin>>divisor; 

    while(dividendo>divisor){ 

    dividendo=dividendo-divisor; 
    cociente=cociente+1; 

     } 

    residuo=dividendo; 
    cout<<"el resultado de la division es "<<cociente<<" y el residuo es "<<residuo; */
	
	
		
	system("pause");
	return 0;
}
