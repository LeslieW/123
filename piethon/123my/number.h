typedef enum Type {
	INT,
	FLOAT
} Type;


class Number {
public:
	Number() : type(INT), value(0) {}
	Number(const int val) :type(INT), value(val) { }

private:
	Type	type;
	Value	value;

};
