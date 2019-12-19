#include <iostream>
#include <cmath>
#include <vector>
#include <stdlib.h>


    
int main(){
    int confirmation;
    std::cout<<"If you want to empty the glass fully?then press 0 \n";
    std::cout<<"If you want to empty the glass half?then press 1 \n";
    std::cout<<"If you want to empty the glass three quaters?then press 2 \n";
    std::cin>>confirmation;

    if (confirmation == 0){
        
        double total_height;
        double answer;
        std::cout<< "What's the total height? ";
        std::cin>>total_height;
        answer =  total_height / 2 ;
        std::cout<<"Your answer is "<< answer;
        
    }
    else if (confirmation == 1){
        double total_height;
        double answer;
        std::cout<< "What's the total height? ";
        std::cin>>total_height;
        answer =  (total_height / 2) / 2 ;
        std::cout<<"Your answer is "<< answer;
    }
    else if (confirmation == 2){
        double total_height;
        double answer;
        std::cout<< "What's the total height? ";
        std::cin>>total_height;
        answer =  (total_height / 2) / 2 ;
        answer = answer + (total_height / 2);
        answer = answer / 2;

        std::cout<<"Your answer is "<< answer;
    }
    system ("pause");

    








}