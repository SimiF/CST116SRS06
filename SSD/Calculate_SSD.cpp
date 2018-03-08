#include "stdafx.h"
#include "cmath"
#include "Calculate_SSD.h"

double calculate_ssd(const size_t n, double data_a[])
{
	int data_sum{};

	for (int a{ 0 }; a != n; a++)
	{
		data_sum += data_a[a];
	}

	double const data_average = 1.0 * data_sum / n;

	for (int i{ 0 }; i != n; i++)
	{
		data_a[i] = (data_a[i] - data_average) * (data_a[i] - data_average);
	}

	double refined_data_sum{};

	for (int c{ 0 }; c != n; c++)
	{
		refined_data_sum += data_a[c];
	}

	double const refined_data_average = refined_data_sum / (n - 1);

	double const data_sd = sqrt(refined_data_average);

	return data_sd;
}