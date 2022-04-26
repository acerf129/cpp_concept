#include <iostream>
using namespace std;

int main(){
    //Auto declare type
    auto var1{12};
    auto var2{13.0};//double
    auto var3{14.0f};//float
    auto var4{15.0l};//long 
    auto var5{'e'};

    //int modifier suffixes
    auto var6{123u};  //unsigned int 
    auto var7{123ul}; //unsigned long
    auto var8{123ll}; // long long 

    // if var 6<0 compiler assign garbage value 
    //var6=-22

    auto var9{true};  //bool
    cout << "var1 occupies : " <<sizeof(var1)<<" bytes "<<endl;
    cout << "var2 occupies : " <<sizeof(var2)<<" bytes "<<endl;
    cout << "var3 occupies : " <<sizeof(var3)<<" bytes "<<endl;
    cout << "var4 occupies : " <<sizeof(var4)<<" bytes "<<endl;
    cout << "var5 occupies : " <<sizeof(var5)<<" bytes "<<endl;
    cout << "var6 occupies : " <<sizeof(var6)<<" bytes "<<endl;
    cout << "var7 occupies : " <<sizeof(var7)<<" bytes "<<endl;
    cout << "var8 occupies : " <<sizeof(var8)<<" bytes "<<endl;
    cout << "var9 occupies : " <<sizeof(var9)<<" bytes "<<endl; 

    //Assignment
    int var10{123};
    cout<< "var10 : "<< var10<<endl;
    var10 = 55;
    cout<< "var10 : "<< var10<<endl;
    float var11{45.11};
    cout<< "var11 : "<< var11<<endl;
    var11 = 77.49;
    cout<< "var11 : "<< var11<<endl;

    int a{6};
    int b{3};
    int c{8};
    int d{9};
    int e{3};
    int f{2};
    int g{5};
    int result = a+b*c-d/e-f+g;
    cout<< "Result : "<< result<<endl;
    int value =55 ;
    cout<< "value : "<< value++<<endl;//increment later
    cout<< "value : "<< value<<endl;
    cout<< "value : "<< ++value<<endl;//increment first
    cout<< "value : "<< value<<endl;
    // > >= == < <= !=
    //&& || !
    return 0;
    
}