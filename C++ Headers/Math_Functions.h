#ifndef MATH_FUNCTIONS_H
#define MATH_FUNCTIONS_H
#include <string>
using namespace std;

float power(float base, int power);
int toint(string input, char ForceConvert = 'n');
float tofloat(int input);
float tofloat(string input, char ForceConvert);

#endif // !MATH_FUNCTIONS_H