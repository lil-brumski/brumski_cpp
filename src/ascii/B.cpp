#include "brumski_cpp/ascii/__B.hpp"

void B(){
    int b = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(b)<<"......"<<std::left<<std::setw(b)<<"......"<<std::endl;
    
    //Beginning
    
    std::cout<<std::right<<std::setw(b)<<"*****"<<std::left<<std::setw(b)<<"**** "<<std::endl;
    
    std::cout<<std::right<<std::setw(b)<<"*****"<<std::left<<std::setw(b)<<"*****"<<std::endl;
    
    for(int x = 0; x < 2; x++){
     std::cout<<std::right<<std::setw(b)<<"***  "<<std::left<<std::setw(b)<<"  ***"<<std::endl;
    }
    
    std::cout<<std::right<<std::setw(b)<<"*****"<<std::left<<std::setw(b)<<"**** "<<std::endl;
    
    std::cout<<std::right<<std::setw(b)<<"*****"<<std::left<<std::setw(b)<<"*****"<<std::endl;
    
    for(int x = 0; x < 2; x++){
    std::cout<<std::right<<std::setw(b)<<"**** "<<std::left<<std::setw(b)<<"   ***"<<std::endl;
    }
    
    for(int x = 0; x < 2; x++){
    std::cout<<std::right<<std::setw(b)<<"*****"<<std::left<<std::setw(b)<<"*****"<<std::endl;
    }
    
   std::cout<<std::right<<std::setw(b)<<"......"<<std::left<<std::setw(b)<<"......"<<std::endl; 
    
}
