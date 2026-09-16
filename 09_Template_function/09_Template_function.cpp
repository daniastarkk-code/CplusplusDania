#include <iostream>
using namespace std;


template<typename T_arr>
T_arr MaxElement(T_arr arr[], int size)
{
    T_arr max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
int main()
{
	
}

