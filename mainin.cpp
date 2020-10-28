#include <iostream>
#include <unistd.h>

int main(int argc, char** argv)
{   
    int value = 0;
    std::cin >> value;
    std::cout<< "Multiplication yields: " << value*atoi(argv[1]) <<std::endl;

  return 0;
}

//ps u í terminal = processes running
//kill PID númer endar þann process