#include<iostream>
using namespace std;
void mashup(int target,int value){
for(int i=0;i<target;i++){
    for(int j=0;j<value;j++){
        cout<<"*";
    }
   cout<<endl;
 }
}
int main(){
    int target=5;
    int value=5;
   mashup(target,value);

}