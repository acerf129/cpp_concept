#include<iostream>
using namespace std;
//Tools
const int Pen {30};
const int Marker {20};
const int Eraser {10};
const int Octopus {80};

int main(){
    int tool {Octopus};
    switch (tool)
    {
    case Pen:{
        cout<<"Active tool is Pen"<<endl;
    }
        break;
    case Marker:{
        cout<<"Active tool is Marker"<<endl;
    }
        break;
    case Eraser:{
    cout<<"Active tool is Eraser"<<endl;
    }
    break;
    case Octopus:{
    cout<<"Active tool is Octopus"<<endl;
    }
    break;
    default:
        break;
    }
    for(size_t i{};i<10;++i)
        cout<<i*i<<endl;
    cout<<"size of (sizet)"<<sizeof(size_t)<<endl;//8
    return 0;
}