//#include "ArrayList.h"
//
//ArrayList::ArrayList() {
//	list = nullptr;
//	size = 0;
//}
//
//ArrayList::~ArrayList() {
//	clear();
//}
//
//// O(N)
//void ArrayList::add(Student student) {
//	if (isEmpty()) {
//		size = 1;
//		list = new Student[size];
//		list[0] = student;
//	}
//	else {
//		Student* temp = new Student[size + 1];
//		for (int i = 0; i < size; i++)
//		{
//			temp[i] = list[i];
//		}
//
//		temp[size] = student;
//		delete[] list;
//		list = temp;
//		size++;
//	}
//}
//
//// O(N)
//void ArrayList::add(int index, Student student) {
//	if (isEmpty()) {
//		size = 1;
//		list = new Student[size];
//		list[0] = student;
//	}
//	else if (index < 0 || index >= size) {
//		return;
//	}
//	else {
//		size++;
//		Student* temp = new Student[size];
//
//		for (int i = 0, j = 0; j < size; j++)
//		{
//			if (i != index) {
//				temp[j] = list[i];
//				i++;
//			}
//			else {
//				temp[j] = student;
//			}
//		}
//
//		delete[] list;
//		list = temp;
//		size++;
//	}
//}
//
//
//void ArrayList::addAll(Student* students, int size) {
//	for (int i = 0; i < size; i++)
//	{
//		add(students[i]);
//	}
//}
//
////void ArrayList::addAll(int index, int* elements, int size){}
//
//void ArrayList::revome() {
//	remove(size - 1);
//}
//
//// O(N)
//void ArrayList::remove(int index) {
//	if (!isEmpty()) {
//		size--;
//		Student* temp = new Student[size];
//
//		for (int i = 0, j = 0; i < size; i++)
//		{
//			if (i != index) {
//				temp[j] = list[i];
//				j++;
//			}
//		}
//
//		delete[] list;
//		list = temp;
//	}
//}
//
//void ArrayList::clear() {
//	if (list != nullptr) {
//		delete[] list;
//		size = 0;
//	}
//}
//
//bool ArrayList::isEmpty() {
//	return size == 0;
//}
//
//
//// O(1)
//Student ArrayList::get(int index) {
//	if (!isEmpty() && index >= 0 && index < size) {
//		return list[index];
//	}
//
//	return Student();
//}
//
//// O(1)
//void ArrayList::set(int index, Student student) {
//	if (!isEmpty() && index >= 0 && index < size) {
//		list[index] = student;
//	}
//}
//
//int ArrayList::getSize() {
//	return size;
//}
//
//string ArrayList::toString() {
//	string s = "List is empty.";
//
//	if (!isEmpty()) {
//		s = "";
//
//		for (int i = 0; i < size; i++)
//		{
//			s += list[i].toString() + "\n";
//		}
//	}
//
//	return s;
//}