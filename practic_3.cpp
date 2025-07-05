#include<iostream> 



int main(){ 
       
       system("clear") ; 
       int num1 , num2 ; 
       std::cin >> num1 >> num2 ; 
      
       //compare  
       if( num1 > num2){ 
           std::cout << "num1 is greater than num2" << std::endl ; 
           std::cout << "the diffrence is : " << num1 - num2 << std::endl ; 
       }
       if( num1 < num2) { 
           std::cout << "num2 is greater than num1" << std::endl ; 
           std::cout <<" the diffrence is : "<< num2 - num1 << std::endl ; 
       }
       if( num1 == num2){  
           std::cout << "numbers are equale" << std::endl ; 
           std::cout << "the diffrence is : 0" << std::endl ; 
      }

       //sum 
       std::cout <<"sum is : " << num1 + num2 << std::endl ; 
       
       //product 
       std::cout << "the product resault is : " << num1 * num2 << std::endl  ;
       //ratio 
       std::cout << "the ratio of " << num1 << " on "  << num2 << " is "<< (double)num1 / num2 << std::endl ; 
       std::cout << "the ratio of " << num2 << " on "  << num1 << " is "<<(double) num2 / num1 << std::endl ; 
} 
