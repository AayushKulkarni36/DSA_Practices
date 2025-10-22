# include <bits/stdc++.h>
using namespace std;
class Student
{
    private:
        char name[30];
        int maths;
        int phy;
        int chem;
    public:
    void setName(const char* n)
    {   
        strcpy(name,n);
    }
    void setmath(int m)
    {   
        maths=m;
    }
    void setphy(int p)
    {   
        phy=p;
    }
    void setchem(int c)
    {   
        chem=c;
    }

    const char* getName()
    {
        return name; 
    }
    int getMath()
    {
        return maths;
    }
    int getPhy()
    {
        return phy;
    }
    int getChem()
    {
        return chem;
    }

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Maths:"<<maths<<endl;
        cout<<"P:"<<phy<<endl;
        cout<<"C:"<<chem;
    }

};
int main()
{
    Student s1;
    s1.setName("Aayush");
    s1.setmath(90);
    s1.setphy(94);
    s1.setchem(89);
    s1.display();



}