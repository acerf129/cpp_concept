#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //flush to flush the stream data.
    cout << "Hi 2022 April";
    cout<< "This is a nice message...." <<endl<<flush;
    int col_width{14};
    //Right by default
    cout<<right;
    //cout<<setfill('-');
    //showbase show the origin hex or oct 
    //boolalpha true 1 else 0 
    // internal left right with width()
    cout<< setw(col_width)<<"LastName"<<setw(col_width)<<"FirstName"<<endl;    
    cout<< setw(col_width)<<"Peter"<<setw(col_width)<<"Parker1"<<endl;
    cout<< setw(col_width)<<"Peter"<<setw(col_width)<<"Parker2"<<endl;
    cout<< setw(col_width)<<"Peter"<<setw(col_width)<<"Parker3"<<endl;
    cout<< setw(col_width)<<"Mary"<<setw(col_width)<<"Jane"<<endl;
    cout<< setw(col_width)<<"Dr."<<setw(col_width)<<"Octopus"<<endl;
    cout<< setw(col_width)<<"Green"<<setw(col_width)<<"Goblin"<<endl;
    cout<< setw(col_width)<<"Max"<<setw(col_width)<<"Electro"<<endl;
    cout<<endl;
    int pos_int{7174678};
    int neg_int{-45781};
    double double_var{498.37};
    cout<< endl;
    cout<<"Dec Pos: "<<dec<<pos_int<< endl;
    cout<<"Dec Neg: "<<dec<<neg_int<< endl;
    cout<<"Dec Dou: "<<dec<<double_var<< endl;
    cout<< endl;
    cout<<"Oct Pos: "<<oct<<pos_int<< endl;
    cout<<"Oct Neg: "<<oct<<neg_int<< endl;
    cout<<"Oct Dou: "<<oct<<double_var<< endl;
    cout<< endl;
    cout<<"Hex Pos: "<<hex<<pos_int<< endl;
    cout<<"Hex Neg: "<<hex<<neg_int<< endl;
    cout<<"Hex Dou: "<<hex<<double_var<< endl;

    // fixed(show every num (.000))
    //scientific (E + or - )
    //setprecision(num)(.000)
    //showpoint
    //noshowpoint
    //showpos
    //noshowpos
    return 0 ;
    63232
}