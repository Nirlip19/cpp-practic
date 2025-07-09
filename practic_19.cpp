#include<iostream> 
#include<vector> 


int main(){ 
   
        system("clear") ; 
        
        std::vector<std::string>nums ={"zero","one" , "two","three" , "four" ,"five", 
                                          "six" , "seven" , "eight" , "nine"}  ; 
        int num{} ; 
        while( std::cin >> num){  

             switch(num){ 
                 
                 case 0: 
                     std::cout << nums[0] ; 
                     break ; 
                 case 1: 
                     std::cout << nums[1] ; 
                     break ; 
                 case 2: 
                     std::cout << nums[2]  ;
                     break ; 
                 case 3: 
                     std::cout << nums[3] ; 
                     break ; 
                 case 4: 
                     std::cout << nums[4] ; 
                     break ; 
                 case 5: 
                     std::cout << nums[5] ; 
                     break ;  
                 case 6: 
                     std::cout << nums[6] ; 
                     break ; 
                 case 7: 
                     std::cout << nums[7] ; 
                     break ; 
                 case 8: 
                     std::cout << nums[8] ; 
                     break ; 
                 case 9: 
                     std::cout << nums[9] ; 
                     break ; 
                 default: 
                     std::cout <<"out of range" ; 
             } 
             std::cout << std::endl ; 
        }


        

} 
