#include "Tv_Channel.hpp"
#include <iostream>
#include <vector>
#include <string>
ostream &operator<<(ostream &output,Tv_channel& tv)
    {
        output<<"Номер канала---------->";
        for(int i=0;i<tv.channel.size();i++)
        {
            output<<tv.channel[i]<<endl;
        }
        output<<"Время канала---------->";
        for(std::vector<string>::iterator it=tv.time.begin();it<tv.time.end();it++)
        {
            output<<*it<<endl;
        }
        output<<"Название канала---------->";
        for(std::vector<string>::iterator it=tv.nameChannel.begin();it<tv.nameChannel.end();it++)
        {
            output<<*it<<endl;
        }
        output<<"Тип канала---------->";
        for(std::vector<string>::iterator it=tv.typeChannel.begin();it<tv.typeChannel.end();it++)
        {
            output<<*it<<endl;
        }
        output<<endl;
        return output;
    }
    
    istream &operator>> (istream &input,Tv_channel& tv)
    {
        int number;
        string strTemp;
        input>>number;
        tv.channel.push_back(number);
        input>>strTemp;
        tv.time.push_back(strTemp);
        input>>strTemp;
        tv.nameChannel.push_back(strTemp);
        input>>strTemp;
        tv.typeChannel.push_back(strTemp);
        return input;
    }
    
    bool operator < (const Tv_channel& tv1, const Tv_channel& tv2)
    {
        if (tv1.GetChannel() < tv2.GetChannel())
        {
            return true;
        }
        else
            return false;
    }
    bool operator > (const Tv_channel& tv1, const Tv_channel& tv2)
    {
        if (tv1.GetChannel() > tv2.GetChannel())
        {
            return true;
        }
        else
            return false;
    }
    bool operator == (const Tv_channel& tv1, const Tv_channel& tv2)
    {
        if ((tv1.GetChannel()==tv2.GetChannel())
            &&(tv1.GetNameChannel()==tv2.GetNameChannel())
            &&(tv1.GetTimeChannel()== tv2.GetTimeChannel())
            &&(tv1.GetTypeChannel()==tv2.GetTypeChannel()))
        {
            return true;
        }
        else
            return false;
    }
    bool operator != (const Tv_channel& tv1,const Tv_channel& tv2)
    {
        return !(tv1 == tv2);
    }
    
    std::vector<int> Tv_channel::GetChannel() const
    {
        return  channel;
    }
    std::vector<string> Tv_channel::GetTimeChannel() const
    {
        return  time;
    }
    std::vector<string> Tv_channel::GetNameChannel() const
    {
        return  nameChannel;
    }
    std::vector<string> Tv_channel::GetTypeChannel() const
    {
        return  typeChannel;
    }
    
//    bool Tv_channel::operator () (Tv_channel& a1,Tv_channel& a2) // ?
//    {
//        return a1.channel<a2.channel;
//    }
