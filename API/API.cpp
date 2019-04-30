// API.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

bool running = true;
int answer;
int weight;
string feeling;


int main()
{
// NÄR JAG INPUTAR ETT ANSWER SÅ CLEARAR DEN ALLT, SKRIVER UT RESULTATEN OCH HOPPAR TILL BOX IGEN

	do
	{
		
		cout << "================================================= \n";
		cout << "=               TID                               =\n";
		cout << "=                                                 =\n";
		cout << "=               INPUT VÄDER                       =\n";
		cout << "=                                                 =\n";
		cout << "=               INPUT SL                          =\n";
		cout << "=                                                 =\n";
		cout << "================================================= \n\n";

		cout << "What would you like to do? \n";
		cout << "[1] See A\n";
		cout << "[2] See B\n";
		cout << "[3] See C\n\n";

		cout << "[4] Input how you feel.\n";
		cout << "[5] Input how much you weigh.\n";
		cout << "[0] Quit.\n";
	
		cin >> answer;
		// CLEARING AFTER ANSWER
		system("CLS");


		switch (answer) 
		{
		
		case 1: cout << "Representing A\n";
			break;
		case 2: cout << "Representing B\n";
			break;
		case 3: cout << "Representing C\n";
			break;

		case 4: cout << "Please enter how you feel.\n";
			cin >> feeling;
			cout << "You are feeling " << feeling << " right now.\n";
			Sleep(1000);
			cout << "Sending that to database...\n";
			Sleep(2000);
			break;

		case 5: cout << "Please enter how much you weigh.";
			cin >> weight;
			cout << "You are weighing " << weight << " right now.\n";
			Sleep(1000);
			cout << "Sending that to database...\n";
			Sleep(2000);
			break;
				
		case 0: running = false;

			default: cout << "Whoops, error!\n";
		}
		
	} while (running);
}


