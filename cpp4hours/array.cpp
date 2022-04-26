#include <iostream>
int main(){
    int numberGrid[3][2]={
        {1,2},
        {3,7},
        {8,4}
    };
    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){
        std::cout<< numberGrid[i][j] <<std::endl;
        }
    }  
    return 0;
} 
