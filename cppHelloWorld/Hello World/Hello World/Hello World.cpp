﻿// Hello World.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


/*
Name: Connor McDemid
Lab: C++ Data Basics 1
Date of Submission: 2019.09.23
Extra: typechecking with typeid().name()
*/
#include "pch.h"
#include <iostream>
using namespace std;


int temperature() { //for the first temperature assignment
	fail:
	cout << "Please input a temperature in Celsius. It will be converted to Fahrenheit.\n";
	int celsius;
	cin >> celsius;
	if (typeid(celsius).name() != "int") {
		cout << "That isn't even a number. Seriously. Try again.";
		goto fail;
	} else {
		cout << ((celsius * 1.8) + 32) << " degrees Fahrenheit\n";
	}
	return 0;
}




int pizza() { //For the second pizza assignment
	retry:
	cout << "Please input the number of slices of pizza you ate. I will tell you how far you have to run to burn those calories off.\n";
	int slices;
	cin >> slices;
	if (typeid(slices).name() != "int") {
		cout << "That's not a number. Try again.";
		goto retry;
	}
	int cals = slices * 375;

	int miles = cals / 100;

	cout << "You need to run " << miles << " miles\n";
	return 0;
}

int main()
{
    cout << "Hello World!\n";
	temperature(); //Calls Temperature function
	pizza(); //Calls Pizza function
	return 0;
}
