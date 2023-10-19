
#include "Math_Functions.h"
#include <string>
using namespace std;

float power(float base, int power) {
	float result = 1;
	for (int i = 0; i <= power; i++)
	{
		result *= base;
	}
	return result;

}
int toint(string input, char ForceConvert) {
	int mnoznik = power(10, input.length() - 2);
	int result = 0;
	int letters_count = 0;
	if (ForceConvert == 'y' || ForceConvert == 'Y')
	{
		for (int i = 0; i < input.length(); i++) {
			if ((input[i] - 48 > 9 || input[i] - 48 < 0))
			{
				letters_count++;
				continue;
			};
			result += (input[i] - 48) * mnoznik;
			mnoznik /= 10;

		}
		return result / power(10, letters_count - 1);
	}
	else
		return 0;
}
float tofloat(int input) {
	return input / 1.0;
}
float tofloat(string input, char ForceConvert) {
	return toint(input, ForceConvert) /1.0;
}