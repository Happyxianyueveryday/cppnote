#ifndef NDGARPH_H
#define NDGRAPH_H
#include "Graph.h"
#include <iostream>
#include <string>

using namespace std;

class NdGraph: public Graph
{
	public:
    ~NdGraph();
    vector<int> dfs() const override;    // 图的深度优先遍历
    vector<int> bfs() const override;    // 图的广度优先遍历
    string toString() const override;    // 将图转化为字符串输出
};

vector<int> NdGraph::dfs() const 
{
}
    
vector<int> NdGraph::bfs() const 
{
	
}

string NdGraph::toString() const 
{
	
}

NdGraph::~NdGraph()
{
    cout<<"派生类的析构函数"<<endl;
}

#endif
