// calc_deMouraCoutinhoDiogo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void CheckOperator(char operatorChoice, int& operatorTaken);



int main(int argc, char* argv[])
{
	int result{0};

	if (argc != 4)
	{
		std::cout << "Usage: 'calc_deMouraCoutinhoDiogo operation numeric Value1 numeric Value2'";
	}
	if (argc == 4)
	{
	std::string playerOperator{};

		playerOperator += argv[1];
		
		char playerOperatorChar = playerOperator[1];
		
		std::cout << playerOperatorChar;

		int playerValue1 = atol(argv[2]);
		int playerValue2 = atol(argv[3]);

		enum class OperatorType
		{
			additon = 1,
			subtraction = 2,
			multiplication = 3, 
			division = 4,
			power = 5
		};
		OperatorType type{};



		if (playerValue1 == 0)
		{
			std::cout << "Value1 is not an integer";
			return 0;
		}
		if (playerValue2 == 0)
		{
			std::cout << "Value2 is not an integer";
			return 0;
		}
		if ((playerValue1 == 0) && (playerValue2 == 0))
		{
			std::cout << "Neither of of input values is an integer";
			return 0;
		}


		if (playerOperator[0] == '+')
		{
			type = OperatorType::additon;
		}
		if (playerOperator[0] == '-')
		{
			type = OperatorType::subtraction;
		}
		if (playerOperator[0] == '*')
		{
			type = OperatorType::multiplication;
		}
		if (playerOperator[0] == '/')
		{
			type = OperatorType::division;
		}
		if (playerOperator[0] == '$')
		{
			type = OperatorType::power;
		}
		if((playerOperator[0] != '+') && (playerOperator[0] != '-') && (playerOperator[0] != '*') && (playerOperator[0] != '/') && (playerOperator[0] != '$'))
		{
			std::cout << "You have not intruduced a correct operator";
			return 0;
		}


		switch (type)
		{
		case OperatorType::additon:
			result += playerValue1 + playerValue2;
			std::cout << "The result is: " << result;
			break;
		case OperatorType::subtraction:
			result = playerValue1 - playerValue2;
			std::cout << "The result is: " << result;
			break;
		case OperatorType::multiplication:
			result = playerValue1 * playerValue2;
			std::cout << "The result is: " << result;
			break;
		case OperatorType::division:
			if (playerValue2 == 0)
			{
				std::cout << "This operation cannot take place.";
			}
			if ((playerValue1 % playerValue2) != 0)
			{
				int rest = playerValue1 % playerValue2;
				result = playerValue1 / playerValue2;
				std::cout << "The result is: " << result << " with rest " << rest;
			}
			else
			{
				result = playerValue1 / playerValue2;
				std::cout << "The result is: " << result;
			}
			break;
		case OperatorType::power:
			result = static_cast<int>(powf(playerValue1, playerValue2));
			std::cout << "The result is: " << result;
			break;
		default:
			break;
		}
	}

	return 0;
}