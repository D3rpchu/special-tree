#pragma once

#include <memory>
#include <vector>

template <typename T>
class Node
{
public:
	T value;
	Node *parent{nullptr};
	std::vector<std::unique_ptr<Node> > children;
};
