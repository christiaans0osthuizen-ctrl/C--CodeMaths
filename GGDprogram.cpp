#include <iostream>
#include <cmath>

/*
X0 X1 X2  choose f and x to initalize
f(x) = x**2 + c (mod n) we want modP prime deviser of n gcd(|xi(turtel) - xj(rabbit)|,N)
turtel = x+1 rabit = x+2
if gcd = 1 starts X1
if gcd = n failed, reinitalize
else return gcd
gcd(a,b)= gcd(b,(a%b))
a = bq + r
48,18       a,b     a b
48%18=12    a%b=c   a b
18%12=6     b%c=d   a=b b=c
12%6=       c%d=e   a b
*/
int GCD(int a, int b){
   int c =0; 

   while(b != 0){
        c = a%b;
        a = b;
        b = c;
   }
return a;
}

int main(){
    int c =0; 
    c=GCD(6,36);
    std::cout<< c <<std::endl;
    
return 0;
}

