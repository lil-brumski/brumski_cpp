#include "brumski_cpp/ascii/__U.hpp"
	 
void U(){
    int u = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(u)<<"......"<<std::left<<std::setw(u)<<"......"<<std::endl;
    
    std::cout<<std::right<<std::setw(u)<<"..**...."<<std::left<<std::setw(u)<<"....**.."<<std::endl;
    
    for(int x = 0; x < 8; x++){
    std::cout<<std::right<<std::setw(u)<<"..**...."<<std::left<<std::setw(u)<<"....**.."<<std::endl;
    }
    
     std::cout<<std::right<<std::setw(u)<<"....****"<<std::left<<std::setw(u)<<"****...."<<std::endl;
     
      std::cout<<std::right<<std::setw(u)<<"......"<<std::left<<std::setw(u)<<"......"<<std::endl;
}

    