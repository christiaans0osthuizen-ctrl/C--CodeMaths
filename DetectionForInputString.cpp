#include <iostream>
#include <string>
/*
int main(){
    std::string names[3];
    int scores[9];

        for(int i = 0; i < 3; i++){
            std::cout<<"Name: ";
            getline(std::cin, names[i]);
            std::cout<<"Score: ";
            std::cin>>scores[i];
            std::cin.ignore();
        }
        for(int i = 0; i < 3; i++){
            std::cout<<names[i]<<'\n';
            std::cout<<std::to_string(scores[i])<<std::endl;
        }
    
    return 0;
}
    */

int main(){
    std::string names[3];
    int scores[9];

        for(int i = 0; i < 3; i++){
            std::cout<<"Name: ";
            getline(std::cin, names[i]);
            switch (i){
                case 0:
                    for(int x = 0; x < 3; x++){
                        std::cout<<"Score: ";
                        std::cin>>scores[x]; 
                    }
                break;
                case 1:
                    for(int x = 3; x < 6; x++){
                        std::cout<<"Score: ";
                        std::cin>>scores[x];
                    }
                break;
                case 2:
                    for(int x = 6; x < 9; x++){
                        std::cout<<"Score: ";
                        std::cin>>scores[x];
                    }
                break;
            }
            
            
        }
        for(int i = 0; i < 3; i++){
            std::cout<<names[i]<<'\n';
              switch (i){
                case 0:
                    for(int x = 0; x < 3; x++){
                        std::cout<<"Score: " + scores[x];
                    }
                break;
                case 1:
                    for(int x = 3; x < 6; x++){
                        std::cout<<"Score: " + scores[x];
                    }
                break;
                case 2:
                    for(int x = 6; x < 9; x++){
                        std::cout<<"Score: " + scores[x];
                    }
                break;
            }
        }
    
    return 0;
}