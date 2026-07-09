#include "vectorex/vector.hpp"

Vector::Vector(std::vector<float> data)
{
    data_ = data;
}

int Vector::size() const
{
    return data_.size();
}

float Vector::get(int index)
{
    return data_[index];
}

std::vector<float> Vector::getData()
{
    return data_;
}
