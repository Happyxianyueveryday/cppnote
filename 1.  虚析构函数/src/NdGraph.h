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
    vector<int> dfs() const override;    // ͼ��������ȱ���
    vector<int> bfs() const override;    // ͼ�Ĺ�����ȱ���
    string toString() const override;    // ��ͼת��Ϊ�ַ������
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
    cout<<"���������������"<<endl;
}

#endif
