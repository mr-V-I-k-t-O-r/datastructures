template<class T>
class linked_list
{
public:
	template<class T>
	class element
	{
	public:
		T value;
		element<T>* next;
		element(T value)
		{
			this->value = value;
			this->next = nullptr;
		}
	};

	linked_list()
	{
		this->head = nullptr;
	}

	void push_back(T value)
	{
		if(this->head == nullptr)
		{
			this->head = new element<T>(value);
		}
		else
		{
			element<T>* now = this->head;
			while(now->next != nullptr)
			{
				now = now->next;
			}
			now->next = new element<T>(value);
		}
	}

	void push_front(T value)
	{
		element<T>* h = new element<T>(value);
		h->next = this->head;
		this->head = h;
		h = nullptr;
	}

	void pop_back()
	{
		element<T>* now = this->head;
		if (now->next == nullptr)
		{
			delete head;
			head = nullptr;
		}

		while (now->next->next != nullptr)
		{
			now = now->next;
		}
			delete now->next;
			now->next = nullptr;
	}

	void pop_front()
	{
		element<T>* h = this->head->next;
		delete this->head;
		this->head = h;
		h = nullptr;
		
	}

private:
	element<T>* head;	
};


template<class T>
class doubly_linked_list
{
public:
	template<class T>
	class element
	{
	public:
		T value;
		element<T>* next;
		element<T>* previous;
		element(T value)
		{
			this->value = value;
			this->next = nullptr;
			this->previous = nullptr;
		}
	};

	doubly_linked_list()
	{
		this->head = nullptr;
	}

	void push_back(T value)
	{
		if (this->head == nullptr)
		{
			this->head = new element<T>(value);
		}
		else
		{
			element<T>* el = new element<T>(value);
			element<T>* now = this->head;
			while (now->next != nullptr)
			{
				now = now->next;
			}
			now->next = el;
			el->previous = now;
			el = nullptr;
			now = nullptr;
		}
	}

	void push_front(T value)
	{
		element<T>* el = new element<T>(value);
		el->next = this->head;
		this->head->previous = el;
		this->head = el;
		el = nullptr;
	}

	void pop_back()
	{
		element<T>* now = this->head;
		if (now->next == nullptr)
		{
			delete head;
			head = nullptr;
		}

		while (now->next != nullptr)
		{
			now = now->next;
		}
		now = now->previous;
		delete now->next;
		now->next = nullptr;
	}

	void pop_front()
	{
		element<T>* el = this->head->next;
		delete this->head;
		this->head = el;
		this->head->previous = nullptr;
		el = nullptr;
	}

private:
	element<T>* head;
};