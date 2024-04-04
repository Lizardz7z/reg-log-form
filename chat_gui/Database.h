#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <string.h>
#include <vector>

class node {
private:
	std::string login;
	std::string password;
public:
	int height = 1;
	node* parent = NULL;
	node* left = NULL, * right = NULL;
	bool leaf = true;

	node(std::string l, std::string p, node* par);
	std::string get_login();
	std::string get_passsword();
	void set_login(std::string l);
	void set_password(std::string p);
	void add_left(std::string l, std::string p);
	void add_right(std::string l, std::string p);
};

class tree {
public:
	node* root;
	std::vector<std::pair<std::string, std::string>> data;
	tree();
	~tree();
	void delete_node(node* cur);
	int get_height(node* cur);
	node* left(node* head);
	node* right(node* head);
	node* balance(node* head);
	node* add(node* head, std::string l, std::string p, bool error);
	node* find_node(node* head, std::string l);
};

#endif