class RandomizedSet {
public:
    set<int> num_set;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(num_set.count(val)==0){
            num_set.insert(val);
            return true;
        }else{
            return false;
        }
    }
    
    bool remove(int val) {
       if(num_set.count(val)==0){
            return false;
        }else{
            num_set.erase(val);
            return true;
        } 
    }
    
    int getRandom() {
        set<int>::iterator itr = num_set.begin();
        int random_number = rand()%(num_set.size());
        for(int i = 0 ; i< random_number ; i++){
            itr++;
        }
        return *itr;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */