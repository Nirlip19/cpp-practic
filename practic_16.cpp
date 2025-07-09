#include<iostream> 


int main(){ 


         system("clear") ; 
         double num{} ,  max{} , min{} ; 

         while( std::cin >> num ){ 
               
               if(num > max){ 
                    max = num ; 
                    std::cout << "greatest so far" << std::endl ; 
               }else if ( num < min){ 

                   min = num  ;
                   std::cout << "smallest so far" << std::endl ; 
               } 
         } 

         
} 
