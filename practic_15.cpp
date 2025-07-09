#include<iostream> 


int main(){ 


     system("clear") ; 
     double num1, num2  ;


     while(std::cin >> num1 >> num2){ 
           
           if( num1 > num2){  
               if( num1 - num2 < (1.0 / 100 )) 
                       std::cout << "equal" << std::endl ;  
               else
                   std::cout << num1 <<" is greater than "<<num2 << std::endl ; 

           } 
           if(num2 > num1){ 
             
             if( num2 - num1 < (1.0 / 100) )
                 std::cout << "equal" <<std::endl ; 
             else 

                 std::cout << num2 <<" is greater than "<< num1 << std::endl ;
             } 
           if( num2 == num1) 
               std::cout << "equal" <<std::endl ; 

           
     } 

} 
