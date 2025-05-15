#include "ArrayList.h"

ArrayList::ArrayList() {
	list = nullptr;
	size = 0;
}

ArrayList::~ArrayList() {
	clear();
}

void ArrayList::add(int element) {}
void ArrayList::add(int index, int element) {}
void ArrayList::addAll(int* elements, int size) {}
//void ArrayList::addAll(int index, int* elements, int size){}
void ArrayList::revome() {}
void ArrayList::remove(int index) {}

void ArrayList::clear() {
	if (list != nullptr) {
		delete[] list;
		size = 0;
	}
}

bool ArrayList::isEmpty() {
	return size == 0;
}

int ArrayList::get(int index) {
	if (!isEmpty() && index >= 0 && index < size) {
		return list[index];
	}

	return 0;
}

void ArrayList::set(int index, int element) {
	if (!isEmpty() && index >= 0 && index < size) {
		list[index] = element;
	}
}

int ArrayList::getSize() {
	return size;
}

string ArrayList::toString() {
	string s = "List is empty.";

	if (!isEmpty()) {
		s = "";

		for (int i = 0; i < size; i++)
		{
			s += to_string(list[i]) + " ";
		}
	}

	return s;
}