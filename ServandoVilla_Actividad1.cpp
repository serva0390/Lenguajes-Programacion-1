// Actividad 1 //
#include<stdio.h>
#include<iostream>

int main()
{
    int edad;
    std:: cout <<"favor de ingresar edad:" ;
    std:: cin >> edad;
    
    if(edad >=18){
        std:: cout <<"Felicidades has desbloqueado el modo dificil en este juego de la vida xD."<< std:: endl;
        }else {
        std:: cout <<"Aun estas en la dificultad novato,animo falta camino."<< std:: endl;
        }
        
        return 0;
}
