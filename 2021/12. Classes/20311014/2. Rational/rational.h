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

    rational operator+ (rational a);
    rational operator- (rational b);
    rational operator* (rational c);
    rational operator/ (rational d);
};