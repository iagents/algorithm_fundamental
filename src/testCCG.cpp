#include "connected_component_analysis.h"

int data[][5] = {
	{ 1, 0, 0, 0, 1 },
	{ 1, 1, 0, 1, 1 },
	{ 0, 1, 0, 0, 1 },
	{ 1, 1, 1, 1, 0 },
	{ 0, 0, 0, 1, 0 }	
};

int label[][5] = {
  { 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0 }	
};

int main()
{
	algorithm_fundamental::connected_component_analysis((int **)data, (int **)label, 5, 5);
}