#include <map>
#include <string>
#include "ErrorCode.h"
using namespace std;

std::map<ErrorCode, std::string> ErrorMessage = {
    {UserTerminated, "You exitted program!\n"},
    {ConversionError, "Could not convert\n"},
};