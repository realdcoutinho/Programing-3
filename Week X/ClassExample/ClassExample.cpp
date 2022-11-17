// ClassExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>
#include <vector>
#include <iomanip>
#include <numeric>
#include <chrono>

volatile int sink;

//class magnitudeZero{};
//
//int g_X{ 0 };
//int g_Y{ 0 };
//
//float Magnitude() noexcept
//{
//    return sqrt(g_X * g_X + g_Y * g_Y);
//}
//
//void Normalize()
//{
//    const int magnitude = Magnitude();
//    //assert(magnitude > 0);
//    if (magnitude == 0)
//    {
//        //throw magnitudeZero();
//        throw "whatever";
//    }
//    g_X /= magnitude;
//    g_Y /= magnitude;
//}

int main()
{
    //try 
    //{
    //    Normalize();
    //    std::cout << g_X << " " << g_Y << '\n';
    //}
    //catch(const magnitudeZero& exception)
    //{
    //    std::cout << "Cannot Normalize a vector of magnitude zero!";
    //}
    //catch (...)
    //{
    //    std::cout << "Caught Covid!";
    //}
    //std::cout << g_X << " " << g_Y << '\n';



    

    auto start1 = std::chrono::high_resolution_clock::now();
    std::vector<int> vector1;
    vector1.reserve(10);
    //vector1[15];
    //vector1[5];

    auto end1 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff1 = end1 - start1;
    std::cout << "The time2 is: " << diff1.count() << '\n';


    auto start2 = std::chrono::high_resolution_clock::now();
    std::vector<int> vector2;
    vector2.reserve(10);
    //vector2->at(15);
    //vector2->at(5);

    auto end2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff2 = end2 - start2;
    std::cout << "The time2 is: " << diff2.count() << '\n';


    //std::cout << std::fixed << std::setprecision(9) << std::left;
    //for (auto size = 1ull; size < 1000'000'000ull; size *= 100) {
    //    // record start time
    //    auto start = std::chrono::high_resolution_clock::now();
    //    // do some work

    //    std::cout << vector;

    //    // record end time
    //    auto end = std::chrono::high_resolution_clock::now();
    //    std::chrono::duration<double> diff = end - start;
    //    std::cout << "Time to fill and iterate a vector of " << std::setw(9)
    //        << size << " ints : " << diff.count() << " s\n";
    //}



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
