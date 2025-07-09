#include<iostream> 



int main(){ 

        system("clear") ; 
        int num;  
        std::cout << "enter the number: " ;  
        std::cin >> num ; 
        if(num ==1)std::cout << "one\n" << std::endl ; 
        else { 

              if(num == 2) 
                  std::cout << "two\n" << std::endl ; 
               else{ 

                  if(num == 3)
                      std::cout << "three\n" << std::endl ; 
                  else{ 

                      if(num == 4)
                          std::cout << "foure\n" << std::endl  ; 
                      else
                          std::cout <<"stupit computer doesn't know the answer\n" ;
                  } 
               } 
        } 
} 
