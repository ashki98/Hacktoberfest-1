#include <iostream> /* cout cin */
#include <stdlib.h> /* abs */
#include <string> /*string */


void trimStr(std::string&);
void trimStr(std::string&, std::string&);
void trimAbsStr(std::string&);
void placeHandler(std::string& , std::string&);
void sign(std::string&);
int cmprLen(std::string, std::string);


std::string ADD(std::string, std::string);
std::string SUB(std::string, std::string);
std::string DIVIDE(std::string, std::string);
std::string MULTI(std::string, std::string);
std::string MOD(std::string, std::string);
std::string gcd(std::string, std::string);

bool isNeg(std::string);
bool isLessThan(std::string, std::string);
bool isEqualTo(std::string, std::string);
bool isGreaterThan(std::string, std::string);
