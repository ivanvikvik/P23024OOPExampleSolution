#include "Group.h"

Group::Group() : Group(20) {
}

Group::Group(int capacity) {
	this->capacity = capacity;
	list = new Student[capacity];
	count = 0;
}

Group::Group(Student* list, int count) {
	this->count = count;
}

Group::~Group() {

}

Student Group::get(int index);
void Group::set(int index, Student student);
int Group::getCount();
void Group::add(Student student);
void Group::add(int index, Student student);
void Group::remove(Student student);
void Group::remove(int index);
void Group::clear();
bool Group::isEmpty();
string Group::toString();
