#pragma once
#include <iostream>
class DBConnection {
public:
	static DBConnection create() {
		std::cout << "Openning database.\n";
		return DBConnection();
	}
	void close(bool error=false) {
		if (error) {
			throw(std::exception("database closed failed.\n"));
		}
		std::cout << "Closed database successfully.\n";
	}

};
class DBConn {
private:
	DBConnection db;
	bool closed;
public:
	DBConn(const DBConnection& database) :db(database),closed(false) {}
	~DBConn() {
		if (!closed) {
			try {
				db.close();
			}
			catch (const std::exception e) {
				std::cout << e.what();
				db.close();
			}
		}
		
	};
	void close() { //Provide an interface for users to close the connection
		try {
			db.close(true);
		}
		catch (const std::exception e) {
			std::cout << e.what();
			db.close();
		}
	}
};

