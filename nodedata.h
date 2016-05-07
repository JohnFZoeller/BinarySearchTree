#ifndef NODEDATA_H
#define NODEDATA_H
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

// simple class containing one string to use for testing
// not necessary to comment further

class NodeData 
{
    friend ostream & operator<<(ostream &, const NodeData &);

    private:
        string data;
        
    public:
        NodeData();
        ~NodeData();
        NodeData(const string &);
        NodeData(const NodeData &);
        NodeData& operator=(const NodeData &);
	                                                                                         // returns true if the data is set, false when bad data, i.e., is eof
        bool setData(istream&);                                                     // set class data from data file

        bool operator==(const NodeData &) const;
        bool operator!=(const NodeData &) const;
        bool operator<(const NodeData &) const;
        bool operator>(const NodeData &) const;
        bool operator<=(const NodeData &) const;
        bool operator>=(const NodeData &) const;
};

#endif
