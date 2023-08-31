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

	void change(int place, T value)
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


template<class T>
class dynamic_array
{
public:
	dynamic_array()
	{
		this->size = 1;
		this->pointer = new T;
		this->last = 0;
	}

	dynamic_array(int num)
	{
		this->size = num;
		this->pointer = new T[num + num / 2];
		this->last = 0;
	}

	dynamic_array(int num, T value)
	{
		this->size = num;
		this->pointer = new T[num + num / 2];
		int i = 0;
		for (i; i < num; i++)
		{
			this->pointer[i] = value;
		}
		this->last = i;
	}

	~dynamic_array()
	{
		delete[] this->pointer;
	}

	void length()
	{
		return this->last;
	}

	void capasity()
	{
		return this->size;
	}

	void change(int place, T value)
	{
		if (place >= this->size || place < 0)
		{
			throw "this array don`t have an element by this number";
		}
		else
		{
			this->pointer[place] = value;
		}
	}

	void insert(T value, int place)
	{
		if(place < size)
		{
			T* new_ptr = this->pointer + place;
			T buff;
			while (place < last)
			{
				buff = this->pointer[place];
				this->pointer[place++] = value;
				value = buff;
			}
		}
		else
		{
			this->push_back(value);
		}
	}

	T& operator[ ](int place)
	{
		return this->pointer[place];
	}

	void push_back(T value)
	{
		if (last < size)
		{
			this->pointer[last++] = value;
		}
		else
		{
			this->expand();
			this->push_back(value);
		}
	}

	void push_front(T value)
	{
		if(this->last < this->size)
		{
			int i = 0;
			T buff;
			while (i <= last)
			{
				buff = this->pointer[i];
				this->pointer[i] = value;
				i++;
				value = buff;
			}
			last++;
		}
		else
		{
			this->expand();
			this->push_front(value);
		}
	}

	void pop_back()
	{
		this->pointer[--last] = 0;
	}

	void pop_front()
	{
		for (int i = 0; i < last; i++)
		{
			this->pointer[i] = this->pointer[i + 1];
		}
		this->pointer[last--] = 0;
	}

private:
	int size;
	int last;
	T* pointer;

	void expand()
	{
		T* new_ptr = new T[2 * this->size];
		for (int i = 0; i < this->last; i++)
		{
			new_ptr[i] = this->pointer[i];
		}
			delete[] this->pointer;
			this->pointer = new_ptr;
			new_ptr = nullptr;
			this->size *= 2;
	}
};
