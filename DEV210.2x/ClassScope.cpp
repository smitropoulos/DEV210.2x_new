//
//  ClassScope.cpp
//  DEV210.2x
//
//  Created by Stefanos Mitropoulos on 14/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "ClassScope.hpp"
#include "Person.hpp"
#include "Dog.hpp"

int ClassScope(){


	Person *pr = new Person("John","Wick");
	std::cout<<"Person1's first name is "<<pr->GetName()<<std::endl;


	return 0;
}


