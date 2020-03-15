#pragma once

#include "AdjacencyList.h"
#include "AdjacencyMatrix.h"
#include "IncidenceMatrix.h"
#include <string>

class Graph  
{
private:
	int size = 0;
	AdjacencyMatrix* adjacencyMatrix = nullptr;
	void GoInside(int first, int current, bool* visited, int* stack, int size);
public:
	Graph(std::string input);
	~Graph();
	std::string Hamilton();
};

