class A
{
    public:
        int a;
        int b;

    int add(int x)
    {
        return  this->a + x; 
    }
    int add(int x, int y)
    {
        return this->a + x + y + 20;
    }
};