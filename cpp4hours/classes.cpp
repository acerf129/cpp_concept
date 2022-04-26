#include <iostream>
class Book {
    private: 
        string bookName;
    public :
        string title;
        string author;
        int pages;
        Book(){
            title="no title";
            author="no author";
            pages=0;
        }
        Book(string aTitle,string aAuthor ,int aPages){
            title=aTitle;
            author=aAuthor;
            pages=aPages;
            std::cout<<"Creating a object"<<std::endl;
        }
};

int main(){
    //book1.title="Harry Potter";
    // book1.author ="JK Rowling";
    // book1.pages=500;   
    // book2.title="Lord of the Rings";
    // book2.author ="Tolkein";
    //book2.pages=3000;

    string name="Mike";
    double po =3.141;
    char favoriteLetter='G';
    Book book1("Harry Potter","JK Rowling",500);
    Book book2("Lord of the Rings","Tolkein",3000);
    Book book3;

    std::cout <<"Book1 Title:"<< book1.title<<std::endl;
    std::cout <<"Book1 Author:"<< book1.author<<std::endl;
    std::cout <<"Book1 Pages:"<< book1.pages<<std::endl;

    std::cout <<"Book2 Title:"<< book2.title<<std::endl;
    std::cout <<"Book2 Author:"<< book2.author<<std::endl;
    std::cout <<"Book2 Pages:"<< book2.pages<<std::endl;
    
    std::cout<<"Book3 Title: "<<book3.title<<std::endl;

}
