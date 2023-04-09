// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

enum class GameState
{
	Menu,
	Playing,
	Pause,
	GameOver
};

int main()
{
	//GameState gameState{ GameState::Menu };
	//switch (gameState)
	//{
	//	case GameState::Menu:
	//		// show menu screem
	//		// load player profile
	//		break;
	//	case GameState::Playing:
	//		// create players
	//		break;
	//	case GameState::Pause:
	//		// stop playing
	//		break;
	//	case GameState::GameOver:
	//		// display game over screen
	//		break;
	//		
	//	default:
	//		// show menu screen
	//		break;
	//}

	int input = -1;

	while (input != 9)
	{
		std::cout << "Please enter a number" << std::endl;
		std::cin >> input;

		switch (input)
		{
		case 0:
			std::cout << "You have nothing" << std::endl;
			break;
		case 1:
			std::cout << "You have only 1" << std::endl;
			break;
		case 9:
			std::cout << "You have excited" << std::endl;
		default:
			std::cout << "You shouldn't be here" << std::endl;
			break;
		}
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
