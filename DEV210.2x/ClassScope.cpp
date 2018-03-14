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


	Person *p = new Person("John","Wick");
	std::cout<<"Person1's first name is "<< p->GetName() <<std::endl;
	p->SayHello();


	Dog *d = new Dog("Fred");
	std::cout<<"Dog's first name is "<< d->GetName() <<std::endl;
	d->SayHello();


	return 0;
}


