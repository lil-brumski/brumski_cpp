#include "brumski_cpp/ascii/__Q.hpp"
	 
void Q(){
    int q = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(q)<<"......"<<std::left<<std::setw(q)<<"......"<<std::endl;
    
    std::cout<<std::right<<std::setw(q)<<"....****"<<std::left<<std::setw(q)<<"****...."<<std::endl;
    
    for(int x = 0; x < 6; x++){
    std::cout<<std::right<<std::setw(q)<<"..**...."<<std::left<<std::setw(q)<<"....**.."<<std::endl;
    }
    
    std::cout<<std::right<<std::setw(q)<<"**...."<<std::left<<std::setw(q)<<"**..**"<<std::endl;
    
     std::cout<<std::right<<std::setw(q)<<"....****"<<std::left<<std::setw(q)<<"****...."<<std::endl;
          
     std::cout<<std::right<<std::setw(q)<<"........"<<std::left<<std::setw(q)<<"..**...."<<std::endl;
     
      std::cout<<std::right<<std::setw(q)<<"......"<<std::left<<std::setw(q)<<"......"<<std::endl;
}

    