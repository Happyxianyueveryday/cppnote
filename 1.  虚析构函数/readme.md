## 虚析构函数

### 1. 何时需要使用虚析构函数？
必须使用虚析构函数的主要情景有两种：

+ 在继承部分中，基类的析构函数必须为虚析构函数。
+ 在接口部分中，抽象基类（接口）的析构函数必须为虚析构函数。

上述情况中若不使用虚析构函数，会出现的结果是：当使用基类或者抽象基类（接口）的指针或引用指向派生类的对象时，调用析构函数不会调用派生类对应的析构函数，而是会固定调用基类的析构函数，导致派生类不能被正确析构。

### 2. 示例
示例代码请参见路径/src下的源代码文件。
这里给出一个例子，假设存在一个图的抽象基类Graph，其中不存在虚析构函数。
```
/**
 * Graph: 有向图和无向图的抽象基类，包含有向图和无向图的公共接口
 */
class Graph
{
    public:
    virtual vector<int> dfs() const = 0;    // 图的深度优先遍历
    virtual vector<int> bfs() const = 0;    // 图的广度优先遍历
    virtual string toString() const = 0;    // 将图转化为字符串输出
};
```

而无向图类NdGraph继承了抽象基类Graph，且存在一个析构函数。

```
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
```

这时使用抽象基类Graph的指针指向派生类的对象，则析构时派生类析构函数不会被调用，因此派生类对象不能被正确析构。

```
int main(void)
{	
	Graph *pos=new NdGraph();
	delete pos;	
} 
```
