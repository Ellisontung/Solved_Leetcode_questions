class MyCircularQueue {
public:
    vector<int> vt;
    int size;
    MyCircularQueue(int k) {
        size = k;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        vt.push_back(value);
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        for(int i = 1 ; i < vt.size() ; i++){
            swap(vt[i-1],vt[i]);
        }
        vt.pop_back();
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        else return vt[0];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        else return vt[vt.size()-1];
    }
    
    bool isEmpty() {
        if(vt.size()==0) return true;
        else return false;
    }
    
    bool isFull() {
        if(vt.size()==size) return true;
        else return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */