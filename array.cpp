template<class T>
class array
{
public:
	array(int num)

	{
		this->size = num;
		this->pointer = new T[num];
	}
 
	array(int num, T value)
	{
		this->size = num;
		this->pointer = new T[num];
		for(int i = 0; i < num; i++)
		{
			this->pointer[i] = value;
		}
	}

	~array()
	{
		delete[] this->pointer;
		
	}

	void length()
	{
		return this->size;
	}

	void insert(int place, T value)
	{
		if(place >= this->size || place < 0)
		{
			throw "this array don`t have an element by this number";
		}
		else
		{
			this->pointer[place] = value;
		}
	}

	T& operator[ ](int place)
	{
		return this->pointer[place];
	}

private:
	int size;
	T* pointer;
};
