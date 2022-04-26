#include <iostream>
#include <concepts>

template <typename T>
concept TinyType = requires(T a){
    sizeof(T)<=4;
    requires sizeof(T)<=4;
};
template <typename T>
concept Addable =requires (T a, T b){
    {a+b}noexcept ->std::convertible_to<int>;//command require
    //if not valid a+b show exception
};
TinyType auto add(TinyType auto a, TinyType auto b){
    return a+b;
}
Addable auto adds(Addable auto a,Addable auto b){
    return a+b;
}
template <typename T>
requires std::integral<T>||std::floating_point<T>
T adds2(T a,T b){
    return a+b;
}
template<typename T>
requires std::integral<T> &&TinyType<T>
T adds3(T a,T b){
    return a+b;
}
//Syntax constrains the auto parameter you pass in to comply integral
std::integral auto adds4(std::integral auto a,std::integral auto  b){
    return a+b;
}

int main(){
    int x{67};
    int y{49};
    auto result = add(x,y);
    //double won't work
    std::cout<<"result: "<<(result) << std::endl;

    int x1{64};
    int y1{759};
     std::string sx1{"Hello"};
     std::string sy1{"C++"};
    auto result1 = adds(x1,y1);
    //
    std::cout<<"result1: "<<(result1) << std::endl;

    auto result2=adds2(x1,y1);
    std::cout<<"result2: "<<(result2) << std::endl;

    std::integral auto result3 =adds4(20,5);
    std::cout<<"result3: "<<(result3) << std::endl;
    return 0 ;
}

//20.00