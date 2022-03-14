class rational
{
private:
	int number, denom;
public:
	rational();
	rational(int n, int d);
	~rational();

	void setNumber(int n);
	void setDenom(int d);

	int getNumber();
	int getDenom();

	void print();

	rational operator+ (rational r);
};