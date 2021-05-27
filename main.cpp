#include <iostream>

int main() {
   double lustros, segundos;
  std::cout << "Ingrese la cantidad de lustros"<<std::endl;
  std::cin>> lustros;
 segundos= 86400* 365*5;
  std::cout<<lustros<< "lustros equivalen a"<<segundos<<"segundos"<<std::endl;
}