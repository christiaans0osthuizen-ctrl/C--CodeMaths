//goal find x 5x + 9/x**2 - 2x -3  + 2x/x - 3 = x/1 + x
#include <iostream>
#include <cmath>
/* ax**2 + bx +c = (mx + n)(px + q)
   mx*px = ax**2
   (n*px + q*mx) = bx
   n*q = c 



*/
int main(){
    double a, b, c, x1, x2;
    double x = 1;
    std::string x1_string;
    std::string x2_string;
    std::cout<<"Please type in the eqation"<<std::endl;
    std::cout<<"a = ",(std::cin>> a), std::cout<<"b = ",(std::cin>> b), std::cout<<"c = ",(std::cin>> c),
    x1 = a*(-(((-b) + sqrt((b*b) -4*a*c))/(2*a)));
    
    x2 = -(((-b) - sqrt((b*b)-4*a*c))/(2*a));
    
    x= x*a;

    if(x1 >= 0){
        x1_string = std::to_string(x1);
        x1_string = ("+ " + x1_string);
    }
    else{
        x1_string = std::to_string(x1);
    }

    if(x2 >= 0){
        x2_string = std::to_string(x2);
        x2_string = ("+ " + x2_string);
    }
    else{
        x2_string = std::to_string(x2);
    }

    //a*(x - x1)*(x - x2);
    std::string x_string = std::to_string(x);

std::cout<<"(" + x_string + "x " + x1_string + ")(x " + x2_string + ")";

    return 0;
}