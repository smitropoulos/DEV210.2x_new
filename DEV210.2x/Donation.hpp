//
//  Donation.hpp
//  DEV210.2x
//
//  Created by Stefanos Mitropoulos on 17/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#ifndef Donation_hpp
#define Donation_hpp

#include <stdio.h>
#include <iostream>

class Donation{
public:
	int _amount;
	Donation();    //Default constructor
	Donation (int amount);

	void newDonation();
};

#endif /* Lab3_Donations_hpp */



