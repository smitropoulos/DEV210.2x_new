	//
	//  Lab3 - Donations.cpp
	//  DEV210.2x
	//
	//  Created by Stefanos Mitropoulos on 17/03/2018.
	//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
	//

#include "Lab3 - Donations.hpp"
#include <fstream>
#include <iostream>
#include "Donation.hpp"
#include <math.h>


//In order to avoid going through the whole file, I write the latest donation's digit count in the top of the file.
//Then read that and move the cursor to the end with an offset.
//For this to initiate properly, there must be a file named donation_total.txt {0\n}

void lab3(){
	std::string lastDonation;
	std::string runningTotal="";
	std::fstream file("donation_total.txt", std::ios_base::in |std::ios_base::out|std::ios_base::ate);	//Explicitely state what the file will be used for.

		//Check if the file is open.
	if (file.is_open()){
		file.seekg(0,std::ios_base::beg);

		file>>lastDonation;
		int lastDonationInt=std::stoi(lastDonation);

		file.seekg(-lastDonationInt-1, std::ios_base::end);
		file>>runningTotal;			//Extract the next word


		int runningTotalInt = std::stoi(runningTotal); //"cast" the number read from the file to int.

		Donation don;
		don.newDonation();
		runningTotalInt+=don._amount;	//create the new running total

		file.seekg(0,std::ios_base::beg);
		lastDonationInt = (std::to_string(runningTotalInt)).length(); //conver to string and use .length() instead of c-like solutions - less hassle / slower
		file<<lastDonationInt<<std::endl;


		file.seekg(0,std::ios_base::end);	//move write cursor to the end of the file.
		file<<runningTotalInt<<std::endl;
		file.close();

	}
	else{	//check for open errors.
		std::cerr<<"The file failed to open. Please check that no other programme is using it. "<<std::endl;

	}

	std::cout<<runningTotal<<std::endl; //debug only
}


