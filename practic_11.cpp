#include<iostream> 



int main(){ 


       system("clear") ; 
       std::cout << int('A') << std::endl ;
       constexpr char start{'A'} ;  
       constexpr char end{'z'} ; 

       for(int i = 0 ; i+start <= end ; i++) 
              if( start+i > 90 && start+i < 97){}   

              else
              std::cout << char(start+i) <<" "<< start+i << std::endl ;  

} 
