
#include <iostream>
class Studnet{

    public :
        string name;
        string major;
        double gpa;
        Studnet(string aName,string aMajor,double aGpa){
            name=aName;
            major=aMajor;
            gpa=aGpa;
        }
        bool hasHonors(){
            if (gpa>=3.5){
                return true;
            }
            return false;
        }
};
class Movie{
    private:
        float rating ;
     public :
        string title;
        string diractor;
        
        Movie(string aTitle,string aDiretor,float aRating){
            title=aTitle;
            diractor=aDiretor;
            setRating(aRating);
        };
        void setRating(float aRating){
            if (aRating <=5 &&aRating>0.5){
                rating  = aRating;
            }
            else{
                rating=0.0;
            }            
        };
        float getRating(){
            return rating ;
        }
};
class Chef {
    public:
    void makeChicken(){
        std::cout<<"The chef makes chicken"<<std::endl;
    };
    void makeSalad(){
        std::cout<<"The chef makes salad"<<std::endl;
    };
    void makeSpecialDish(){
        std::cout<<"The chef makes bbq ribs"<<std::endl;
    };
};
class ItalianChef:public  Chef{
    public:
        void makePasta(){
            std::cout<<"The chef makes pasta"<<std::endl;
        }
        void makeSpecialDish(){
        std::cout<<"The chef makes chicken parm"<<std::endl;
        };
};

int main (){
    Studnet student1("Jen","IT",2.4);
    Studnet student2("James","Law",4.4);
    //std::cout<< student1.hasHonors()<<std::endl;
    Movie avenger("The Avengers","Joss Whedon",4.6);
    avenger.setRating(1);
    std::cout << avenger.getRating()<<std::endl;
    Chef chef;
    chef.makeSpecialDish();
    ItalianChef italianchef;
    italianchef.makeSpecialDish();
    italianchef.makePasta();
    return 0;
}