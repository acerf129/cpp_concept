#include <iostream>

int main(){
    const size_t size{10};

    //Ways to declare array dynamically

    double *p_salaries{new double[size]};//with garbage value
    int *p_student{new(std::nothrow) int [size] {} };//with value 0 
    double *p_scores{new(std::nothrow) double [size] {1,2,3,4,5} } ;//the rest val will be 0

    std::cout<<"p_scores: "<<p_scores<<std::endl;
    if (p_scores){
         std::cout<<"Size Of p_scores: "<<sizeof(p_scores)<<std::endl;
        for (size_t i{};i<size;++i){
            std::cout<<"p_scores Value: "<<p_scores[i]<<" : "<<*(p_scores+i)<<std::endl;
        }
    }
    delete [] p_salaries;
    p_salaries=nullptr;
    delete [] p_student;
    p_student=nullptr;
    delete [] p_scores;
    p_scores=nullptr;

    //Static Array vs Dynamic Array
    int scores[10]{1,2,3,4,5,6,7,8,9,0};//On Stack
    std::cout<<"Static Array Size: "<<std::size(scores)<<std::endl;
    for(auto i :scores){
        std::cout<<"Static Array Value: "<<i<<std::endl;
    }

    //On Heap 
    int *p_scores1 {new int [10]{1,2,3,4,5,6,7,8,9,0}};//Live on a heap
    //It's a pointer not a array

    //It will fail
    //std::cout<<"Dynamic Array Size: "<<std::size(p_scores1)<<std::endl;
    
    //It will fail too
    // for(auto i :p_scores1){
    //     std::cout<<"Dynamic Array Value: "<<i<<std::endl;
    // }
    if (p_scores1){
        for (size_t i {};i<10;++i){
            std::cout<<"Dynamic Array Value: "<<p_scores1[i]<<"-"<<*(p_scores1+i)<<std::endl;
        }
    }
    return 0 ;
}