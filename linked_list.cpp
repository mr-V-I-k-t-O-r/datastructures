template<class T>
class linked_list
{
public:
	template<class T>
	class element
	{
	public:
		T value;
		element* next;
		element(T value)
		{
			this->value = value;
			this->next = nullptr;
		}
	};

	linked_list()
	{
		 
		head = nullptr;
	}

	void push_back(T value)
	{
		if(head == nullptr)
		{
			head = new element(value);
		}
		else
		{
			element* now = head;
			while(now->next != nullptr)
			{
				now = now->next;
			}
			now->next = new element(value);
		}
	}

	void push_front(T value)
	{
		element* h = new element(value);
		h->next = this->head;
		this->head = h;
		h = nullptr;
	}

	void pop back()
	{
		element* now = this->head;
		while(now->next->next != nullptr)
		{
			now = now->next;
		}
		delete now->next;
		now->next = nullptr;
	}

	void pop front()
	{
		element* h = this->head;
		this->head = h->next;
		delete h;
	}

private:
	static element* head;
	
};
