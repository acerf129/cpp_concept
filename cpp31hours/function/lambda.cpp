#include <iostream>
int main(){
        
    //Lambda function
    auto func=[](){
        std::cout <<"Lambda funciton Created."<<std::endl;
    };
    //with return type
    auto func2=[](double a,double b)-> double{
        std::cout <<"Lambda funciton 2 a+b:"<<(a+b) <<std::endl;
        return a+b;
    };
    func();
    func2(1.65,889.14);

    double a {15.23};
    double b {75.16};
    auto func3=[&a,b](){
        //inner address of value 
        //add ref will be same ref
        std::cout<<"&a: "<<&a<<std::endl;
    };
    for(size_t i{};i<1;++i){
        std::cout<<"&a: "<<&a<<std::endl;
        func3();
    }
    //Capture everything by value
    auto func4=[=](){
        //inner address of value 
        //add ref will be same ref
        std::cout<<"a+b: "<<a+b<<std::endl;
    };
    func4();
    //Capture everything by reference
    auto func5=[&](){
        //inner address of value 
        //add ref will be same ref
        std::cout<<"&a : "<<&a<<std::endl;
    };
    func5();


    return 0;
}
