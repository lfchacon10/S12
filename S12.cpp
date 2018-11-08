#include<iostream>
#include<stdio.h>

double Ao = 0.1;
double L = 1;
double dx = 0.01;
double dt= 0.001;
double c = 300;
double Vo= 0;
double tFinal = 10;
double pendiente = 2*Ao/L;


//Constante
//double k= pow(c,2)* pow(dt, 2) / pow(dx,2)
double A[100];	

void iniciarArray()
{
	for ( int i =0 ; i < 100; i++)
	{
		if( i <=50)
		{
			A[i] = pendiente*i*dx;				
		}
		else A[i] = 0.2-pendiente*i*dx;	
	}
}

double xPasado = A[-1];
double xPresente = A[0];
double xFuturo = A[1];


//Para t=0
double tPresente = 0 ;
//double tFuturo = k*( xFuturo + xPasado -2*xPresente); 
//double tPasado = tFuturo;

int main()
{	
	iniciarArray();	
	
	return 0;
}	
