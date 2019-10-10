// PiggyBankProcedural.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Author: Connor McDermid
//Date: 2019.10.04
//Lab: Piggy Bank Procedural
//Extra: Enums


//Note: I have added preprocessor definitions to make this work.
//The preprocessor definition is _CRT_SECURE_NO_WARNINGS.

#include "pch.h"
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

unsigned int pennies;
unsigned int nickels;
unsigned int dimes;
unsigned int quarters;
string name;
double balance;

void title() { //Prints bootanimation
	cout << "-----------------------------------------" << endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(2000)); //sleeps thread for 1000 milliseconds
	cout << "|         hackSugar Piggy Bank          |" << endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(2000));
	cout << "|               v3.01                   |" << endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(2000));
	cout << "|              booting...               |" << endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(2000));
	cout << "-----------------------------------------" << endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(3000));
	system("cls");
}

string getName() {
	cout << "Hello! What's your name?" << endl;
	string name;
	getline(cin, name); //shouldn't need typechecking; everything can be interpreted as a string
	return name;
}

unsigned int getPennies() {
	return pennies;
}

unsigned int getNickels() {
	return nickels;
}

unsigned int getDimes() {
	return dimes;
}

unsigned int getQuarters() {
	return quarters;
}

void addPenny() {
	pennies++;
}

void addNickel() {
	nickels++;
}

void addDime() {
	dimes++;
}

void addQuarter() {
	quarters++;
}

void compound() {
	double money = 0;
	money += (pennies * 0.01);
}

double getTotalMoney() {
	return balance;
}

void addfunc(double money) {
	balance += money;
}

enum command {
	cls,
	bal,
	chusr,
	add,
	ext,
	invalid
};

command hashCommand(string cmd) {


	if (cmd.find("cls") != std::string::npos) {
		return cls;
	} else if (cmd.find("balance") != std::string::npos || cmd.find("bal") != std::string::npos) {
		return bal;
	} else if (cmd.find("chusr") != std::string::npos) {
		return chusr;
	} else if (cmd.find("add") != std::string::npos) {
		return add;
	} else if (cmd.find("exit") != std::string::npos) {
		return ext;
	} else {
		return invalid;
	}
}

int commandline() {
	string command;
	cout << name << "@piggy$ ";
	getline(cin, command);
	switch (hashCommand(command)) {
		case cls:
			system("cls");
			break;
		case bal:
			cout << getTotalMoney() << endl;
			break;
		case chusr:
			cout << "Beginning change user process..." << endl;
			name = getName();
			break;
		case add: { //Braces required to avoid transfer of control past initialisation
			redo:
			cout << "How much would you like to add?" << endl;
			string mon;
			getline(cin, mon); //needs to be double, string is part of type checking
			const char* cstrmon = mon.c_str();
			size_t found;
			found = mon.find('.');
			if (found != string::npos) {
				cout << "Period found at: " << found << endl;
			}
			double money = stod(cstrmon);
			addfunc(money);
			break;
		}
		case ext:
			exit(0);
			break;
		case invalid:
			cout << "Invalid command" << endl;
			break;
		default:
			cout << "Invalid command" << endl;
			break;
	}
}

int main() {
	name = getName();
	while (1) {
		commandline();
	}
}