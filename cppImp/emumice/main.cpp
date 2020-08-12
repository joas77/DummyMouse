#include <sstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include "emumice.hpp"

using namespace std;
using namespace Emumice;


int main(int argc, char* argv[]) 
{
   std::cout << "Moving mouse randomly along line y = x, where (0,0) is your monitor's top left corner" << std::endl;
   std::cout << "Press ctrl-C to exit" << std::endl;

   Point p; 
   p.x = 0;
   p.y = 0;

   std::srand(std::time(nullptr)); // use current time as seed for random generator
   
   while (true)
   {
      mouse_move(p);
      int pointDelta = 1 + std::rand()%1000;
       
      p.x=pointDelta;
      p.y=pointDelta;

      std::this_thread::sleep_for(std::chrono::milliseconds(1000));
   }
   
}
