#include <iostream>
using namespace std;

class Human
{
private:
    int height;
    int weight;
    int age;

public:
    void setHeight(int height)
    {
        this->height = height;
    }

    void setWeight(int weight)
    {
        this->weight = weight;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    int getAge()
    {
        return age;
    }

    int getHeight()
    {
        return height;
    }

    int getWeight()
    {
        return weight;
    }
};

class Male : public Human
{
public:
    string color;

    void Attack()
    {
        cout << "Attack is done!" << endl;
    }

    void sleep()
    {
        cout << "Male is sleeping" << endl;
    }
};

int main(int argc, char const *argv[])
{

    Male Pratik;
    Pratik.setAge(21);
    cout << Pratik.getAge() << endl;

    Pratik.setHeight(181);
    cout << Pratik.getHeight() << endl;

    Pratik.sleep();

    return 0;
}
