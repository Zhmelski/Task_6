#include "DynamicArray.h"

void DynamicArray::Resize()
{
	if (Capacity == 0) {
		Capacity = 1;
	}
	else
	{
		Capacity *= 2;
	}

	MainControl** New_Array_Class = new MainControl * [Capacity];

	for (int i = 0; i < Size; ++i)
	{
		New_Array_Class[i] = Array_Class[i];
	}

	delete[] Array_Class;
	Array_Class = New_Array_Class;
}

DynamicArray::DynamicArray()
{
	Size = 0;
	Capacity = 0;
	Array_Class = nullptr;
}

DynamicArray::~DynamicArray()
{
	DeleteAllArrayElements();
	delete[] Array_Class;
}

void DynamicArray::CreateArray(int selected_capacity)
{
	DeleteAllArrayElements();
	delete[] Array_Class;

	Size = 0;
	Capacity = selected_capacity;
	Array_Class = new MainControl * [Capacity];
}

void DynamicArray::AddObject(MainControl* object)
{
	if (Size >= Capacity)
		Resize();
	if (Capacity == 0)
	{
		Capacity = 1;
		Array_Class = new MainControl * [Capacity];
	}

	Array_Class[Size++] = object;
}

void DynamicArray::DeleteObject(int ind)
{
	if (ind >= 0 && ind < Size)
	{
		delete Array_Class[ind];
		for (int i = ind; i < Size - 1; ++i)
			Array_Class[i] = Array_Class[i + 1];
		--Size;
	}
	else
		cout << "\nЭлемент по заданному индексу НЕ НАЙДЕН\n";
}

void DynamicArray::Print() const
{
	for (int i = 0; i < Size; ++i)
		Array_Class[i]->Print();
}

void DynamicArray::DeleteAllArrayElements()
{
	for (int i = 0; i < Size; ++i)
		delete Array_Class[i];

	Size = 0;
}

void DynamicArray::SetSize(int size)
{
	Size = size;
}
int DynamicArray::GetSize() const
{
	return Size;
}

void DynamicArray::SetCapacity(int capacity)
{
	Capacity = capacity;
}
int DynamicArray::GetCapacity() const
{
	return Capacity;
}

void DynamicArray::SaveArrayToFile(const string& filename) const
{
	ofstream out(filename);
	if (!out)
	{
		cout << "Ошибка окрытия файла для записи: " << filename << endl;
		return;
	}

	out << Size << '\n';
	for (int i = 0; i < Size; ++i)
	{
		Array_Class[i]->SaveToFile(out);
	}

	out.close();
}
void DynamicArray::LoadArrayFromFile(const string& filename)
{
	ifstream in(filename);
	if (!in)
	{
		cout << "Ошибка открытия файла для чтения: " << filename << endl;
		return;
	}

	int new_size;
	in >> new_size;
	DeleteAllArrayElements();
	delete[] Array_Class;

	Capacity = new_size;
	Size = 0;
	Array_Class = new MainControl * [Capacity];

	for (int i = 0; i < new_size; ++i)
	{
		string type;
		in >> type;

		MainControl* object = nullptr;
		if (type == "Ellips")
			object = new Ellips();
		else if (type == "Button")
			object = new Button();
		else if (type == "HyperlinkLabel")
			object = new HyperlinkLabel();
		else if (type == "TextBox")
			object = new TextBox();

		if (object)
		{
			object->LoadFromFile(in);
			AddObject(object);
		}
	}

	in.close();
}