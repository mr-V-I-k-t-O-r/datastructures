template(class T)
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
			this + i = value;
		}
	}

	~array()
	{
		delete[] this->pointer;
		
	}

	void size()
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
			this + place = value;
		}
	}

	T* operaror[int place]
	{
		return this + place;
	}

private:
	int size;
	T* pointer;
};
