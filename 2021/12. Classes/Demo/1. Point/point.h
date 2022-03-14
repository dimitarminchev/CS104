// Point in Space
class point
{
    // Private Data Members
private:
    int x, y;

    // Public Data Members (Interface)
public:

    // Constructors & Desctuctor
    point();
    point(int a, int b);
    ~point();

    // Setters (Modifiers)
    void setX(int a);
    void setY(int a);

    // Getters
    int getX();
    int getY();

    // Print
    void print();
};