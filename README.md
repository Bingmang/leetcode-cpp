# leetcode-cpp

记录用cpp刷leetcode的过程。

#### 0001.twoSum

思路：用kv记录看到的数字，需要记录数字出现的顺序，在遍历数组的时候边查询边记录。

#### 0200.numberOfIslands

参考资料：https://www.cnblogs.com/grandyang/p/4402656.html

思路：逐元素遍历输入的二维数组，遇到1时展开BFS搜索，并用记录下遇到过的节点。
