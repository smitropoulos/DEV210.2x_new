//
//  Person.cpp
//  PointersLab
//
//  Created by Stefanos Mitropoulos on 13/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "Person.hpp"

using namespace std;

class Person{
public:
	Person (std::string nm, std::string lnm){
		name=nm;
		lastName=lnm;
	}
	Person(){}

	std::string GetLastName(){
		return lastName;
	}
	~Person(){
		cout<<"Object is being deleted"<<endl;
	}
private:
	string name,lastName;
	int age;
	float weight,height;


};
