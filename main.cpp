#include <iostream>
#include <unistd.h>

int main(int argc,char* args[])
{
    int userNo;
    std::cout << "Enter how many times you want to loop:" << std::endl;
    std::cin >> userNo;
    for(int i = 0; i <= userNo; i++) {
        for(int j = 1; j <= i ; j++) {
            std::cout << "[|] ";
        }
        std::cout << std::endl;
        sleep(1);
    }
    std::cin.get();
    return 0;
}