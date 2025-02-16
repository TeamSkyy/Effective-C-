class Uncopyable {
protected:
    Uncopyable() {};
    ~Uncopyable() {};
private:
    Uncopyable(const Uncopyable&);//only decleration, no definition
    Uncopyable& operator=(const Uncopyable&);
};
class HomeForSale:private Uncopyable  {
//private:
//    HomeForSale(const HomeForSale&);//only decleration, no definition
//    HomeForSale& operator=(const HomeForSale&); //put it in private
public:
    HomeForSale(){}
    friend void friendFun();//but the friend func or class still have access
};
//void friendFun() {
//    HomeForSale h1;
//    HomeForSale h2;
//    HomeForSale h3(h1);//inaccessible
//    h1 = h2;
//}
int main()
{
    

}
