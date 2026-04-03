#include <iostream>
#include <string>

/*
i*3 + x

0*3 + 0 = 0     
0*3 + 1 = 1
0*3 + 2 = 2

1*3 + 0 = 3
1*3 + 1 = 4
1*3 + 2 = 5

2*3 + 0 = 6
2*3 + 1 = 7
2*3 + 2 = 8
*/


int main(){
    std::string names[3];
    int scores[9];

        for(int i = 0; i < 3; i++){
            std::cout<< "\033[1;37;41mName[" << (i + 1) << "]:\033[0m ";
            std::getline(std::cin, names[i]);
            for(int x = 0; x < 3; x++){
                bool input_is_number = false;
                do{
                    std::cout<< "\033[1;37;41mScore[" << (x + 1) << "]:\033[0m ";
                    if(std::cin>> scores[i*3 + x]){
                        input_is_number = true;
                    }
                    else{
                        std::cout<<"\033[1;37;41mInput Invailid, Please try again\033[0m" <<'\n';
                        std::cin.clear();
                        std::cin.ignore(1000, '\n');
                    }
                }while(!input_is_number);
            }
        }
    return 0;
}