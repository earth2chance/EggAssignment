//Chance Daily
//Problem 2.2 4-5-2017

#include <iostream>


int main(){

	int eggs, dozens, leftovers, dozensprice;
	double leftoversprice, total;

	std::cout << "How many eggs would you like? ";
	std::cin >> eggs;
	
	dozens = eggs / 12;
	leftovers = eggs % 12;
	dozensprice = dozens * 2;
	leftoversprice = leftovers * 0.25;
	total = dozensprice + leftoversprice;

	std::cout << "You have " << dozens << " dozen eggs" << std::endl;
	std::cout << "You have " << leftovers << " eggs leftover" << std::endl;
	std::cout << "Each dozen costs $2.00 and each individual leftover egg costs $0.25" << std::endl;
	std::cout << "Your total for the dozens is $" << dozensprice << std::endl;
	std::cout << "Your total for the individual eggs is $" << leftoversprice << std::endl;
	std::cout << "Your total for everything is $" << total << std::endl;

}