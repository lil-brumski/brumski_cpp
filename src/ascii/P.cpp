#include "brumski_cpp/ascii/__P.hpp"
	 
void P(){
    int p = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(p)<<"......"<<std::left<<std::setw(p)<<"......"<<std::endl;
    
    std::cout<<std::right<<std::setw(p)<<"******"<<std::left<<std::setw(p)<<"*****."<<std::endl;
    
    for(int x = 0; x < 3; x++){
    std::cout<<std::right<<std::setw(p)<<"**...."<<std::left<<std::setw(p)<<"....**"<<std::endl;
    }
    
 std::cout<<std::right<<std::setw(p)<<"******"<<std::left<<std::setw(p)<<"*****."<<std::endl;
    
    for(int x = 0; x < 5; x++){
    std::cout<<std::right<<std::setw(p)<<"**...."<<std::left<<std::setw(p)<<"......"<<std::endl;
    }
    
    std::cout<<std::right<<std::setw(p)<<"......"<<std::left<<std::setw(p)<<"......"<<std::endl;
}