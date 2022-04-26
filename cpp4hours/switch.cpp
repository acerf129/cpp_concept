#include <iostream>
string getDatOfWeek(int dayNum){
    string dayName;
    switch(dayNum){
        case 0:
        dayName="Sunday";
        break;
        case 1:
        dayName="Monday";
        break;
        case 2:
        dayName="Tuesday";
        break;
        case 3:
        dayName="Wendsday";
        break;
        case 4:
        dayName="Thrusday";
        break;
        case 5:
        dayName="Friday";
        break;
        case 6:
        dayName="Saturday";
        break;
        default:
        dayName="Invalid Day Number";
        break;
    }
    return dayName;
}

int main(){
 std::cout<<getDatOfWeek(2)<<std::endl;
 return  0;
}