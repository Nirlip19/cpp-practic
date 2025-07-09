#include<iostream> 




void squeare(int x){ 
    
    std::cout << x << std::endl ; 
    int num = 0 ;

    for(int i = 1 ; i <= x ; i++)  
            num+=x ;  

    std::cout << num << std::endl ;

} 

int main(){ 
     
    system("clear") ; 
    squeare(4) ;          

} 
