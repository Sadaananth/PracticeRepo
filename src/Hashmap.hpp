#pragma once

#include <vector>

template<typename KeyType, typename DataType>
class Hashmap
{
public:
    Hashmap() {}
    ~Hashmap() {}
private:
    struct Entry
    {
        KeyType key;
        DataType data;
    };

    std::vector<Entry> mEntry;
};
