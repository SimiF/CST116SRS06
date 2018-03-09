#include "stdafx.h"
#include "cmath"
#include "calculate_ssd.h"

double calculate_ssd(const size_t n, const int data_a[]) // My function
{
	int data_sum{ 0 };
	for (int a{ 0 }; a != n; a++)
	{
		data_sum += data_a[a];
	}

	const double data_average = 1.0 * data_sum / n;
	double refined_data_sum{ 0 };
	for (int i{ 0 }; i != n; i++)
	{
		const double subtract_mean = data_a[i] - data_average;
		refined_data_sum += subtract_mean * subtract_mean;
	}

	const double refined_data_average = refined_data_sum / (n - 1);
	const double result = sqrt(refined_data_average);

	return result;
}