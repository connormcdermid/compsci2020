// PiggyBank.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Author: Connor McDermid
//Date: 2019.10.04
//Lab: Piggy Bank Object-oriented
//Extra: enums properly declared in a separate file

#include "pch.h"
#include <iostream>
#include <string>
#include <chrono> //for sleeping
#include <thread> //also for sleeping
#include "PiggyBank.h"

using namespace std;
void title() {
	cout << "-----------------------------------------" << endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(1000)); //sleeps thread for 1000 milliseconds
	cout << "|         hackSugar Piggy Bank          |" << endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	cout << "|               v3.01                   |" << endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	cout << "|              booting...               |" << endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	cout << "-----------------------------------------" << endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	system("cls");
}

string getName() {
	cout << "Hello! What's your name?" << endl;
	string name;
	getline(cin, name); //shouldn't need typechecking; everything can be interpreted as a string
	return name;
	
}

int main() {
	PiggyBank bank = PiggyBank();
	while (1) {
		if (!(bank.execCommand() == 0)) {
			break;
		} else {
			continue;
		}
	}
	return 0;
}


