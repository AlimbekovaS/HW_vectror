#include"library.h"
#include"vector.h"
Vector::Vector()
{
	cur_size = 0;
	buf_size = 0;
	els = nullptr;

}
Vector::Vector(int size)
{
	this->cur_size = size;
	this->buf_size = size;
	for (int i = 0; i < size; i++)
	{
		els[i] = 0;
	}
}

int & Vector::push_back(int  el)
{
	if (buf_size == 0)
	{
		buf_size = 2;
		els = new int[buf_size];
	}
	else
	{
		if (buf_size <= cur_size)
		{
			buf_size *= 2;
			int *tmp = new int[buf_size];
			for (int i = 0; i < cur_size; i++)
			{
				tmp[i] = els[i];
			}
			delete[]els;
			els = tmp;
		}
	}
	els[cur_size] = el;
	cur_size++;
	return els[cur_size - 1];
}

int & Vector::at(int index)
{
	if (index<0 || index>size())
		return els[index];
	else
		return els[index];
}

int & Vector::operator[](int index)
{
	return els[index];
}

Vector Vector :: operator+(const Vector & obj)
{
	//Vector *tmp=new Vector[10];
	for (int i = 0; i < cur_size; i++)
	{
		this->els[i] += obj.els[i];
	}
	return *this;
}

Vector Vector :: operator-(const Vector & obj)
{
	buf_size = cur_size;
	for (int i = 0; i < buf_size; i++) 
	{
		for (int j = 0; j < buf_size; j++)
		{
			if (this->els[i] == obj.els[j])
			{
				for (int t = i; t < cur_size; t++)
				{
					this->els[t] = this->els[t + 1];
				}
				cur_size--;
			}

			
		}
	}
	return *this;
}

int  Vector:: operator<<(int index)
{
	int tmp = els[index];
	for (int i = index; i < cur_size; i++)
	{
		this->els[i] = this->els[i + 1];
	}
	cur_size--;
	return tmp;
}

int Vector:: operator>>(int el)
{
	if (buf_size <= cur_size)
	{
		buf_size *= 2;
		int *tmp = new int[buf_size];
		for (int i = 0; i < cur_size; i++)
		{
			tmp[i] = els[i];
		}
		delete[]els;
		els = tmp;
	}
	els[cur_size++] = el;

	return els[cur_size - 1];
}

void Vector:: print()
{
	for (int i = 0; i <size() ; i++)
	{
		cout << at(i) << " ";
	}
	cout << endl;
}
bool Vector:: operator==(Vector obj)
{
	if (size() != obj.size())
		return false;
	else {
		for (int i = 0; i < size(); i++)
			if (els[i] != obj.els[i])
				return false;
	}
	return true;
}

bool Vector:: operator!=(Vector obj)
{
	if (size() == obj.size())
		return false;
	else {
		for (int i = 0; i < size(); i++)
			if (els[i] == obj.els[i])
				return false;
	}
	return true;
}





