#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double weight{7.9};
    //floor 
    cout << "Weight rounded to weight is "<<floor(weight)<<endl;
    //ceil
    cout << "Ceil rounded to weight is "<<ceil(weight)<<endl;
    //round
    cout << "Rounded rounded to weight is "<<round(weight)<<endl;
    //abs
    double savings{-300};
    cout << "ABS rounded to floor is "<<abs(savings)<<endl;
    //exponential
    double exponential = exp(10);
    cout << "The exponential of 10 is :" <<exponential<<endl;
    //pow
    cout <<"3^8 :" << pow(3,8)<<endl;
    //log with e ^x =256
    cout << "Log 256 :"<< log(256)<<endl;
    cout << "Log10 10000 :"<< log10(10000)<<endl;
    //sqrt with 81
    cout << "Log 81 :"<< sqrt(81)<<endl;

    
    //type under 4 can't calculate
    short int var1 {10};
    short int var2 {20};
    char var3{65};
    char var4{66};
    cout <<"Size of Var1: "<<sizeof(var1)<<endl;
    cout <<"Size of Var2: "<<sizeof(var2)<<endl;
    cout <<"Size of Var3: "<<sizeof(var3)<<endl;
    cout <<"Size of Var4: "<<sizeof(var4)<<endl;

    auto result1=var1+var2;//int
    auto result2=var3+var4;//
    cout<<"size of result 1 :"<<sizeof(result1)<<endl;
    cout<<"size of result 2 :"<<sizeof(result2)<<endl;
    return 0;
}