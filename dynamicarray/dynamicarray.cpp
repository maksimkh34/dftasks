#include <iostream>

template <typename _t>

class darry
{
public:

    darry(int msize)
    {
        _size = msize;
        start(_size);
    }

    void clearArr(int size)
    {
        for (int i = 0; i < size; i++)
        {
            darr[i] = 0;
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

    void setElem(int index, _t w)
    {
        darr[index] = w;
    }

    void setSize(int size)
    {
        _size = size;
    }

    _t* retArr()
    {
        return darr;
    }

private:
    size_t _size;
    _t* darr;
    void start(size_t sz)
    {
        darr = new _t[sz];
    }
};

int main()
{
    darry<int> object(5);
    object.clearArr(5);
    for (size_t i = 0; i < object.getSize(); i++)
    {
        std::cout << object.getElem(i) << std::endl;
    }
}
