class RandomizedSet {
public:
unordered_map<int,int> m;
vector<int> v;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(m[val]==0)
        {
            m[val]=v.size()+1;
            v.push_back(val);
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(m[val]==0)
        return false;
        v[m.find(val)->second-1]=v.back();
        m[v.back()]=m.find(val)->second;
        v.pop_back();
        m[val]=0;
        return true;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */