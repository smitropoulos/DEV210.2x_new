//
//  Person.hpp
//  PointersLab
//
//  Created by Stefanos Mitropoulos on 13/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Person{

private:
    std::string _name,_lastName;
    short int _age;
    float _weight,_height;

public:

    Person();    //Default constructor
    Person (std::string name, std::string lastName);    //Two var constructor
    Person (std::string name, std::string lastName,short int age);    //Three var constructor


        //Destructor
    ~Person();

        //Getters
    const std::string GetLastName();
    const std::string GetName();
    const float getWeight();
    const float getHeight();

        //Setters
    void setFirstName(std::string fName);
    void setLastName(std::string lName);
    void  setWeight(float weight);
    void setHeight(float height);

        //===========

    void SayHello();

};


#endif /* Person_hpp */
