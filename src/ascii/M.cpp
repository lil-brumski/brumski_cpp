#include "brumski_cpp/ascii/M.hpp"
	 
void M(){
    int m = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(m)<<"........"<<std::left<<std::setw(m)<<"........"<<std::endl;
    
    std::cout<<std::right<<std::setw(m)<<"***....."<<std::left<<std::setw(m)<<".....***"<<std::endl;
    
     std::cout<<std::right<<std::setw(m)<<"**..**.."<<std::left<<std::setw(m)<<"..**..**"<<std::endl;
    
    std::cout<<std::right<<std::setw(m)<<"**...**."<<std::left<<std::setw(m)<<".**...**"<<std::endl;
    
    std::cout<<std::right<<std::setw(m)<<"**....**"<<std::left<<std::setw(m)<<"**....**"<<std::endl;
    
    std::cout<<std::right<<std::setw(m)<<"**.....*"<<std::left<<std::setw(m)<<"*.....**"<<std::endl;
    
    for(int x = 0; x < 5; x++){
          std::cout<<std::right<<std::setw(m)<<"***....."<<std::left<<std::setw(m)<<".....***"<<std::endl;
    }
    
    std::cout<<std::right<<std::setw(m)<<"........"<<std::left<<std::setw(m)<<"........"<<std::endl;
    
}
