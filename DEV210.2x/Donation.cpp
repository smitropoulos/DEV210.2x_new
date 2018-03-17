//
//  Donation.cpp
//  DEV210.2x
//
//  Created by Stefanos Mitropoulos on 17/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "Donation.hpp"


Donation::Donation(){

}


Donation::Donation(int amount){
	_amount=amount;
}

void Donation::newDonation(){

	std::cout<<"Please state the name and donation amount"<<std::endl;
	std::string name;
	std::cin>>name>>_amount;		//Read the name and the amount of money someone donated.
}


