class circularqueue{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    circularqueue(int n){
        size=100001;
        arr=new int[size];
        front=rear=-1;
    }
    bool enqueue(int value){
        if((front==0&& rear==size-1)||(rear==(front-1)%(size-1))){
            cout<<"queue is full";
            return false;
        }
        else{
            
        }
    }
}