#include <iostream>
using namespace std;


class siswa;
class orang
{
private :
    string nama;

public :
    void setnama(string pNama);
    friend class siswa;

    class siswa
    {
    private :
        int id;
    public:
        void setId(int pId);
        void displayALL(orang& a);

        

int main()
{
    std::cout << "Hello World!\n";
}


