#pragma once

#include <vector>
#include <utility>

template<typename KeyType, typename DataType>
class Hashmap
{
public:
    using MapType = std::pair<KeyType, DataType>;
    Hashmap() {}
    ~Hashmap() {}

    void insert(MapType);
    void erase();
    size_t size() const;
    size_t empty() const;

private:
    struct Entry
    {
        Entry(KeyType inKey, DataType inData)
            : key(inKey), data(inData)
        {}

        KeyType key;
        DataType data;
    };

    std::vector<Entry> mEntry;
};

template<typename KeyType, typename DataType>
void Hashmap<KeyType, DataType>::insert(MapType map)
{
    Entry entry{map.first, map.second};
    mEntry.emplace_back(std::move(entry));
}

template<typename KeyType, typename DataType>
void Hashmap<KeyType, DataType>::erase()
{
    mEntry.clear();
}

template<typename KeyType, typename DataType>
size_t Hashmap<KeyType, DataType>::size() const
{
    return mEntry.size();
}

template<typename KeyType, typename DataType>
size_t Hashmap<KeyType, DataType>::empty() const
{
    return mEntry.empty();
}
