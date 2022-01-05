//TC -> O(1)
//SC -> O(N)
class FreqStack {
map<int,int> mp;
map<int,stack<int>> freqSetMap;
int maxFreq;
public:
    FreqStack() {
        maxFreq=0;
    }
    
    void push(int val) {
        int freq=mp[val]+1;
        mp[val]=freq;            
        if(freq>maxFreq) maxFreq=freq;
        freqSetMap[freq].push(val);
    }
    
    int pop() {
        int elem=freqSetMap[maxFreq].top();
        freqSetMap[maxFreq].pop();
        mp[elem]=mp[elem]-1;
        if(freqSetMap[maxFreq].empty()) maxFreq--;
        return elem;
        
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */