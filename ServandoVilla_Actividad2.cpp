//Actividad 2//
#include <stdio.h>
#include <iostream>

int main() {
    float numero1,numero2;
    
    std::cout<<"Favor de ingresar el primer numero:";
    std::cin>>numero1;
    
    std::cout<<"Favor de ingresar el segundo numero:";
    std::cin>>numero2;
    
    float suma = numero1 + numero2;
    float resta = numero1 - numero2;
    float multiplicacion = numero1 * numero2;
    float division = numero1 / numero2;
    
    std::cout <<"El resultado de la suma es:"<<suma<<std::endl;
    std::cout <<"El resultado de la resta es:"<<resta<<std::endl;
    std::cout <<"El resultado de la multiplicacion es:"<<multiplicacion<<std::endl;
    std::cout <<"El resultado de la division es:"<<division<<std::endl;
    
    return 0;
}