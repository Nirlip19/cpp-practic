#include<iostream> 

//out put in order
int main(){ 

      system("clear") ; 
      std::string  num1 , num2 , num3 ;
      std::cin >> num1 >> num2 >> num3  ; 

      if(num1 >= num2 && num2 >= num3) 
          std::cout << num3 <<","<< num2 <<","<< num3 << std::endl ; 
      if(num1 <= num2 && num2 <= num3)
          std::cout << num1 <<","<< num2 <<","<<num3 << std::endl ; 
      if(num2 <= num1 && num1 <= num3)
          std::cout << num2 <<","<<num1<<","<<num3 << std::endl ; 
      if(num2 >= num1 && num1 >= num3 )
          std::cout << num3 <<","<<num1 <<","<<num2<< std::endl ; 
      if( num1 >= num3 && num3 >= num2)
          std::cout << num2 <<","<<num3 <<","<<num1<< std::endl ; 
      if(num1 >= num2 && num2 >= num3) 
          std::cout << num3 <<","<<num2 <<","<<num3<< std::endl ; 


} 
