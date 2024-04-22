#include "Array.h"

Array::Array(int size) : arr{ new int[size] }, size{size} {}
Array::Array() :arr{ nullptr }, size{ 0 } {}
Array::Array(const Array& obj) : arr{ new int[obj.size] }, size{ obj.size} {
	forArray(size) {
		this->arr[i] = obj.arr[i];
	}
}
Array::~Array(){
	delete[] arr;
}

Array& Array::setSize(int size){
	int* temp = new int[size];
	//int sMax = (this->size < size) ? size : this->size;
	int sMin = min(size, this->size);
	forArray(sMin) {
		temp[i] = arr[i];
	}
	if (size > this->size) {
		for (int i = this->size - 1; i < size; i++) {
			temp[i] = 0;
		}
	}
	delete[] arr;
	this->size = size;
	arr = temp;
	return *this;
}

Array& Array::initArray(){
	forArray(size) {
		//cin >> arr[i];
		arr[i] = rand() % 10;
	}
	return *this;
}

bool Array::editArray(int index, int val){
	if (index >= 0 && index < size) {
		arr[index] = val;
		return true;
	}
	return false;
}

Array& Array::sortArray(){
	forArray(size) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
		}
	}
	return *this;
}
int Array::minArray(){
	int minArr = arr[0];
	forArray(size) {
		if (minArr > arr[i]) minArr = arr[i];
	}
	return minArr;
}
int Array::maxArray(){
	int maxArr = arr[0];
	forArray(size) {
		if (maxArr < arr[i]) maxArr = arr[i];
	}
	return maxArr;
}
void Array::printArray() {
	forArray(size) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
