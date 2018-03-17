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

class donation{
public:
	double _amount{0};

	donation(double amount):_amount(0){
		_amount=amount;
	};

	~donation();


	//Methods
	void write(std::ostream & os);
	void read(std::istream & is);

};


#endif /* Lab3_Donations_hpp */
