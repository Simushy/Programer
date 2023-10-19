#ifndef ERRORCODE_H
#define ERRORCODE_H
#include <map>
#include <string>
#include "ErrorCode.h"
using namespace std;
enum ErrorCode {
	UserTerminated,
	ConversionError,
	test1
};
extern std::map<ErrorCode, string> ErrorMessage;

#endif