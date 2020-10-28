#include <iostream>
#include <unistd.h>
int main()
{
  int counter = 0;
  while(1){
    counter++;
    std::cout << counter <<std::endl;
    
    sleep(1);
  }
  
  return 0;
}

//ps í terminal = processes running
//kill PID númer endar þann process