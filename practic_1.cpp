#include<iostream> 
#include<string> 

//the number of repeated worlds

int main(){ 


     system("clear") ; 
     std::string current ; 
     std::string prev  =" " ; 

     int repeated = 0 ; 

     while( std::cin >> current){ 
            
         if(prev == current) 
             repeated++ ; 
             
         prev = current; 
     } 
     std::cout << repeated << std::endl ; 

} 
