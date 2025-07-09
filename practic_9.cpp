#include<iostream> 


int main(){ 


       system("clear") ; 
       float  num1 , num2 ; 
       char op ; 
       std::cout << "enter : " << std::endl ; 
       std::cin >> op >> num1 >> num2 ; 
       if(op == '+') 
           std::cout << num1 + num2 << std::endl ; 
       if(op == '-')
           std::cout << num1 - num2 << std::endl ; 
       if(op == '/') 
           std::cout << (double)num1 / num2 << std::endl ; 
       if(op == '*')
           std::cout << num1 * num2 << std::endl ; 


} 
