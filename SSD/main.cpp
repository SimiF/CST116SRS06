#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "calculate_ssd.h"
#include "samplestandarddeviation.h"

int main()
{
	int data_1[] = { 6, 35, 90, 65, 36, 65, 21, 50, 43, 60, 78, 67, 77, 30, 83, 77, 56, 51, 90, 9, 74, 99, 61, 89, 96 };
	int data_2[] = { 62, 51, 10, 21, 42, 30, 54, 76, 78, 23, 68, 28, 70, 33, 71, 82, 28, 98, 35 }; // Evee data

	const double ssd_1_a = calculate_ssd(sizeof data_1 / sizeof data_1[0], data_1); // My data | My function
	const double ssd_1_b = SampleStandardDeviation(sizeof data_1 / sizeof data_1[0], data_1); // My data | Taillow's function

	const double ssd_2_a = calculate_ssd(sizeof data_2 / sizeof data_2[0], data_2); // Eevee's data | My function
	const double ssd_2_b = SampleStandardDeviation(sizeof data_2 / sizeof data_2[0], data_2); //Eevee's data | Taillow's function

	if (abs(ssd_1_a - ssd_1_b) < 0.000001) 
	{
		std::cout << "The sample standard deviations of my data calculated by my function and Rolando's function match." << std::endl;
	}
	else
	{
		std::cout << "The sample standard deviations of my data calculated by my function and Rolando's function do not match." << std::endl;
	}

	if (abs(ssd_2_a - ssd_2_b) < 0.000001)
	{
		std::cout << "The sample standard deviations of Eevee's data calculated by my function and Rolando's function match." << std::endl;
	}
	else
	{
		std::cout << "The sample standard deviations of Eevee's data calculated by my function and Rolando's function do not match." << std::endl;
	}

	return 0;
}

