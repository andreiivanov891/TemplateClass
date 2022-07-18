#pragma once

template <class T, int siz>
class SmartArray
{
private:
	T* mas;
	int size;
public:
	SmartArray();
	void show_array();
};


template <class T, int siz>
SmartArray<T,siz>::SmartArray()
{
	this->mas = new T[siz];
	for (int i = 0; i < siz; i++) mas[i] = (T)i/2;
	this->size = siz;
}

template <class T, int siz>
void SmartArray<T, siz>::show_array()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << mas[i] << ' ';
	}
	std::cout << std::endl;
}
