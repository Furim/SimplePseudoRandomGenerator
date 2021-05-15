#include<iostream>


int main(void) {
   
   int max;
   
   max = 100; //max integer that u want to generate aka number will be generated from 0-**to that number**
   
   srand(time(0));
   
   std::cout << "Random number that has been generated: "<<rand()%max << "\n"; 
   
   return 0;

}
