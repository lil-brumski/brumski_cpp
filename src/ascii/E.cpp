#include "brumski_cpp/ascii/E.hpp"
	 
void E(){
    int e = 30;
    std::cout<<std::setfill('.');
    
    std::cout<<std::right<<std::setw(e)<<"......"<<std::left<<std::setw(e)<<"......"<<std::endl;
    
    for(int x = 0; x < 2; x++){
         std::cout<<std::right<<std::setw(e)<<"********"<<std::left<<std::setw(e)<<"********"<<std::endl;
    }
    
    for(int x = 0; x < 2; x++){
        std::cout<<std::right<<std::setw(e)<<"***....."<<std::left<<std::setw(e)<<"........"<<std::endl;
    }
    
   for(int x = 0; x < 2; x++){
         std::cout<<std::right<<std::setw(e)<<"********"<<std::left<<std::setw(e)<<"********"<<std::endl;
    }
    
    for(int x = 0; x < 2; x++){
        std::cout<<std::right<<std::setw(e)<<"***....."<<std::left<<std::setw(e)<<"........"<<std::endl;
    }
      
    for(int x = 0; x < 2; x++){
         std::cout<<std::right<<std::setw(e)<<"********"<<std::left<<std::setw(e)<<"********"<<std::endl;
    }
    
    std::cout<<std::right<<std::setw(e)<<"......"<<std::left<<std::setw(e)<<"......"<<std::endl;
    
}
