class point
{
	private:
		int x, y;

	public:

	point();
	point(int x, int y);
	~point();

    void setX(int xInput);
    void setY(int yInput);

    int getX();
    int getY();

    void print();
};