#include <iostream>
using namespace std;
class GPUProfile
{
    int BaseClock;
    
    int BoostClock;

public:
    GPUProfile(int clock, int multiplier) : BaseClock(clock), BoostClock(BaseClock * multiplier)
    {
    }
    void showSpecs()
    {
        cout << "Base Clock: " << BaseClock << " MHz" << endl
             << "Boost Clock: " << BoostClock << " MHz" << endl;
    }
}; 
int main()
{
    GPUProfile myGPU(1500, 2);
    myGPU.showSpecs();
    return 0;
}
