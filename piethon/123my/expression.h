#include "number.h"

class Expression {
public:

protected:
	Expression() { };
};

class Constant : public Expression {
public:
	Constant(const Number& n) : num(n) { }
private:
	Number num;
};
