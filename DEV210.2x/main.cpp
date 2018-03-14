
#include <iostream>
#include "Person.hpp"


int main(int argc, const char * argv[]) {


/*
    Person *pOne = new Person("Gerry", "O\'Brien");
    std::cout <<sizeof(short int)<<pOne->GetLastName() << endl;

    delete pOne;
*/
    // create a Person instance using default constructor
    Person *pOne = new Person();


    // Create a Person instance using 2 argument constructor
    Person *pTwo = new Person("Tom", "Thumb");

     // Create a Person instance using 3 argument constructor
     Person *pThree = new Person("Tom", "Thumb", 15);

     Person p;

     Person &pRef = p;

     p.SayHello();

     // pointer method of calling a member function
     pOne->SayHello();

     // reference method of calling a member function
    pRef.SayHello();

    return 0;
}

