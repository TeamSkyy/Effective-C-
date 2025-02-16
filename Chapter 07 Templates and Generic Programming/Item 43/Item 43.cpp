#include <iostream>
#include <string>
class CompanyA {
public:
	void sendclearmsg(const std::string& s) {
		std::cout << "CompanyA::sendclearmsg " << s << std::endl;
	}
	void sendsecretmsg(const std::string& s) {
		std::cout << "CompanyA::sendclearmsg " << s << std::endl;
	}
};
class CompanyB {
public:
	void sendclearmsg(const std::string& s) {
		std::cout << "CompanyB::sendclearmsg " << s << std::endl;
	}
	//void sendsecretmsg(const std::string& s) {
	//	std::cout << "CompanyB::sendclearmsg " << s << std::endl;
	//}
};
class CompanyC {
public:
	void sendclearmsg(const std::string& s) {
		std::cout << "CompanyC::sendclearmsg " << s << std::endl;
	}
	void sendsecretmsg(const std::string& s) {
		std::cout << "CompanyC::sendclearmsg " << s << std::endl;
	}
};
class msginfo {
private:
	std::string msg;
public:
	msginfo(const std::string& s) :msg(s) {}
	const std::string& getmsg()const { return msg; }
};
template<typename Company>
class msgsender {
public:
	void sendclear(const msginfo& m) {
		std::string msg(m.getmsg());
		Company c;
		c.sendclearmsg(msg);
	}
	void sendsecret(const msginfo& m) {
		std::string msg(m.getmsg());
		Company c;
		c.sendsecretmsg(msg);
	}
};
template<typename Company>
class msglogrecord:public msgsender<Company> {
public:
	void sendclearlog(const msginfo& m) {

		std::cout << "start logging.\n";
		this->sendclear(m);
		std::cout << "end logging.\n";
	}
	void sendsecretlog(const msginfo& m) {
		std::cout << "start logging.\n";
		msgsender::sendsecret(m);
		std::cout << "end logging.\n";
	}
};

int main() {
	msginfo m("hello");
	msglogrecord<CompanyA> msa;
	msa.sendclear(m);
	msa.sendclearlog(m);

	msglogrecord<CompanyB> msb;
	msb.sendclear(m);
	//msb.sendsecretlog(m); //error, not exsit this func
}