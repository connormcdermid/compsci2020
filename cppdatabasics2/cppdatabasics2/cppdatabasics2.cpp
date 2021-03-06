// cppdatabasics2.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
Author: Connor McDermid
Lab: Data basics 2
Date: 2019.09.27
Extra: Input sanitisation
Known Bugs: On illegal input, failbit is often not properly cleared, causing the program to enter an infinite loop.
	I've taken a look through <ios> , ios_base, and xiosbase, and I can't figure out why.
*/

#include "pch.h"
#include <iostream>
#include <ios>
using namespace std;
int weightConverter() {
	weightretry:
	cout << "Please enter a number in pounds to be converted to ounces." << endl;
	int lbs;
	cin >> lbs;
	if (!cin.good()) {
		cin.clear(0x0, false);
		cout << "Failbit cleared." << endl;
		goto weightretry;
	}
	int oz = lbs * 16;
	cout << lbs << " pounds is equal to " << oz << " oz." << endl;
	return 0;
}

int heightConverter() {
	heightretry:
	cout << "Please enter your height in integer inches." << endl;
	int inchesonly;
	cin >> inchesonly;
	if (!cin.good()) {
		cin.clear(0, false);
		cout << "Failbit cleared." << endl;
		goto heightretry;
	}
	int ft = inchesonly / 12;
	inchesonly = inchesonly % 12;
	cout << "That is " << ft << " feet and " << inchesonly << " inches." << endl;
	return 0;
}

int ageadder() {
	again:
	cout << "Please enter your age." << endl;
	int age;
	cin >> age;
	
	cout << "In 15 years you will be " << (age + 15) << " years old." << endl;
	return 0;
}

int mpgcalc() {
	int miles;
	mpgretry:
	cout << "Please enter the miles you drove on your last trip" << endl;
	cin >> miles;
	if (!cin.good()) {
		cin.clear();
		cout << "You set the failbit. Good job." << endl;
		goto mpgretry;
	}
	cout << "Now please enter the gallons of gas your car consumed." << endl;
	int gas;
	cin >> gas;
	if (!cin.good()) {
		cin.clear();
		cout << "You set the failbit. Good job." << endl;
		goto mpgretry;
	}
	double mpg;
	mpg = miles / gas;
	cout << "Your miles per gallon is " << mpg << endl;
	return 0;
}

int ageconverter() {
	ageretry:
	cout << "Please input your age in years." << endl;
	int age;
	cin >> age;
	if (!cin.good()) {
		cin.clear();
		cout << "That's not right. Try again" << endl;
		goto ageretry;
	}
	cout << "Your age in days is " << (age * 365) << endl;
	return 0;
}

int inbox() {
	int spamMail = 55;
	cout << "SpamMail is " << spamMail << ". Double that is " << (spamMail * 2) << ", and that squared is " << (spamMail ^ 2) << "." << endl;
	return 0;
}

int knox() {
	knoxretry:
	int tlbs;
	cout << "Please input the number of troy pounds." << endl;
	cin >> tlbs;
	if (!cin.good()) {
		cin.clear();
		cout << "Something's gone wrong. Try again." << endl;
		goto knoxretry;
	}
	int toz = tlbs * 12;
	double grams = toz * 31.1034768; //Constant is the number of troy ounces in a pound.
	cout << "That weighs " << grams << " grams." << endl;
	return 0;
}

int main()
{
	cout << "Hello World!" << endl;
	weightConverter();
	heightConverter();
	ageadder();
	mpgcalc();
	ageconverter();
	inbox();
	knox();
	return 0;
}
