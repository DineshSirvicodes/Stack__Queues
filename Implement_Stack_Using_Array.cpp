class Stack{
  int size;
  int * arr;
  int top;
  public:
    Stack() {
      top = -1;
      size = 1000;
      arr = new int[size];
    }
    void push(int x){
      top++;
      arr[top] = x;
    }
    int pop(){
      int x = arr[top]; // this element would be the popped . The element will still stay in array, just top is top--, and the top points top-1. meaning new top value
      top--;
      return x;
    }
    int top(){
      return arr[top];
    }
    int size(){
      return top + 1;
    }
    bool empty(){
      if(top == -1) return true; // st.empty() -> if empty return true ,else false
      else false;
    }

}
