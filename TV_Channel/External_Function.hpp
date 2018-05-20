
#ifndef External_Function_hpp
#define External_Function_hpp

#include <stdio.h>
#include "Tv_Channel.hpp"
#include <iostream>
#include <string>
using namespace std;

void OutputChannel (Tv_channel& tv);
void OutputChannel(Tv_channel& tv,string channelName);
//void SortChannelName(Tv_channel& tv,int n);
//static bool Pred (Tv_channel& a1); // ?
bool Count_if_function(Tv_channel& tv);

#endif /* External_Function_hpp */
