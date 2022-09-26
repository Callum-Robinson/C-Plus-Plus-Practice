#ifndef ANGRY_CAT_EXCEPTION_H
#define ANGRY_CAT_EXCEPTION_H

#include <stdexcept>
using namespace std;

class AngryCatException : public runtime_error { // inherits the runtime error exception
public:
	AngryCatException() : runtime_error("Made the cat angry prepare for attack!"){
	}

	AngryCatException(const string& message) : runtime_error(message) {
	}
};



#endif // !ANGRY_CAT_EXCEPTION_H
