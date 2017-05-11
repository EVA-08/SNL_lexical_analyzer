#pragma once
#include<iostream>
#include<string>
#include<vector>
class Node {
public:
	virtual void traversal(int level) = 0;
protected:
	std::string type;
};

class Leaf : public Node {
public:
	Leaf(std::string type) {
		Node::type = type;
	}
	virtual void traversal(int level) {
		if (type != "EMPTY") {
			for (int i = 0; i < level; i++) {
				std::cout << "  ";
			}
			std::cout << type << std::endl;
		}
	}
};

class Parent : public Node {
public:
	template<typename... Args>
	Parent(std::string type, Args... nodes) {
		Node::type = type;
		init(nodes...);
	}

	virtual void traversal(int level) {
		for (int i = 0; i < level; i++) {
			std::cout << "  ";
		}
		std::cout << type << std::endl;
		for (Node* node : nodes) {
			node->traversal(level + 1);
		}
	}
private:
	template<typename... Args>
	void init(Node* node, Args... nodes) {
		nodes.push_back(node);
		init(nodes...);
	}
	void init() {}
	std::vector<Node*> nodes;
};