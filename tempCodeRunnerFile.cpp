class man
{
public:
    // defining the attributes, or the model of the class
    int age;
    std::string name;

    // defining the methods of the class
public:
    void output(int age, string name)
    {
        std::cout << 'he is' << age;
        std::cout << name << 'is from tashigang';
    }
};
int main()
{
    man apple;
    apple.output(12, 'tshewang');
    return 0;
}