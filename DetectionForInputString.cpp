#include <iostream>
#include <string>


int main(){
    std::string names[3];
    std::string scores_string[9];
    int scores[9];

        for(int i = 0; i < 3; i++){
            std::cout<<"Name: ";
            getline(std::cin, names[i]);
            switch (i){
                case 0:
                    for(int x = 0; x < 3; x++){
                        std::cout<<"Score: ";
                        std::cin>>scores[x];
                        std::cin.ignore(); 
                    }
                break;
                case 1:
                    for(int x = 3; x < 6; x++){
                        std::cout<<"Score: ";
                        std::cin>>scores[x];
                        std::cin.ignore(); 
                    }
                break;
                case 2:
                    for(int x = 6; x < 9; x++){
                        std::cout<<"Score: ";
                        std::cin>>scores[x];
                        std::cin.ignore(); 
                    }
                break;
            }
            
            
        }
 for(int i = 0; i < 9; i++){
        scores_string[i] = std::to_string(scores[i]);
    }

    std::cout<<"======================="<<std::endl;
    for(int i = 0; i < 3; i++){
    std::cout<<names[i]<<std::endl;
        switch (i){
            case 0:
                for(int x = 0; x < 3; x++){
                    std::cout<<"Score: " + scores_string[x]<<std::endl;
                }
            break;
            case 1:
                for(int x = 3; x < 6; x++){
                    std::cout<<"Score: " + scores_string[x]<<std::endl;
                }
            break;
            case 2:
                for(int x = 6; x < 9; x++){
                    std::cout<<"Score: " + scores_string[x]<<std::endl;
                }
            break;
            } 
        }
}