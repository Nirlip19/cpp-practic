#include<iostream> 


int main(){ 
     
     system("clear") ; 
     constexpr int max = 2000000000 ; 
     int rice{1} , least_f{0} , least_mil{0} , least_bil{0} ;  
     
     std::cout <<"start..."<< std::endl ;
     for(int sq{1} ; sq <= 64 && rice < max ; sq++){ 
         if( rice >= 1000)
             least_f = rice ; 
             rice *= 2 ; 
     } 

     for(int sq{1} ; sq <= 64 && rice < max ; sq++){ 
         if( rice >= 1000000) 
             least_mil = rice ; 
             rice *= 2 ; 
        }  

     for(int sq{1} ; sq <= 64 && rice < max ; sq++){ 
         if( rice >= 1000000000)  
             least_bil = rice ; 
             rice *= 2 ; 
     } 

     std::cout << least_bil << std::endl 
               << least_mil << std::endl 
               << least_f << std::endl ; 



} 
