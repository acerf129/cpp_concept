#include <iostream>
using namespace std;

int main(){
    //Complie time error
    cout <<"Hello World" <<endl;
    
    //Run time error
    int value =7/0;
    cout << "value : "<<value<<endl;
    return 0;
}