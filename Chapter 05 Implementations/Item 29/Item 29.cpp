#include <iostream>
#include <string>
struct Balance {
    double money;
    Balance(double amount) :money(amount) {}
};
class BankAccount {
    std::string name;
    std::shared_ptr<Balance> pt;
public:
    BankAccount(const std::string& n, double amount) :name(n),pt(std::make_shared<Balance>(amount)) {}
    void withdraw(int amount) {
        if (amount < 0)  throw std::invalid_argument("Amount must be positive");
        if (amount > pt->money) throw std::runtime_error("Insufficien balance.");
        auto temp = std::make_shared<Balance>(pt->money - amount);
        std::swap(pt, temp);
    }
    void deposit(int amount) {
        if (amount < 0)  throw std::invalid_argument("Amount must be positive");
        auto temp = std::make_shared<Balance>(amount + pt->money);
        std::swap(pt, temp);
    }
    double getBalance() const noexcept{ return pt->money; }
};
int main()
{
    BankAccount test("Jackson", 100);
    try {
        test.deposit(50);
        test.withdraw(200);//trigger abnormal
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << "Balance: " << test.getBalance() << std::endl;
}
