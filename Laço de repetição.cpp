#define _USE_MATH_DEFINES

#include <iostream>

#include <cmath>

#include <cstdlib>

using namespace std;



void funcao(int *n1, int n2){

    *n1+= n2;

}


main(){

    for (int i= 1; i<=10; i++) {

         int n1= 1 + rand() % 9;

         int n2= 1 + rand() % 9;

        

         cout << n1 << " + " << n2 << " = ";

         funcao(&n1, n2);

         cout << n1 << endl;

    }    

}
