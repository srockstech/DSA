template <typename T>
class vector1{
    T *arr;
    int vectorSize;
    int vectorCapacity;

    public:
    vector1(){
        vectorSize = 0;
        vectorCapacity = 0;
        arr = new T[vectorCapacity];
    }

    vector1(int capacity){
        vectorSize = capacity;
        vectorCapacity = capacity;
        arr = new T[vectorCapacity];
        for(int i = 0; i < vectorSize; i++){
            arr[i] = 0;
        }
    }

    vector1(int capacity, int elementsValue){
        vectorSize = capacity;
        vectorCapacity = capacity;
        arr = new T[vectorCapacity];
        for(int i = 0; i < vectorSize; i++){
            arr[i] = elementsValue;
        }
    }

    void push_back(T element){
        if(vectorSize == vectorCapacity){
            if(vectorCapacity == 0){
                vectorCapacity = 1;
            }
            else{
                vectorCapacity = 2*vectorCapacity;
            }
            
            T *oldArray = arr;
            arr = new T[vectorCapacity];
            for(int i = 0; i < vectorSize; i++){
                arr[i] = oldArray[i];
            }
            delete [] oldArray;
        }
        arr[vectorSize] = element;
        vectorSize++;
    }

    void pop_back(){
        if(vectorSize>0){
            vectorSize--;
        }
    }

    bool empty() const{
        return vectorSize == 0;
    }

    int size() const{
        return vectorSize;
    }

    int capacity() const{
        return vectorCapacity;
    }

    T front() const{
        return arr[0];
    }

    T back() const{
        return arr[vectorSize-1];
    }

    T at(int i) const{
        return arr[i];
    }
};