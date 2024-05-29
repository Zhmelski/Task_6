#pragma once

#include "MainControl.h"

class DynamicArray
{
private:
	MainControl** Array_Class;
	int Size;
	int Capacity;

	void Resize();
public:
	DynamicArray();
	~DynamicArray();

	void CreateArray(int selected_capacity);
	void AddObject(MainControl* object);
	void DeleteObject(int ind);
	void Print() const;
	void DeleteAllArrayElements();

	void SetSize(int size);
	int GetSize() const;

	void SetCapacity(int capacity);
	int GetCapacity() const;
};