// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

void addOne(std::vector<int>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i]++;
		std::cout << vec[i] << std::endl;
	}
}

int main()
{
	//std::vector<int> myVec { 5, 3 ,7 };
	//int myInt{ 5 };
	//for (int i = 0; i < myVec.size(); i++)
	//{
	//	myVec[i] = myInt++; //5 ,6, 7 ;  ++myInt -> 6, 7, 8
	//}
	//for (int j = 0; j < myVec.size(); j++)
	//{
	//	std::cout << myVec[j] << std::endl;
	//}

	//std::vector<int> myVec;
	//myVec.push_back(3);
	//myVec.push_back(6);
	//myVec.push_back(9);

	//addOne(myVec);

	//for (int i = 0; i < myVec.size(); i++)
	//{
	//	std::cout << myVec[i] << std::endl;
	//}

	std::vector<std::vector<int>> myVec;
	myVec.push_back(std::vector<int> { 3, 4, 5 });
	myVec.push_back(std::vector<int> { 5, 10 ,15, 7 });

	for (int i = 0; i < myVec.size(); i++)
	{
		for (int j = 0; j < myVec[i].size(); j++)
		{
			std::cout << myVec[i][j] << std::endl;
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
