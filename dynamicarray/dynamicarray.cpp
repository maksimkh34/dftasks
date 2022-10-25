#include <iostream>

template <typename _t>

class darry
{
public:

    darry(int msize)
    {
        _size = msize;
        for (int i = 0; i < size_of(darr); i++)
        {
            darr[i] = {};
        }
    }

    int size_of(_t elem)
    {
        return sizeof(elem) / sizeof(_t);
    }

    size_t getSize()
    {
        return _size;
    }

    _t getArray()
    {
        return darr;
    }

    _t getElem(int index)
    {
        return darr[index];
    }

    void setSize(int size)
    {
        _size = size;
    }

private:
    size_t _size;
    _t* darr = new _t[_size];
};

int main()
{
    int abc = 5;
    darry<int> object(5);
    for (int i = 0; i < object.getSize(); i++)
    {
        std::cout << object.getElem(i) << std::endl;
    }
}