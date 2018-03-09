/* Function that calculates the Sample Standard deviation of an array*/
#include "stdafx.h"
#include <cmath>
#include "SAMPLESTANDARDDEVIATION.h"

// Sample Standard Deviation Function
double SampleStandardDeviation(const size_t n, const int arr[]) // Taillow's function
{
	int sum{ 0 };
	double mean{ 0 };
	double Sx{ 0 };
	double summation{ 0 };

	// adding all values from the array
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	// average of values
	mean = 1.0*sum / n;
	// Summation of each value minus the mean to the square
	for (int j = 0; j < n; j++)
	{
		summation += pow((arr[j] - mean), 2);
	}
	// Sample Standard Deviation output
	Sx = sqrt(summation / (n - 1));
	return Sx;
}