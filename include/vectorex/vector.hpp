#pragma once
#include<vector>

class Vector{
    private:
        std::vector<float> data_;
    public:

    explicit Vector(std::vector<float> data);

    int size() const;

    float get(int index);

    std::vector<float> getData();
};
