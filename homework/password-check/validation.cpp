#include "validation.hpp"

std::string getErrorMessage(const ErrorCode& errorCode) {
    switch (errorCode) {
        case ErrorCode::Ok:
            return "Ok";
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "Password needs to have at least nine characters";
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "Password needs to have at least one number";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password needs to have at least one special character";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password needs to have at least one uppercase letter";
        case ErrorCode::PasswordsDoNotMatch:
            return "Passwords do not match";
        default:
            return "Unknown error";
    }
}

bool doPasswordsMatch(const std::string& password, const std::string& repeatedPassword) {
    return password == repeatedPassword;
}

ErrorCode checkPasswordRules(const std::string& password) {
    if (password.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }

    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& password, const std::string& repeatedPassword) {
    if (!doPasswordsMatch(password, repeatedPassword)) {
        return ErrorCode::PasswordsDoNotMatch;
    }

    return checkPasswordRules(password);
}
