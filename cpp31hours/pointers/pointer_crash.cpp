#include <iostream>



int main(){
    // //Bad Example 

    // int *p_number1 ;
    // *p_number2 =55;//Writing into junk address
    // std::cout<<"P_number1 : "<<p_number1<<std::endl;
    // std::cout<<"P_number1 : "<<*p_number1<<std::endl;
    
    // //It will crash too
    // Bad Example 2 

    // int *p_number2{};
    // *p_number2 =331;
    // std::cout<<*p_number2<<std::endl;

    //Example 3

    // int * p_number3;//Danling uninitialized pointer
    // std::cout<<"Uninitialized Pointer: "<<std::endl;
    // std::cout<<"p_number3: "<<p_number3<<std::endl;
    // std::cout<<"*p_number3:"<<*p_number3<<std::endl;//CRASH!

    //Example 4 delete pointer
    // std::cout<<std::endl;
    // std::cout<<"Delete Pointer"<<std::endl;
    // int *p_number4{new int{69}};
    // std::cout<<"*p_number4"<<*p_number4<<std::endl;
    // delete p_number4;

    // std::cout<<"*p_number4 After Delete"<<*p_number4<<std::endl;

    //Example 5
    //Multiple pointer pointing to same address
    std::cout<<std::endl;
    std::cout<<"Multiple pointer pointing to same address"<<std::endl;
    int *p_number5{new int{53}};
    int *p_number6{p_number5};
    std::cout<<"p_number5 - "<<p_number5<<"-"<<*p_number5<<std::endl;
    std::cout<<"p_number6 - "<<p_number6<<"-"<<*p_number6<<std::endl;

    //Delete Pnumber5
    delete p_number5;

    std::cout<<"p_number6 after delete p_number5"<<p_number6<<"-"<<*p_number6<<std::endl;
    // solution
    if (p_number6!=nullptr)
        //printout
    else{
        //print Invalid Address
    }
    return 0;
}