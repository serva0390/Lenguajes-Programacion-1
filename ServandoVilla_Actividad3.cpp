//Proyecto Final//
#include<iostream>
#include<string>

class Empleado {
    private:
    std::string nombre;
    std::string apellidoPaterno;
    std::string apellidoMaterno;
    std::string fechaNacimiento;
    
    public:
    void capturarDatos(){
        std::cout <<"Ingresar nombre: ";
        std::getline(std::cin>>std::ws,nombre);
        
        std::cout <<"Ingresar apellido paterno: ";
        std::getline(std::cin>>std::ws,apellidoPaterno);
        
        std::cout <<"Ingresar apellido materno: ";
        std::getline(std::cin>>std::ws,apellidoMaterno);
        
        std::cout <<"Ingresar fecha de nacimiento(DD/MM/AAAA): ";
        std::getline(std::cin>>std::ws,fechaNacimiento);
    }
    
    std::string generarRFC(){
        std::string rfc;
        
        //1er. y 2do. caracter//
        rfc += apellidoPaterno [0];
        for(char c:apellidoPaterno){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'|c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
                rfc +=c;
                break;
                
            }
        }
        
        //3er. caracter//
        if(apellidoMaterno.empty()){
            rfc +='X';
        } else {
            rfc += apellidoMaterno[0];
        }
        
        //4to. caracter//
        rfc += (nombre[0]=='Ñ')?'X':nombre[0];
        
        //5to. y 6to. caracter//
        rfc += fechaNacimiento.substr(8,2);
        
        //7mo. y 8vo. caracter//
        rfc += fechaNacimiento.substr(3,2);
        
        //9no. y 10mo. caracter//
        rfc += fechaNacimiento.substr(0,2);
        
        return rfc;
    }
};
int main(){
    Empleado empleado;
    
    empleado.capturarDatos();
    std::string rfc = empleado.generarRFC();
    
    std::cout<<"El RFC generado es el siguiente:"<<rfc<<std::endl;
    
    return 0;
    
}
