#include <iostream>
#include <type_traits>
#include <concepts>
//#include "compare.h"

template<typename T>
requires std::integral<T>
T add( T a,T b ){
    return a+b;
}
//syntax2
// template<std::integral T>
// T add(T a,T b){
//     return a+b;
// }
//syntax3
// auto add(std::integral auto a ,std::integral auto b){
//     return a+b;
// }

// template<typename T>
// T add(T a,T b)requires std::integral<T>{
//     return a+b;
// }

template <typename T>
concept MyIntegral = std::is_integral_v<T>;

template <typename T>
concept Multipliable = requires(T a,T b){
    return a*b;
};

template <typename T>
requires MyIntegral<T>
T adds(T a,T b){
    return a+b;
}

template <typename T>
requires Multipliable<T>
adds2(T a, T b){
    return a+b;
}
template<typename T>
concept Incrementable =requires(T a ){
    a+=1;
    ++a;
    a++;
} 
//syntax 2
// MyIntegral auto T adds(MyIntegral auto a, auto b){
//     return a+b;
// }

int main(){
    char a{10};
    char b{20};

    auto result = add(a,b);
    std::cout<<"result: "<<static_cast<int>(result) << std::endl;
    
    double c{30};
    double d{20};
    //Double is not integral type
    // auto result2 = add(c,d);
    // std::cout<<"result2: "<<static_cast<int>(result2) << std::endl;
    
    int ia{8};
    int ib{24};
    auto result2= adds(ia,ib);
    std::cout<<"result2: "<<static_cast<int>(result2) << std::endl;

    return 0;
}