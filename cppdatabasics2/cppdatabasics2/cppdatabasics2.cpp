// cppdatabasics2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
using namespace std;


int weightConverter() {
	cout << "Please enter a number in pounds to be converted to ounces.\n";
	int lbs;
	cin >> lbs;
	int oz = lbs * 16;
	cout << lbs << " pounds is equal to" << oz << "\n";
	return 0;
}

int heightConverter() {
	cout << "Please enter your height in integer inches.\n";
	int inchesonly;
	cin >> inchesonly;
	int ft = inchesonly / 12;
	inchesonly = inchesonly % 12;
	cout << "That is " << ft << " and " << inchesonly << " inches.\n";
	return 0;
}

int ageadder() {
	cout << "Please enter your age.\n";
	int age;
	cin >> age;
	cout << "In 15 years you will be " << (age + 15) << " years old.";
	return 0;
}

int mpgcalc() {
	mpgcalcretry:
	cout << "Please enter the number of miles you drove on your last trip.\n";
	int miles;
	cin >> miles;
	if (typeid(miles).name() != "int") {
		cout << "That's not a number. Try again.\n";
		goto mpgcalcretry;
	}
	cout << "Now please enter the gallons of gas your car consumed.\n";
	int gas;
	cin >> gas;
	if (typeid(gas).name() != "int") {
		goto mpgcalcretry;
	}
	double mpg;
	mpg = miles / gas;
	cout << "Your miles per gallon is " << mpg << endl;
	return 0;
}

int ageconverter() {
	cout << "Please input your age in years.\n";
	int age;
	cin >> age;
	cout << "Your age in days is " << (age * 365) << endl;
	return 0;
}

int inbox() {
	int spamMail = 55;
	cout << "SpamMail is " << spamMail << ". Double that is " << (spamMail * 2) << ", and that squared is " << (spamMail ^ 2) << ".\n";
	return 0;
}

int knox() {
	int tlbs;
	cout << "Please input the number of troy pounds." << endl;
	cin >> tlbs;
	int toz = tlbs * 12;
	double grams = toz * 31.1034768; //Constant is the number of troy ounces in a pound.
	cout << "That weighs " << grams << " grams." << endl;
	return 0;
}

int main()
{
    cout << "Hello World!\n"; 
	weightConverter();
	heightConverter();
	ageadder();
	mpgcalc();
	ageconverter();
	inbox();
	knox();
	return 0;
}
