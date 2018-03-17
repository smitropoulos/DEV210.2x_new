//
//  Lab3-Donations.cpp
//  DEV210.2x
//
//  Created by Stefanos Mitropoulos on 17/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "Donation.hpp"


void donation::write(std::ostream &os){
	os.write((char*)&_amount, sizeof(double));
}

void donation::read(std::istream &is){
	is.read((char*)&_amount, sizeof(double));

	



}
