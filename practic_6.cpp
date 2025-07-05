#include<iostream> 

//even odd test  

int main(){ 
      
      system("clear") ; 

      int number ; 
      std::cin >> number ; 
      if( number % 2 == 0 )
          std::cout << number << " is an event number"<<  std::endl ; 
      else
          std::cout << number << " is an odd number" << std::endl ;  
} 
