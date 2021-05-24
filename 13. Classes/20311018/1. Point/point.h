class point
{
private:
    int x, y;

public:
    point();
    point(int a, int b);
    ~point();

    void setX(int a);
    void setY(int b);

    int getX();
    int getY();

    void print();
};