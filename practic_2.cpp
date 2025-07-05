#include<iostream> 
#include<string> 
//converting miles to kilometer  

int main(){ 

       double input_miles {0}  ; 
       double kilometer {0} ; 

       while( std::cin >> input_miles)  
              kilometer = input_miles * 1.609   ;

       std::cout << kilometer << std::endl ; 
} 
