#include<iostream>
#include<vector>

class dia{
public:
  dia(): name{"NoName"},a{}{};        //constructor
  dia(std::string x): name{x},a{}{};
  dia(std::string,int);
  void printdia();                    //hiển thị đĩa
  int size() {return a.size();}       //kích thước đĩa
  void operator>>(dia&); //Chuyển cái cao nhất sang đĩa khác
private:
  std::string name;                   //tên đĩa
  std::vector<int> a;                 //dãy số các đĩa
  //số đĩa càng lớn thì đại diện cho đĩa càng lớn
};

dia::dia (std::string x,int y): name{x}{
for (int i=0;i<y;++i){
a.push_back(y-i);
}
}

void dia::printdia() {
std::cout<<name<<": ";
for (int i=0; i<a.size();++i) std::cout<<a[i]<<" ";
std::cout<<"\n";
}

void dia::operator>>(dia& x){
if (a.size()==0) {
std::cout<<"Ko có đĩa để dịch chuyển!\n";
return;
}
x.a.push_back(a.back());
a.pop_back();
}

void xepdia(dia& a,dia& b,dia& c,int n){
if (n>1){
//giải thích thuật toán ni tại: https://husteduvn-my.sharepoint.com/:x:/g/personal/phat_nd2514310_sis_hust_edu_vn/IQCi8K1QPwG7T6OqDSUINAKCAdfj5_HqPyJrZTra5DiP6qU?e=eB1oBP
xepdia(a,c,b,n-1);
a>>c;
a.printdia();
b.printdia();
c.printdia();
std::cout<<"\n";
xepdia(b,a,c,n-1);
}
else {
a>>c;
a.printdia();
b.printdia();
c.printdia();
std::cout<<"\n";
}
}

int main(){
int n;
std::cin>>n;
dia a{"Đĩa 1",n},b{"Đĩa 2"},c{"Đĩa 3"};
a.printdia();
b.printdia();
c.printdia();
std::cout<<"\n";
xepdia(a,b,c,n);
return 0;
}
