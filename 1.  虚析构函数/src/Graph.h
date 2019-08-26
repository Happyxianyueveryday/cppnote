#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * Graph: 有向图和无向图的抽象基类，包含有向图和无向图的公共接口
 */
class Graph
{
    public:
    virtual vector<int> dfs() const = 0;    // 图的深度优先遍历
    virtual vector<int> bfs() const = 0;    // 图的广度优先遍历
    virtual string toString() const = 0;    // 将图转化为字符串输出
    virtual ~Graph() {}                     // 抽象基类的虚析构函数 
};

#endif
