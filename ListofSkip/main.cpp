//���������kv�洢����

# include <iostream>
# include <skiplist.h>
# define FILE_PATH "./store/dumpFile"

using namespace std;

int main() {
	//key��int���ͣ����Ϊ�������ͣ���Ҫ�Զ���ȽϺ���
	//�޸�key��ͬʱҪȥ�޸�skiplist.loadfile����
	SkipList<int, string>skipList(6);
	skipList.insert_element(1, "����");
	skipList.insert_element(3, "һ��");
	skipList.insert_element(7, "����");
	skipList.insert_element(8, "�����");
	skipList.insert_element(9, "kv");
	skipList.insert_element(19, "�洢");
	skipList.insert_element(19, "����");

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