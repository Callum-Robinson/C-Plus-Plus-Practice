#ifndef SWAPPER_H
#define SWAPPER_H

template <class T>
class Swapper {
public:
	Swapper(T first, T second);
	void swap();
	T getFirst() const;
	T getSecond() const;

private:
	T first;
	T second;
};

/*
	Note for templates the full implementation needs to be in the header file.
	This can be done inside the class or like the example below
*/
template<class T>
Swapper<T>::Swapper(T first, T second) {
	this->first = first;
	this->second = second;
}

template<class T>
void Swapper<T>::swap() {
	T temp = first;
	first = second;
	second = temp;
}

template<class T>
T Swapper<T>::getFirst() const {
	return first;
}

template<class T>
T Swapper<T>::getSecond() const {
	return second;
}
#endif // !SWAPPER_H

