// StringDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using std::cout;

int main() {
    char inputArr[]{ "calc.exe + 100 50" };
    int terminatorCounter{ 1 };
    for (char* locationPtr{ inputArr }; *locationPtr != 0; ++locationPtr) {
        if (*locationPtr == ' ') {
            *locationPtr = 0;
            ++terminatorCounter;
        }
    }
    cout << "Found " << terminatorCounter << " terminators\n";
    const size_t arraySize = terminatorCounter;
    char** argumentVector{ new char* [arraySize] };
    int arrayIndex{ 0 };
    argumentVector[arrayIndex++] = inputArr;
    for (char* locationPtr{ inputArr }; arrayIndex < arraySize; ++locationPtr) {
        if (*locationPtr == 0) {
            argumentVector[arrayIndex] = locationPtr + 1;
            ++arrayIndex;
        }
    }
    for (int i{}; i < arraySize; ++i) {
        cout << argumentVector[i] << '\n';
    }
    delete[] argumentVector;
}




//int main()
//{
//	
//	char inputArr[]{ "calc.exe + 100 50" };
//
//	std::cout << inputArr << '\n';
//
//
//	//int countTerminator{};
//
//	//int sizeArr{ sizeof(inputArr) };
//
//	//for (int i{}; i < sizeArr; ++i)
//	//{
//	//	if (inputArr[i] == ' ')
//	//	{
//	//		inputArr[i] = '\0';
//	//		++countTerminator;
//	//	}
//	//}
//	//inputArr;
//
//
//	//char inputArr1[]{ "calc.exe + 100 50" };
//	//countTerminator = 0;
//
//	//for (char* locationPtr = inputArr1; *locationPtr != '\0'; ++locationPtr)
//	//{
//	//	if (*locationPtr == ' ')
//	//	{
//	//		*locationPtr = '\0';
//	//		++countTerminator;
//	//	}
//	//}
//
//
//	//char* initialPositionPtr[3]{};
//
//	//for (char* locationPtr = inputArr; *locationPtr != '\0'; ++locationPtr)
//	//{
//	//	if (*locationPtr == inputArr[0])
//	//	{
//	//		*initialPositionPtr[0] == *locationPtr;
//	//	}
//	//	if (*locationPtr == ' ')
//	//	{
//	//		//*initialPositionPtr == *locationPtr + 4;
//	//	}
//	//}
//
//
//
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
