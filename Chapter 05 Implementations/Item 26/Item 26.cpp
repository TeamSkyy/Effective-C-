#include <string>
#include <iostream>
const int minimumPasswordLength = 6;
void encryption(std::string& psw) {
    psw = "123" + psw + "@";
    std::swap(psw[3], psw[2]);
}
std::string passwordEncryption(const std::string password) {
    if (password.length() < minimumPasswordLength) {
        throw("Password length is too short!\n");
    }
    std::string encrypted(password);
    encryption(encrypted);
    return encrypted;
}
int main()
{
    std::string test("abcdefg");
    std::cout << passwordEncryption(test);
}
