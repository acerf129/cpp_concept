#include <iostream>

int main(){
    // int * data = new int[10000000000000000];

    // std::cout<<"Program Ending "<<std::endl;

    for (size_t i{0};i<100;i++){
            int* data=new(std::nothrow) int[100000];
            if(data!=nullptr){
                std::cout<<"Data Allocated: "<<std::endl;
            }else{
            std::cout<<"Something Went Wrong: "<<std::endl;
            }     
    }
    std::cout<<"Program end well."<<std::endl;
    std::cout<<"Verbose nullptr Check: "<<std::endl;
    int *p_number{};
    //Without this line will be Invalid
    p_number=new int {784};
    //
    if (!(p_number==nullptr)){
        std::cout<<"p_number to a valid number"<<p_number<<std::endl;        
    }else{
        std::cout<<"p_number points to an Invalid address"<<std::endl;
    }
    //delete 
    delete p_number;
    p_number = nullptr;
    return 0;

}