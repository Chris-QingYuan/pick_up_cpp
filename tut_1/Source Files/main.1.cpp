#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
 
int main(int argc, char const *argv[])
{
    std::cout << "hello world" << std::endl;
	
	if (argc > 1){
	    std::cout<<std::endl<<"Args:"<<std::endl;
	    for(int i = 1; i < argc; i++){
	        std::cout<< i << ":" << argv[i] << std::endl;
	    }
	}

    return 0;
}
