#include "Database.h"

node::node(std::string l, std::string p, node* par) {
	this->login = l;
	this->password = p;
	this->parent = par;
}
std::string node::get_login() {
	return this->login;
}
std::string node::get_passsword() {
	return this->password;
}
void node::set_login(std::string l) {
	if (l.size() != 0 && l.size() >= 6 && l.size() <= 16) {
		this->login = l;
	}
}
void node::set_password(std::string p) {
	if (p.size() != 0 && p.size() >= 6 && p.size() <= 16) {
		this->password = p;
	}
}
void node::add_left(std::string l, std::string p) {
	node* new_node = new node(l, p, this);
	this->left = new_node;
}
void node::add_right(std::string l, std::string p) {
	node* new_node = new node(l, p, this);
	this->right = new_node;
}

tree::tree() {
	this->root = NULL;
	this->data = std::vector<std::pair<std::string, std::string>>(0);
}

void tree::delete_node(node* cur) {
	if (cur != NULL) {
		if (cur->left != NULL) {
			delete_node(cur->left);
		}
		if (cur->right != NULL) {
			delete_node(cur->right);
		}
		delete cur;
	}
}

tree::~tree() {
	if (this->root != NULL) {
		delete_node(this->root);
	}
}

int tree::get_height(node* cur) {
	if (cur != NULL) {
		return cur->height;
	}
	else {
		return 0;
	}
}

node* tree::left(node* head) {
	node* temp = head->right;
	head->right = temp->left;
	temp->left = head;
	temp->height = std::max(get_height(temp->left), get_height(temp->right)) + 1;
	head->height = std::max(get_height(head->left), get_height(head->right)) + 1;
	return temp;
}

node* tree::right(node* head) {
	node* temp = head->left;
	head->left = temp->right;
	temp->right = head;
	temp->height = std::max(get_height(temp->left), get_height(temp->right)) + 1;
	head->height = std::max(get_height(head->left), get_height(head->right)) + 1;
	return temp;
}

node* tree::balance(node* head) {
	int lh, rh;
	lh = get_height(head->left);
	rh = get_height(head->right);

	head->height = std::max(lh, rh) + 1;

	if (rh - lh == 2) {
		if (get_height(head->right->right) - get_height(head->right->left) < 0) {
			head->right = right(head->right);
		}
		return left(head);
	}
	else if (rh - lh == -2) {
		if (get_height(head->left->right) - get_height(head->left->left) > 0) {
			head->left = left(head->left);
		}
		return right(head);

	}
	return head;
}

node* tree::add(node* head, std::string l, std::string p, bool error) {
	if (head == NULL) {
		return new node(l, p, head);
	}
	else {
		if (l < head->get_login()) {
			head->left = add(head->left, l, p, error);
		}
		else if (l > head->get_login()) {
			head->right = add(head->right, l, p, error);
		}
		else {
			error = true;
		}
		if (error == true) {
			return head;
		}
		head = balance(head);
		return head;
	}
}

node* tree::find_node(node* head, std::string l) {
	node* cur = head;
	if (head != NULL) {
		while (1) {
			if (cur->get_login() > l) {
				if (cur->left != NULL) cur = cur->left;
				else return NULL;
			}
			else if (cur->get_login() < l) {
				if (cur->right != NULL) cur = cur->right;
				else return NULL;
			}
			else {
				return cur;
			}
		}
	}
	else return NULL;
}