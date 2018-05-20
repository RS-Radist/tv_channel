#ifndef Tv_Channel_hpp
#define Tv_Channel_hpp
#include <stdio.h>
#include <vector>
#include <string>
using namespace std;
class Tv_channel
{
    std::vector<int> channel;
    std::vector<std::string> time;
    std::vector<std::string> nameChannel;
    std::vector<std::string> typeChannel;
public:
    Tv_channel()
    {}
    ~Tv_channel()
    {}
    friend ostream &operator<<(ostream &output,Tv_channel& tv);
    friend istream &operator>> (istream &input,Tv_channel& tv);
    friend bool operator < (const Tv_channel& tv1, const Tv_channel& tv2);
    friend bool operator > (const Tv_channel& tv1, const Tv_channel& tv2);
    friend bool operator == (const Tv_channel& tv1, const Tv_channel& tv2);
    friend bool operator != (const Tv_channel& tv1,const Tv_channel& tv2);
    
    std::vector<int> GetChannel() const;
    std::vector<string> GetTimeChannel() const;
    std::vector<string> GetNameChannel() const;
    std::vector<string> GetTypeChannel() const;
    
//    bool operator () (Tv_channel& a1,Tv_channel& a2);// ??
};
#endif /* Tv_Channel_hpp */
