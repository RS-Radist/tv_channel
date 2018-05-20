#include "External_Function.hpp"
void OutputChannel (Tv_channel& tv)
{
    cout<<tv;
}
void OutputChannel(Tv_channel& tv,string channelName)
{
    for(int i=0;i<tv.GetChannel().size();++i)
    {
        if(tv.GetNameChannel()[i]==channelName)
        {
            cout<<tv.GetChannel()[i]<<" "
            <<tv.GetTimeChannel()[i]<<" "
            <<tv.GetNameChannel()[i]<<" "
            <<tv.GetTypeChannel()[i]<<" "<<endl;
        }
    }
}
//void SortChannelName(Tv_channel& tv,string nameChannel)
//{
//    for(int i=0;i<tv.GetChannel().size();++i)
//    {
//        if(tv.GetNameChannel()[i]==nameChannel)
//        {
//            sort(tv.GetNameChannel()[i].begin(),tv.GetNameChannel()[i].end(),Pred);/////?
//        }
//    }
//}
static bool Pred (Tv_channel& a1)
{
    
    return a1.GetTypeChannel()[0]=="Sport";
    
}
bool Count_if_function(Tv_channel& tv)
{
    vector<string>::iterator it=tv.GetTypeChannel().begin();
    vector<string>::iterator en=tv.GetTypeChannel().end();
    return count_if(it,en,Pred)?true: false;
   
}
