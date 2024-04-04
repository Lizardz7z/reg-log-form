#ifndef DATALOADER_H
#define DATALOADER_H

#include "Database.h"
#include <fstream>
#include <cstdio>

class Dataloader {
public:
	tree* data;

	bool check_password(node* cur, std::string pass) {
		if (cur != NULL && cur->get_passsword() == pass) {
			return true;
		}
		else return false;
	}

	node* check_login(std::string log) {
		node* cur = data->find_node(data->root, log);
		return cur;
	}

	bool add_data(std::string login, std::string password) {
		bool error = false;
		this->data->root = this->data->add(this->data->root, login, password, &error);
		if (error == false) {
			data->data.push_back(std::pair<std::string, std::string>(login, password));
		}
		return !error;
	}

	void load_data() {
		this->data = new tree();
		std::ifstream file;
		file.open("data.csv");
		bool comma = false;
		bool l = false;
		std::string buffer = "", login = "", password = "";
		for (std::string str; file >> str; ) {
			for (auto a : str) {
				if (a == ',') comma = true;
				else if (!comma && a != '\n' && a != '\0') {
					login.push_back(a);
				}
				else if (comma && a != '\n' && a != '\0') {
					password.push_back(a);
				}
			}
			bool error = false;
			this->data->root = this->data->add(this->data->root, login, password, &error);
			login = "";
			password = "";
		}
		file.close();
	}

	void save_data() {
		std::ofstream file("data.csv");
		if (this->data->data.size() != 0) {
			for (auto a : this->data->data) {
				file << a.first << "," << a.second << std::endl;
			}
		}
		file.close();
	}
};


#endif
