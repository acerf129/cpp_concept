#include <iostream>
#include<cmath>
int main(){
    double num1,num2;
    string op;
    double result;
    std::cout<<"Enter Num1: "<<std::endl;
    std::cin >> num1;
    std::cout<<"Enter Num2: "<<std::endl;
    std::cin >> num2;
    std::cout<<"Enter Operator: "<<std::endl;
    std::cin >> op;
    if (op=="+"){
        result=num1+num2;
    }
    else if (op=="-"){
        result=num1-num2;
    }
    else if (op=="*"){
        result=num1*num2;
    }
    else if (op=="/"){
        result=num1/num2;
    }
    else if (op=="**"){
        result=pow(num1,num2);
    }
    else{
        result="Invalid Operator";
    }
    std::cout<< "Result=" <<result <<std::endl;
}