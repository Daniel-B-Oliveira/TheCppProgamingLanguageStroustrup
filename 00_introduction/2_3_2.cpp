#include <iostream>

int main(){
    // bool accept();
    // {
    //     std::cout<<"Do you want to proceed (y or n)?\n";

    //     char answer = 0;
    //     std::cin >> answer;

    //     if (answer == 'y') return true;
    //     return false;
    // }

    // bool accept2();
    // {
    //     std::cout<<"Do you want to proceed (y or n)?\n";
        
    //     char answer = 0;
    //     std::cin >> answer;

    //     switch (answer) {
    //         case 'y':
    //             return true;
    //         case 'n':
    //             return false;
    //         default:
    //             std::cout<<"I'll take that for a no.\n";
    //             return false;
    //     }
    // }

    bool accept3();
    {
        int tries = 1;
        while (tries < 4) {
            std::cout<<"Do you want to proced (y or n)?\n";
            char answer = 0;
            std::cin >> answer;

            switch (answer) {
            case 'y':
                return true;
            case 'n':
                return false;
            default:
                std::cout<<"I don't understand that.\n";
                tries = tries + 1;    
            }
        }
        std::cout<<"I'll take that foa a no.\n";
        return false;
    }
}