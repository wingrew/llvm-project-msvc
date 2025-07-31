/*
私有析构函数的检查
*/
class S {
  ~S()=default;
};


int main(){
    S *ss = new S[100];
}