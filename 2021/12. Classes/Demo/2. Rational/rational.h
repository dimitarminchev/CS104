// Rational Number Class
class rational
{
    // Private Members
private:
    int number, denom;

    // Public Members
public:

    // Constructors & Destructor
    rational();
    rational(int n, int d);
    ~rational();

    // Setters (Modifiers)
    void setNumber(int n);
    void setDenom(int d);

    // Getters
    int getNumber();
    int getDenom();

    // Print
    void print();

    // Operator Overloading
    rational operator+ (rational r);
};