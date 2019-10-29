#include <iostream>
#include <cmath>
int main(void){
    
    
    int N;
    int A;
    int B;
    std::cout<<"Ingrese los tres valores "<<std::endl;
    std::cin>>N>>A>>B;
    
    std::cout<<"Tres numeros para un triangulo:"<<" "<<N<<" "<<A<<" "<<B<<std::endl;
    
    if ((N*N)+(A*A)==B*B){
       std::cout<<"Pueden ser valores de un triangulo"<<std::endl;
    
    }
    
    return 0;
    
}