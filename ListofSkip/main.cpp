//基于跳表的kv存储引擎

# include <iostream>
# include <skiplist.h>
# define FILE_PATH "./store/dumpFile"

using namespace std;

int main() {
	//key用int类型，如果为其它类型，需要自定义比较函数
	//修改key的同时要去修改skiplist.loadfile函数
	SkipList<int, string>skipList(6);
	skipList.insert_element(1, "这是");
	skipList.insert_element(3, "一个");
	skipList.insert_element(7, "基于");
	skipList.insert_element(8, "跳表的");
	skipList.insert_element(9, "kv");
	skipList.insert_element(19, "存储");
	skipList.insert_element(19, "引擎");

	cout << "skipList size: " << skipList.size() << endl;

	skipList.dump_file();

	skipList.search_element(9);
	skipList.search_element(18);

	skipList.display_list();

	skipList.delete_element(3);
	skipList.delete_element(7);

	cout << "skipList size: " << skipList.size() << endl;
	skipList.display_list();
}