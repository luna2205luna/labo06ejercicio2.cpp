#include <iostream>
using namespace std;
int main(){
     
    int n=0;
    int i=0;
     cout<<"Programa que solicite al usuario un numero entero positivo 'n' y que calcule la suma de los primeros 'n' numero impares\n";
     cin>>n;

     while (n >= 1) {
        if(n%2!=0){
            
            i+=n;
        }  

         n--;
     }
     cout <<i;

    

}