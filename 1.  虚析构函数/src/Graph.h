#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * Graph: ����ͼ������ͼ�ĳ�����࣬��������ͼ������ͼ�Ĺ����ӿ�
 */
class Graph
{
    public:
    virtual vector<int> dfs() const = 0;    // ͼ��������ȱ���
    virtual vector<int> bfs() const = 0;    // ͼ�Ĺ�����ȱ���
    virtual string toString() const = 0;    // ��ͼת��Ϊ�ַ������
    virtual ~Graph() {}                     // ������������������ 
};

#endif
