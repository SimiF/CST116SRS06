#include "stdafx.h"
#include "Calculate_SSD.h"

int main()
{
	double data_1[] = { 6, 35, 90, 65, 36, 65, 21, 50, 43, 60, 78, 67, 77, 30, 83, 77, 56, 51, 90, 9, 74, 99, 61, 89, 96 };
	
	double ssd_1 = calculate_ssd(sizeof(data_1) / sizeof(data_1[0]), data_1);

	return 0;
}

