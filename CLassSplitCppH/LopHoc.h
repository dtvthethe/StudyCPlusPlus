#include <string>
using namespace std;

class LopHoc{
private:
    string maLop;
    string tenLop;
public:
    LopHoc();
    LopHoc(string maLop, string name);
    ~LopHoc();
public:
    void hienThiLopHoc();
    void hienThiLopHoc(string maLop, string name);
};