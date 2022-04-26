#include<iostream>
using namespace std;
int main(){


    int scoures[10];
    
    cout<<"Scores[0]"<<scoures[0]<<endl;
    cout<<"Scores[1]"<<scoures[1]<<endl;

    for (size_t i{};i<10;++i){
        cout<<"Scores["<<i<<"]:" <<scoures[i]<<endl;
    }
    int class_size[7] {6,5,7,8,9};
    for (int value:class_size)
        cout<<"Value: "<<value<<endl;

    //Not a c string 
    char messages1[] {'H','E','L','L','o'};
    for (auto c : messages1){
        cout<<  c <<endl;
    }
    
    //If a  char is null terminated it's called as c-string
    char messages2 [] {'H','E','L','L','o','\0'};
    cout << "Messages2: "<<messages2<<endl;
    cout << "Messages2: size"<<sizeof(messages2)<<endl;

    char messages3 [6] {'H','E','L','L','o'};
    cout << "Messages3: "<<messages3<<endl;
    cout << "Messages3: size"<<sizeof(messages3)<<endl;

    int numbers []{1,2,3,4,5,6,7,8,9,0};
    cout << "numbers: "<<numbers<<endl;
    //Read Beyond Bound
    cout << "Numbers[13]: "<< numbers[13]<<endl;
    //Write Beyond Bound Allow but not owned
    //the index 13
    //it may corrupt data
    //if the index is way beyond numbers[13000000]
    // it will crash
    numbers[13] =77;
    cout << "Numbers[13]: "<< numbers[13]<<endl;
    return 0;
}