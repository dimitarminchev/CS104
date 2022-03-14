#include <string.h>
#include <ostream>
class ZString
{
private:
	char* buf = nullptr;
	unsigned int size = 0;

public:
	ZString() : buf(nullptr), size(0)
	{
	}

	ZString(const char* const buffer)
	{
		size = strlen(buffer);
		buf = new char[size + 1];
		strncpy_s(buf, size + 1, buffer, size);
	}

	ZString(const ZString& obj)
	{
		size = obj.size;
		buf = new char[size + 1];
		strncpy_s(buf, size + 1, obj.buf, size);
	}

	ZString& operator=(const ZString& obj)
	{
		__cleanup__();

		size = obj.size;
		buf = new char[size + 1];
		strncpy_s(buf, size + 1, obj.buf, size);
		return *this;
	}

	ZString(ZString&& dyingObj)
	{
		__cleanup__();

		size = dyingObj.size;

		buf = dyingObj.buf;
		dyingObj.buf = nullptr;
	}

	ZString& operator=(ZString&& dyingObj)
	{
		__cleanup__();

		size = dyingObj.size;

		buf = dyingObj.buf;
		dyingObj.buf = nullptr;

		return *this;
	}

	ZString operator+(const ZString& obj)
	{
		ZString s;
		s.size = this->size + obj.size;
		s.buf = new char[s.size + 1];
		strncpy_s(s.buf, this->size + 1, this->buf, this->size);
		strncpy_s(s.buf + this->size, obj.size + 1, obj.buf, obj.size);

		return s;
	}

	unsigned int length()
	{
		return size;
	}

	const char* c_str() const
	{
		return buf;
	}

	~ZString()
	{
		__cleanup__();
	}

private:
	void __cleanup__()
	{
		if (buf != nullptr)
		{
			delete[] buf;
		}
		size = 0;
	}
};

std::ostream& operator<<(std::ostream& cout, const ZString& obj)
{
	cout << obj.c_str();
	return cout;
}