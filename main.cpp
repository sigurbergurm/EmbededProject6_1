#include <iostream>
#include <unistd.h>

int main()
{
  int counter = 0;
  while(1){
        
        std::cout << "The counter value is: " << counter <<std::endl;
        counter++;
        sleep(1);
  }
  
  return 0;
}

//ps í terminal = processes running
//kill PID númer endar þann process