#include<iostream> 



int main(){ 


          system("clear") ; 

          int i{0}  ; 
          constexpr char start{'a'} ; 
          constexpr int end{123} ; 

          while( (start+i)< end  ){ 
              
               std::cout<<char(start+i)<<" "<< start+i  << std::endl ; 
               i++ ; 
          } 
         
} 

