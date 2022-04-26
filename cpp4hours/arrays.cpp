#include<iostream>
#include<cmath>

int main(){

    int luckyNums[20] = {4,8,16,23};
    luckyNums[0]=100;
    int arrSize = sizeof(luckyNums)/sizeof(luckyNums[0]);
    std::cout << luckyNums[0]<<std::endl;
    std::cout <<"LuckNums Total Size "<<sizeof(luckyNums)<<" With Size"<< arrSize<<std::endl;
    return 0 ;
}