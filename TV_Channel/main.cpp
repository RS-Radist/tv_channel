#include <iostream>
#include <vector>
#include <string>
#include <istream>
#include <ostream>
#include <algorithm>
#include "Tv_Channel.hpp"
#include "External_Function.hpp"
using namespace std;



 


int main()
{
    int size=2;
    Tv_channel channel[size];
    cin>>channel[0];
    cin>>channel[1];
//    cin>>channel[2];
//    cin>>channel[3];
//    cin>>channel[4];
    for(int i=0;i<size;++i)
    {
        OutputChannel(channel[i]);
    }
    cout<<endl;
    for(int i=0;i<size;++i)
    {
        OutputChannel(channel[i],"Mach");
    }
    cout<<endl;
    for(int i=0;i<size;++i)
    {
        Count_if_function(channel[i]);
    }
    
//    for(int i=0;i<size;++i)
//    {
//        SortChannelName(channel[i], "Ntv");
//    }
    
    
    
//    cout<<endl;
//    for(int i=0;i<size;++i)
//    {
//        OutputChannel(channel[i]);
//    }
    
    
    
    
//    OutputChannel(*channel,3);
//    SortChannelName(*channel, "ort");
//
    
    

}
