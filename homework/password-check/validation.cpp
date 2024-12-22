#include "validation.hpp"

std::string getErrorMessage(const ErrorCode& errorCode) {
    return "Ok";
}

bool doPasswordsMatch(const std::string& password, const std::string& repeatedPassword) {
    return false;
}

ErrorCode checkPasswordRules(const std::string& password) {
    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& password, const std::string& repeatedPassword) {
    return ErrorCode::Ok;
}
