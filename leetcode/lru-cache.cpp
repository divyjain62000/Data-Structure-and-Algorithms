// get operation -> O(1)
// put operation -> O(1)
// SC -> O(capacity)
class LRUCache {
list<pair<int,int>> cache;
unordered_map<int,list<pair<int,int>>::iterator> mp;
int capacity;
void refreshCache(int key,int value)
{
    cache.erase(mp[key]);
    cache.push_front(make_pair(key,value));
    mp[key]=cache.begin();
}
public:
    LRUCache(int capacity) {
        this->capacity=capacity;
    }
    
    int get(int key) {
        if(mp.find(key)!=mp.end())
        {
            refreshCache(key,(*mp[key]).second);
            return (*mp[key]).second;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end())
        {
            refreshCache(key,value);
        }
        else
        {
            cache.push_front(make_pair(key,value));
            mp[key]=cache.begin();
            if(mp.size()>capacity)
            {
                mp.erase(cache.back().first);
                cache.pop_back();
            }
            
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */