#include<iostream>
#include "compare.h"
//Variable : Declaration and definition
//Source Processing-> Translation Unit Compilation-> Object->linking to file


int main(){

    int maxResult =max(20,15);
    std::cout<<"maxResult: "<<maxResult <<std::endl;
    int minResult =min(20,15);
    std::cout<<"minResult: "<<minResult <<std::endl;
    int age{24};

    //Pass By value Pointer Reference
    //1
    sayAge(age);
    //It will still 24 local
    std::cout<<"Hello you are "<<age<<"Years old. Address "<<&age  <<std::endl;

    //2 
    sayAge(&age);
    //It will change value with pointer address too
    std::cout<<"Hello you are "<<age<<"Years old. Address "<<&age  <<std::endl;
    

    // 3
    int& age2 {age};
    sayAge(age2);
    //Cleaner and useful
    std::cout<<"Hello you are "<<age<<"Years old. Address "<<&age  <<std::endl;
    
    std::string output;
    std::string string1{"Alivaav"};
    std::string string2{"Belevve"};
    max_str(string1,string2,output);
    std::cout<<"max_str:  "<<output<<std::endl;

    int out_int{};
    int  int1{33};
    int  int2{77};
    max_int(int1,int2,out_int);
    std::cout<<"out_int:  "<<out_int<<std::endl;

    out_int=sum(int1,int2);
    std::cout<<"out_int:  "<<out_int<<std::endl;
    
    //Reuse the value and address but just copy value 
    output =add_string(string1,string2);
    std::cout<<"&output:  "<<&output<<std::endl;
    std::cout<<"output:  "<<output<<std::endl;

    return 0;
} 

//Definition can be store other file
