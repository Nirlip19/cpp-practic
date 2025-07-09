#include<iostream> 
#include<vector> 


int main(){ 
      
       system("clear"); 

       double input{}, total{} , max{} , min{} ; 

       std::vector<double>distances ; 

       while(std::cin >> input) 
             distances.push_back(input) ; 

       if(distances.size() > 0)
           min = distances[0] ; 

       for(int i = 0 ; i < distances.size() ; i++){ 
             
              if(distances[i] > max) 
                  max = distances[i] ; 
              if(distances[i] < min) 
                  min = distances[i] ; 
              total+=distances[i] ;          

       } 
       std::cout <<"max val = " << max << std::endl 
                 <<"min val = " << min << std::endl 
                 <<"total = " << total << std::endl ; 

      
} 
