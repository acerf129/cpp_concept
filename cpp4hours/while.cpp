#include <iostream>

double exponent(double baseNum,int powNum){
    double result=1 ;
    for (int i=0;i<powNum;i++){
        result = result*baseNum;
    }
    return result;
}

int main(){
    int index =6 ;
    do {
        std::cout<< index<<std::endl;
        index++;
    }while (index<=5);

    std::cout<< exponent(5.5,3)<<std::endl;

    return 0;
}