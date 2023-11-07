/*练习stl中的map*/
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    string name[] = {"123","李四","王五"};
    double salary[] = {2000,2500,3000};
    map<string,double> sal;
    map<string,double>::iterator p;
    for(int i =0 ; i<3 ; i++){
        sal.insert(make_pair(name[i],salary[i]));
    }
    sal["tom"] = 6156;
    sal["bob"] = 5999;
    for (p = sal.begin(); p != sal.end(); p++) {
        cout << p->first << "\t" << p->second << endl;
    }


    string person;
    cout<<"输入要查询人的姓名"<<endl;
    cin>>person;
    int flag =1;
    for (p=sal.begin();p!=sal.end();p++){
        if(p->first==person){
            cout<<p->second<<endl;
            flag=0;
        }
    }
    if (flag){
        cout << "没查找到对应的结果！" << endl;
    }
    cout<<"输入要删除人的姓名"<<endl;
    cin>>person;
    map<string,double>::iterator it;
    it = sal.find(person);
    // cout<<"end是"<<sal.end()->first<<":"<<sal.end()->second<<endl;
    if(it!=sal.end()){
        cout<<"查找成功"<<endl<<(*it).first<<":"<<(*it).second<<endl;
        sal.erase(it);
        cout<<"删除成功"<<endl;
    }
    cout << "删除后的结果为" << endl;
    for (p = sal.begin(); p != sal.end(); p++) {
        cout << p->first << p->second << endl;
    }
    
    return 0;
}
