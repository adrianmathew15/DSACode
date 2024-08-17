
template<typename T>
class Vector{

    //Data members
    T *arr;
    int cs; //current size
    int ms; //max size

public:
    //Constructor
    Vector(int max_size=1){
        cs=0;
        ms=max_size;
        arr = new T[ms];
    }

    //Methods
    void push_back(const T d) {
        //Two cases
        if(cs==ms) {
            //Create a new array and delete the old one, double the capacity
            T *oldArr = arr;
            ms = 2*ms;
            arr = new T[ms];

            for(int i=0; i<cs; i++) {
                arr[i] = oldArr[i];
            }

            delete [] oldArr;
        }

        arr[cs] = d;
        cs++;
    }

    void pop_back() {
        if(cs>=0){
            cs--;
        }
    }

    bool isEmpty() const {
        return cs==0;
    }
    
    T front() const{
        return arr[0];
    }

    T back() const{
        return arr[cs-1];
    }

    T at(int i) const{
        return arr[i];
    }

    int size() const{
        return cs;
    }

    int capacity() {
        return ms;
    }

    T operator[] (const int i) const{
        return arr[i]; 
    }

};
